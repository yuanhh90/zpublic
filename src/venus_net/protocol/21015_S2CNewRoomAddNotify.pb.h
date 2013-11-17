// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 21015_S2CNewRoomAddNotify.proto

#ifndef PROTOBUF_21015_5fS2CNewRoomAddNotify_2eproto__INCLUDED
#define PROTOBUF_21015_5fS2CNewRoomAddNotify_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_21015_5fS2CNewRoomAddNotify_2eproto();
void protobuf_AssignDesc_21015_5fS2CNewRoomAddNotify_2eproto();
void protobuf_ShutdownFile_21015_5fS2CNewRoomAddNotify_2eproto();

class S2CNewRoomAddNotify;

// ===================================================================

class S2CNewRoomAddNotify : public ::google::protobuf::Message {
 public:
  S2CNewRoomAddNotify();
  virtual ~S2CNewRoomAddNotify();

  S2CNewRoomAddNotify(const S2CNewRoomAddNotify& from);

  inline S2CNewRoomAddNotify& operator=(const S2CNewRoomAddNotify& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2CNewRoomAddNotify& default_instance();

  void Swap(S2CNewRoomAddNotify* other);

  // implements Message ----------------------------------------------

  S2CNewRoomAddNotify* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const S2CNewRoomAddNotify& from);
  void MergeFrom(const S2CNewRoomAddNotify& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 room_id = 1;
  inline bool has_room_id() const;
  inline void clear_room_id();
  static const int kRoomIdFieldNumber = 1;
  inline ::google::protobuf::uint32 room_id() const;
  inline void set_room_id(::google::protobuf::uint32 value);

  // required string room_name = 2;
  inline bool has_room_name() const;
  inline void clear_room_name();
  static const int kRoomNameFieldNumber = 2;
  inline const ::std::string& room_name() const;
  inline void set_room_name(const ::std::string& value);
  inline void set_room_name(const char* value);
  inline void set_room_name(const char* value, size_t size);
  inline ::std::string* mutable_room_name();
  inline ::std::string* release_room_name();
  inline void set_allocated_room_name(::std::string* room_name);

  // required bool public = 3;
  inline bool has_public_() const;
  inline void clear_public_();
  static const int kPublicFieldNumber = 3;
  inline bool public_() const;
  inline void set_public_(bool value);

  // @@protoc_insertion_point(class_scope:Protocol.S2CNewRoomAddNotify)
 private:
  inline void set_has_room_id();
  inline void clear_has_room_id();
  inline void set_has_room_name();
  inline void clear_has_room_name();
  inline void set_has_public_();
  inline void clear_has_public_();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* room_name_;
  ::google::protobuf::uint32 room_id_;
  bool public__;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_21015_5fS2CNewRoomAddNotify_2eproto();
  friend void protobuf_AssignDesc_21015_5fS2CNewRoomAddNotify_2eproto();
  friend void protobuf_ShutdownFile_21015_5fS2CNewRoomAddNotify_2eproto();

  void InitAsDefaultInstance();
  static S2CNewRoomAddNotify* default_instance_;
};
// ===================================================================


// ===================================================================

// S2CNewRoomAddNotify

// required uint32 room_id = 1;
inline bool S2CNewRoomAddNotify::has_room_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void S2CNewRoomAddNotify::set_has_room_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void S2CNewRoomAddNotify::clear_has_room_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void S2CNewRoomAddNotify::clear_room_id() {
  room_id_ = 0u;
  clear_has_room_id();
}
inline ::google::protobuf::uint32 S2CNewRoomAddNotify::room_id() const {
  return room_id_;
}
inline void S2CNewRoomAddNotify::set_room_id(::google::protobuf::uint32 value) {
  set_has_room_id();
  room_id_ = value;
}

// required string room_name = 2;
inline bool S2CNewRoomAddNotify::has_room_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void S2CNewRoomAddNotify::set_has_room_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void S2CNewRoomAddNotify::clear_has_room_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void S2CNewRoomAddNotify::clear_room_name() {
  if (room_name_ != &::google::protobuf::internal::kEmptyString) {
    room_name_->clear();
  }
  clear_has_room_name();
}
inline const ::std::string& S2CNewRoomAddNotify::room_name() const {
  return *room_name_;
}
inline void S2CNewRoomAddNotify::set_room_name(const ::std::string& value) {
  set_has_room_name();
  if (room_name_ == &::google::protobuf::internal::kEmptyString) {
    room_name_ = new ::std::string;
  }
  room_name_->assign(value);
}
inline void S2CNewRoomAddNotify::set_room_name(const char* value) {
  set_has_room_name();
  if (room_name_ == &::google::protobuf::internal::kEmptyString) {
    room_name_ = new ::std::string;
  }
  room_name_->assign(value);
}
inline void S2CNewRoomAddNotify::set_room_name(const char* value, size_t size) {
  set_has_room_name();
  if (room_name_ == &::google::protobuf::internal::kEmptyString) {
    room_name_ = new ::std::string;
  }
  room_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* S2CNewRoomAddNotify::mutable_room_name() {
  set_has_room_name();
  if (room_name_ == &::google::protobuf::internal::kEmptyString) {
    room_name_ = new ::std::string;
  }
  return room_name_;
}
inline ::std::string* S2CNewRoomAddNotify::release_room_name() {
  clear_has_room_name();
  if (room_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = room_name_;
    room_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void S2CNewRoomAddNotify::set_allocated_room_name(::std::string* room_name) {
  if (room_name_ != &::google::protobuf::internal::kEmptyString) {
    delete room_name_;
  }
  if (room_name) {
    set_has_room_name();
    room_name_ = room_name;
  } else {
    clear_has_room_name();
    room_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required bool public = 3;
inline bool S2CNewRoomAddNotify::has_public_() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void S2CNewRoomAddNotify::set_has_public_() {
  _has_bits_[0] |= 0x00000004u;
}
inline void S2CNewRoomAddNotify::clear_has_public_() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void S2CNewRoomAddNotify::clear_public_() {
  public__ = false;
  clear_has_public_();
}
inline bool S2CNewRoomAddNotify::public_() const {
  return public__;
}
inline void S2CNewRoomAddNotify::set_public_(bool value) {
  set_has_public_();
  public__ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_21015_5fS2CNewRoomAddNotify_2eproto__INCLUDED
