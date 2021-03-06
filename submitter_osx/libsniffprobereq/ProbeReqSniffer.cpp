#include "ProbeReqSniffer.h"


using namespace Tins;


ProbeReqSniffer::ProbeReqSniffer(){
    interface = "";
}

ProbeReqSniffer::~ProbeReqSniffer(){
    ProbeGroupMapType::iterator it;
    for (it = groupMap.begin(); it != groupMap.end(); it++){
        if (it->second){
            delete it->second;
        }
    }
}


//Updates the list of probe groups, firing events for new groups and probes.

void ProbeReqSniffer::update(){
    snifferRunnable.launchMutex.lock();
    if (!(snifferRunnable.initialized && snifferRunnable.running)) return;
    //if (!snifferRunnable.running) return;
    snifferRunnable.launchMutex.unlock();
    
    if (groupMap.size() > 500){
        printf("Clearing list.");
        groupMap.clear();
        
    }
    snifferRunnable.drainQueue(&packetBuffer);
    std::vector<ProbeReq>::iterator ptr;

    for (ptr = packetBuffer.begin(); ptr != packetBuffer.end(); ptr++){
        ProbeGroupMapType::iterator groupPtr = groupMap.find(ptr->mac);
        
        int status;
        ProbeGroup * group;
        if (groupPtr == groupMap.end()){
            group = new ProbeGroup(*ptr);
            group->firstSeen.update();
            group->lastSeen = group->firstSeen;
            groupMap[ptr->mac] = group;
            status = STATUS_NEW_GROUP;
            
        } else {
            ProbeReq req = *ptr;
            group = groupPtr->second;
            bool newProbe = group->probeSeen(req);
            status = newProbe?STATUS_NEW_SSID:STATUS_REPEATED_PROBE;
        }
        
        // Notify the listeners.
        std::vector<ProbeGroupListener>::iterator listenerPtr;
        for (listenerPtr = groupListeners.begin(); listenerPtr != groupListeners.end(); listenerPtr++){
            ProbeGroupListener func = *listenerPtr;
            func(group, &(*ptr), status);
        }
    
    }
    packetBuffer.clear();
}


ProbeReqSniffer::SnifferRunnable::SnifferRunnable(){
}

ProbeReqSniffer::SnifferRunnable::~SnifferRunnable(){
    delete sniffer;
}

void ProbeReqSniffer::SnifferRunnable::run(){
    try {
        launchMutex.lock();
        //std::string defaultInterface = NetworkInterface::default_interface().name();
        //printf("Starting sniffer on interface: %s\n", defaultInterface.c_str());
        //FIXME: evaluate/handle cases where en0 is not the desired interface.
        sniffer = new Sniffer(interface, Sniffer::PROMISC, "type mgt subtype probe-req", true);
        sniffer->set_timeout(SNIFFER_TIMEOUT);
        
        initialized = true;
        launchMutex.unlock();
        sniffer->sniff_loop(Tins::make_sniffer_handler(this, &SnifferRunnable::handle));
        sniffer->stop_sniff();
        
       /* sniffer = new Sniffer("en0", Sniffer::PROMISC, "", false);
        sniffer->set_timeout(10);
        sniffer->next_packet();*/

        
    } catch(std::exception const & ex) {
        printf("Exception thrown starting sniffer loop: %s\n", ex.what());
        running = false;
    }
    delete sniffer;
    printf("Sniffer thread stopped.\n");
    
}

bool ProbeReqSniffer::SnifferRunnable::handle(PDU &pdu){
    if (!running) return false; // this handles the halt.
    const Dot11ProbeRequest &probe = pdu.rfind_pdu<Dot11ProbeRequest>();
    
    if (probe.ssid() == "BROADCAST"){
        return true; // skip these, they contain no SSID.
    }
    
    queueMutex.lock();
    // IF the queue has room, add the packet to the queue. If not, just drop it.
    if (packetQueue.size() < QUEUE_MAX){
        
        ProbeReq p = ProbeReq(probe.ssid(), probe.addr2().to_string(), pdu.serialize());
        packetQueue.push_back(p);
    }
    queueMutex.unlock();
    return true;
}

void ProbeReqSniffer::SnifferRunnable::drainQueue(std::vector<ProbeReq>* returnQueue){
    queueMutex.lock();
    if (!packetQueue.empty()){
        returnQueue->insert(returnQueue->end(), packetQueue.begin(), packetQueue.end());
        packetQueue.clear();
    }
    queueMutex.unlock();

}


ProbeGroupMapType* ProbeReqSniffer::getGroupMap(){
    return &groupMap;
}

void ProbeReqSniffer::addNewGroupListener(ProbeGroupListener listener){
    groupListeners.push_back(listener);
}

bool ProbeReqSniffer::isRunning(){
    return snifferRunnable.running;
}


void ProbeReqSniffer::start(std::string interface){ // FIXME - this should throw an exception if starting fails, and it should wait until initialized.
    if (snifferRunnable.running){
        printf("Sniffer is already running.");
    } else {
        if (thread.isRunning()) thread.join(SNIFFER_TIMEOUT); // thread is stopping -- wait for it to stop before starting again.
        snifferRunnable.running = true;
        snifferRunnable.interface = interface;
        thread.start(snifferRunnable);
    }
}

void ProbeReqSniffer::stop(){
    snifferRunnable.running = false;
}