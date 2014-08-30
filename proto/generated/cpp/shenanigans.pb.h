// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: shenanigans.proto

#ifndef PROTOBUF_shenanigans_2eproto__INCLUDED
#define PROTOBUF_shenanigans_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace io {
namespace shenanigans {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_shenanigans_2eproto();
void protobuf_AssignDesc_shenanigans_2eproto();
void protobuf_ShutdownFile_shenanigans_2eproto();

class Submission;
class Submission_ProbeGroup;
class Submission_ProbeGroup_ProbeReq;

// ===================================================================

class Submission_ProbeGroup_ProbeReq : public ::google::protobuf::MessageLite {
 public:
  Submission_ProbeGroup_ProbeReq();
  virtual ~Submission_ProbeGroup_ProbeReq();

  Submission_ProbeGroup_ProbeReq(const Submission_ProbeGroup_ProbeReq& from);

  inline Submission_ProbeGroup_ProbeReq& operator=(const Submission_ProbeGroup_ProbeReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const Submission_ProbeGroup_ProbeReq& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Submission_ProbeGroup_ProbeReq* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(Submission_ProbeGroup_ProbeReq* other);

  // implements Message ----------------------------------------------

  Submission_ProbeGroup_ProbeReq* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Submission_ProbeGroup_ProbeReq& from);
  void MergeFrom(const Submission_ProbeGroup_ProbeReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string ssid = 1;
  inline bool has_ssid() const;
  inline void clear_ssid();
  static const int kSsidFieldNumber = 1;
  inline const ::std::string& ssid() const;
  inline void set_ssid(const ::std::string& value);
  inline void set_ssid(const char* value);
  inline void set_ssid(const char* value, size_t size);
  inline ::std::string* mutable_ssid();
  inline ::std::string* release_ssid();
  inline void set_allocated_ssid(::std::string* ssid);

  // required bytes reqBytes = 2;
  inline bool has_reqbytes() const;
  inline void clear_reqbytes();
  static const int kReqBytesFieldNumber = 2;
  inline const ::std::string& reqbytes() const;
  inline void set_reqbytes(const ::std::string& value);
  inline void set_reqbytes(const char* value);
  inline void set_reqbytes(const void* value, size_t size);
  inline ::std::string* mutable_reqbytes();
  inline ::std::string* release_reqbytes();
  inline void set_allocated_reqbytes(::std::string* reqbytes);

  // @@protoc_insertion_point(class_scope:io.shenanigans.proto.Submission.ProbeGroup.ProbeReq)
 private:
  inline void set_has_ssid();
  inline void clear_has_ssid();
  inline void set_has_reqbytes();
  inline void clear_has_reqbytes();

  ::std::string* ssid_;
  ::std::string* reqbytes_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_shenanigans_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_shenanigans_2eproto();
  #endif
  friend void protobuf_AssignDesc_shenanigans_2eproto();
  friend void protobuf_ShutdownFile_shenanigans_2eproto();

  void InitAsDefaultInstance();
  static Submission_ProbeGroup_ProbeReq* default_instance_;
};
// -------------------------------------------------------------------

class Submission_ProbeGroup : public ::google::protobuf::MessageLite {
 public:
  Submission_ProbeGroup();
  virtual ~Submission_ProbeGroup();

  Submission_ProbeGroup(const Submission_ProbeGroup& from);

  inline Submission_ProbeGroup& operator=(const Submission_ProbeGroup& from) {
    CopyFrom(from);
    return *this;
  }

  static const Submission_ProbeGroup& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Submission_ProbeGroup* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(Submission_ProbeGroup* other);

  // implements Message ----------------------------------------------

  Submission_ProbeGroup* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Submission_ProbeGroup& from);
  void MergeFrom(const Submission_ProbeGroup& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef Submission_ProbeGroup_ProbeReq ProbeReq;

  // accessors -------------------------------------------------------

  // optional string mac = 1;
  inline bool has_mac() const;
  inline void clear_mac();
  static const int kMacFieldNumber = 1;
  inline const ::std::string& mac() const;
  inline void set_mac(const ::std::string& value);
  inline void set_mac(const char* value);
  inline void set_mac(const char* value, size_t size);
  inline ::std::string* mutable_mac();
  inline ::std::string* release_mac();
  inline void set_allocated_mac(::std::string* mac);

  // optional bytes token = 2;
  inline bool has_token() const;
  inline void clear_token();
  static const int kTokenFieldNumber = 2;
  inline const ::std::string& token() const;
  inline void set_token(const ::std::string& value);
  inline void set_token(const char* value);
  inline void set_token(const void* value, size_t size);
  inline ::std::string* mutable_token();
  inline ::std::string* release_token();
  inline void set_allocated_token(::std::string* token);

  // repeated .io.shenanigans.proto.Submission.ProbeGroup.ProbeReq req = 3;
  inline int req_size() const;
  inline void clear_req();
  static const int kReqFieldNumber = 3;
  inline const ::io::shenanigans::proto::Submission_ProbeGroup_ProbeReq& req(int index) const;
  inline ::io::shenanigans::proto::Submission_ProbeGroup_ProbeReq* mutable_req(int index);
  inline ::io::shenanigans::proto::Submission_ProbeGroup_ProbeReq* add_req();
  inline const ::google::protobuf::RepeatedPtrField< ::io::shenanigans::proto::Submission_ProbeGroup_ProbeReq >&
      req() const;
  inline ::google::protobuf::RepeatedPtrField< ::io::shenanigans::proto::Submission_ProbeGroup_ProbeReq >*
      mutable_req();

  // @@protoc_insertion_point(class_scope:io.shenanigans.proto.Submission.ProbeGroup)
 private:
  inline void set_has_mac();
  inline void clear_has_mac();
  inline void set_has_token();
  inline void clear_has_token();

  ::std::string* mac_;
  ::std::string* token_;
  ::google::protobuf::RepeatedPtrField< ::io::shenanigans::proto::Submission_ProbeGroup_ProbeReq > req_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_shenanigans_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_shenanigans_2eproto();
  #endif
  friend void protobuf_AssignDesc_shenanigans_2eproto();
  friend void protobuf_ShutdownFile_shenanigans_2eproto();

  void InitAsDefaultInstance();
  static Submission_ProbeGroup* default_instance_;
};
// -------------------------------------------------------------------

class Submission : public ::google::protobuf::MessageLite {
 public:
  Submission();
  virtual ~Submission();

  Submission(const Submission& from);

  inline Submission& operator=(const Submission& from) {
    CopyFrom(from);
    return *this;
  }

  static const Submission& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Submission* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(Submission* other);

  // implements Message ----------------------------------------------

  Submission* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Submission& from);
  void MergeFrom(const Submission& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef Submission_ProbeGroup ProbeGroup;

  // accessors -------------------------------------------------------

  // repeated .io.shenanigans.proto.Submission.ProbeGroup group = 1;
  inline int group_size() const;
  inline void clear_group();
  static const int kGroupFieldNumber = 1;
  inline const ::io::shenanigans::proto::Submission_ProbeGroup& group(int index) const;
  inline ::io::shenanigans::proto::Submission_ProbeGroup* mutable_group(int index);
  inline ::io::shenanigans::proto::Submission_ProbeGroup* add_group();
  inline const ::google::protobuf::RepeatedPtrField< ::io::shenanigans::proto::Submission_ProbeGroup >&
      group() const;
  inline ::google::protobuf::RepeatedPtrField< ::io::shenanigans::proto::Submission_ProbeGroup >*
      mutable_group();

  // @@protoc_insertion_point(class_scope:io.shenanigans.proto.Submission)
 private:

  ::google::protobuf::RepeatedPtrField< ::io::shenanigans::proto::Submission_ProbeGroup > group_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_shenanigans_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_shenanigans_2eproto();
  #endif
  friend void protobuf_AssignDesc_shenanigans_2eproto();
  friend void protobuf_ShutdownFile_shenanigans_2eproto();

  void InitAsDefaultInstance();
  static Submission* default_instance_;
};
// ===================================================================


// ===================================================================

// Submission_ProbeGroup_ProbeReq

// optional string ssid = 1;
inline bool Submission_ProbeGroup_ProbeReq::has_ssid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Submission_ProbeGroup_ProbeReq::set_has_ssid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Submission_ProbeGroup_ProbeReq::clear_has_ssid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Submission_ProbeGroup_ProbeReq::clear_ssid() {
  if (ssid_ != &::google::protobuf::internal::kEmptyString) {
    ssid_->clear();
  }
  clear_has_ssid();
}
inline const ::std::string& Submission_ProbeGroup_ProbeReq::ssid() const {
  return *ssid_;
}
inline void Submission_ProbeGroup_ProbeReq::set_ssid(const ::std::string& value) {
  set_has_ssid();
  if (ssid_ == &::google::protobuf::internal::kEmptyString) {
    ssid_ = new ::std::string;
  }
  ssid_->assign(value);
}
inline void Submission_ProbeGroup_ProbeReq::set_ssid(const char* value) {
  set_has_ssid();
  if (ssid_ == &::google::protobuf::internal::kEmptyString) {
    ssid_ = new ::std::string;
  }
  ssid_->assign(value);
}
inline void Submission_ProbeGroup_ProbeReq::set_ssid(const char* value, size_t size) {
  set_has_ssid();
  if (ssid_ == &::google::protobuf::internal::kEmptyString) {
    ssid_ = new ::std::string;
  }
  ssid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Submission_ProbeGroup_ProbeReq::mutable_ssid() {
  set_has_ssid();
  if (ssid_ == &::google::protobuf::internal::kEmptyString) {
    ssid_ = new ::std::string;
  }
  return ssid_;
}
inline ::std::string* Submission_ProbeGroup_ProbeReq::release_ssid() {
  clear_has_ssid();
  if (ssid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = ssid_;
    ssid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Submission_ProbeGroup_ProbeReq::set_allocated_ssid(::std::string* ssid) {
  if (ssid_ != &::google::protobuf::internal::kEmptyString) {
    delete ssid_;
  }
  if (ssid) {
    set_has_ssid();
    ssid_ = ssid;
  } else {
    clear_has_ssid();
    ssid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required bytes reqBytes = 2;
inline bool Submission_ProbeGroup_ProbeReq::has_reqbytes() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Submission_ProbeGroup_ProbeReq::set_has_reqbytes() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Submission_ProbeGroup_ProbeReq::clear_has_reqbytes() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Submission_ProbeGroup_ProbeReq::clear_reqbytes() {
  if (reqbytes_ != &::google::protobuf::internal::kEmptyString) {
    reqbytes_->clear();
  }
  clear_has_reqbytes();
}
inline const ::std::string& Submission_ProbeGroup_ProbeReq::reqbytes() const {
  return *reqbytes_;
}
inline void Submission_ProbeGroup_ProbeReq::set_reqbytes(const ::std::string& value) {
  set_has_reqbytes();
  if (reqbytes_ == &::google::protobuf::internal::kEmptyString) {
    reqbytes_ = new ::std::string;
  }
  reqbytes_->assign(value);
}
inline void Submission_ProbeGroup_ProbeReq::set_reqbytes(const char* value) {
  set_has_reqbytes();
  if (reqbytes_ == &::google::protobuf::internal::kEmptyString) {
    reqbytes_ = new ::std::string;
  }
  reqbytes_->assign(value);
}
inline void Submission_ProbeGroup_ProbeReq::set_reqbytes(const void* value, size_t size) {
  set_has_reqbytes();
  if (reqbytes_ == &::google::protobuf::internal::kEmptyString) {
    reqbytes_ = new ::std::string;
  }
  reqbytes_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Submission_ProbeGroup_ProbeReq::mutable_reqbytes() {
  set_has_reqbytes();
  if (reqbytes_ == &::google::protobuf::internal::kEmptyString) {
    reqbytes_ = new ::std::string;
  }
  return reqbytes_;
}
inline ::std::string* Submission_ProbeGroup_ProbeReq::release_reqbytes() {
  clear_has_reqbytes();
  if (reqbytes_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = reqbytes_;
    reqbytes_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Submission_ProbeGroup_ProbeReq::set_allocated_reqbytes(::std::string* reqbytes) {
  if (reqbytes_ != &::google::protobuf::internal::kEmptyString) {
    delete reqbytes_;
  }
  if (reqbytes) {
    set_has_reqbytes();
    reqbytes_ = reqbytes;
  } else {
    clear_has_reqbytes();
    reqbytes_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// Submission_ProbeGroup

// optional string mac = 1;
inline bool Submission_ProbeGroup::has_mac() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Submission_ProbeGroup::set_has_mac() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Submission_ProbeGroup::clear_has_mac() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Submission_ProbeGroup::clear_mac() {
  if (mac_ != &::google::protobuf::internal::kEmptyString) {
    mac_->clear();
  }
  clear_has_mac();
}
inline const ::std::string& Submission_ProbeGroup::mac() const {
  return *mac_;
}
inline void Submission_ProbeGroup::set_mac(const ::std::string& value) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  mac_->assign(value);
}
inline void Submission_ProbeGroup::set_mac(const char* value) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  mac_->assign(value);
}
inline void Submission_ProbeGroup::set_mac(const char* value, size_t size) {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  mac_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Submission_ProbeGroup::mutable_mac() {
  set_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    mac_ = new ::std::string;
  }
  return mac_;
}
inline ::std::string* Submission_ProbeGroup::release_mac() {
  clear_has_mac();
  if (mac_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = mac_;
    mac_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Submission_ProbeGroup::set_allocated_mac(::std::string* mac) {
  if (mac_ != &::google::protobuf::internal::kEmptyString) {
    delete mac_;
  }
  if (mac) {
    set_has_mac();
    mac_ = mac;
  } else {
    clear_has_mac();
    mac_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bytes token = 2;
inline bool Submission_ProbeGroup::has_token() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Submission_ProbeGroup::set_has_token() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Submission_ProbeGroup::clear_has_token() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Submission_ProbeGroup::clear_token() {
  if (token_ != &::google::protobuf::internal::kEmptyString) {
    token_->clear();
  }
  clear_has_token();
}
inline const ::std::string& Submission_ProbeGroup::token() const {
  return *token_;
}
inline void Submission_ProbeGroup::set_token(const ::std::string& value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(value);
}
inline void Submission_ProbeGroup::set_token(const char* value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(value);
}
inline void Submission_ProbeGroup::set_token(const void* value, size_t size) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Submission_ProbeGroup::mutable_token() {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  return token_;
}
inline ::std::string* Submission_ProbeGroup::release_token() {
  clear_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = token_;
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Submission_ProbeGroup::set_allocated_token(::std::string* token) {
  if (token_ != &::google::protobuf::internal::kEmptyString) {
    delete token_;
  }
  if (token) {
    set_has_token();
    token_ = token;
  } else {
    clear_has_token();
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .io.shenanigans.proto.Submission.ProbeGroup.ProbeReq req = 3;
inline int Submission_ProbeGroup::req_size() const {
  return req_.size();
}
inline void Submission_ProbeGroup::clear_req() {
  req_.Clear();
}
inline const ::io::shenanigans::proto::Submission_ProbeGroup_ProbeReq& Submission_ProbeGroup::req(int index) const {
  return req_.Get(index);
}
inline ::io::shenanigans::proto::Submission_ProbeGroup_ProbeReq* Submission_ProbeGroup::mutable_req(int index) {
  return req_.Mutable(index);
}
inline ::io::shenanigans::proto::Submission_ProbeGroup_ProbeReq* Submission_ProbeGroup::add_req() {
  return req_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::io::shenanigans::proto::Submission_ProbeGroup_ProbeReq >&
Submission_ProbeGroup::req() const {
  return req_;
}
inline ::google::protobuf::RepeatedPtrField< ::io::shenanigans::proto::Submission_ProbeGroup_ProbeReq >*
Submission_ProbeGroup::mutable_req() {
  return &req_;
}

// -------------------------------------------------------------------

// Submission

// repeated .io.shenanigans.proto.Submission.ProbeGroup group = 1;
inline int Submission::group_size() const {
  return group_.size();
}
inline void Submission::clear_group() {
  group_.Clear();
}
inline const ::io::shenanigans::proto::Submission_ProbeGroup& Submission::group(int index) const {
  return group_.Get(index);
}
inline ::io::shenanigans::proto::Submission_ProbeGroup* Submission::mutable_group(int index) {
  return group_.Mutable(index);
}
inline ::io::shenanigans::proto::Submission_ProbeGroup* Submission::add_group() {
  return group_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::io::shenanigans::proto::Submission_ProbeGroup >&
Submission::group() const {
  return group_;
}
inline ::google::protobuf::RepeatedPtrField< ::io::shenanigans::proto::Submission_ProbeGroup >*
Submission::mutable_group() {
  return &group_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace shenanigans
}  // namespace io

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_shenanigans_2eproto__INCLUDED
