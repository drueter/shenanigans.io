package io.shenanigans.server;

import io.shenanigans.proto.Shenanigans.Submission;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

import javax.persistence.CascadeType;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.OneToMany;
import javax.persistence.Table;
import javax.persistence.Transient;

import com.lmax.disruptor.EventFactory;

@Entity
@Table
public class SubmissionReceipt {

	@Id
	@GeneratedValue(strategy=GenerationType.IDENTITY)
	private Long id;
	@Transient
	private Submission submission;
	private String ip;
	private String headers;
	@OneToMany(cascade = {CascadeType.ALL})
	private List<ProbeGroupData> probeGroups = new ArrayList<>();

	public SubmissionReceipt() {

	}

	public SubmissionReceipt(Submission submission, String ip,
			HashMap<String, String> headers) {
		this.submission = submission;
		this.ip = ip;
		this.headers = makeHeadersString(headers);
		submission.getGroupList().forEach(group ->
			probeGroups.add(new ProbeGroupData(group)));
		
	}

	public Long getId() {
		return id;
	}

	public void setId(Long id) {
		this.id = id;
	}

	public List<ProbeGroupData> getProbeGroups() {
		return probeGroups;
	}

	public void setProbeGroups(List<ProbeGroupData> probeGroups) {
		this.probeGroups = probeGroups;
	}

	public Submission getSubmission() {
		return submission;
	}

	public String getIp() {
		return ip;
	}

	public String getHeaders() {
		return headers;
	}
	
	public void setHeaders(String headers){
		this.headers = headers;
	}

	public void setSubmission(Submission submission) {
		this.submission = submission;
	}

	public void setIp(String ip) {
		this.ip = ip;
	}

	public void setHeaders(HashMap<String, String> headers) {
		
		this.headers = makeHeadersString(headers);
	}
	
	private String makeHeadersString(HashMap<String, String> headers2) {
		return ""; //FIXME - nyi
	}

	public void copyFrom(SubmissionReceipt another){
		this.submission = another.submission;
		this.ip = another.ip;
		this.id = another.id;
		this.headers = another.headers;
		this.probeGroups = new ArrayList<>(another.probeGroups);
		
	}

	public final static EventFactory<SubmissionReceipt> EVENT_FACTORY = new EventFactory<SubmissionReceipt>() {
		public SubmissionReceipt newInstance() {
			return new SubmissionReceipt();
		}
	};

}