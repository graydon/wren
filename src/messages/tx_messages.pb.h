// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tx_messages.proto

#ifndef PROTOBUF_tx_5fmessages_2eproto__INCLUDED
#define PROTOBUF_tx_5fmessages_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "tcc_wren_messages.pb.h"
#include "tcc_nb_wren_messages.pb.h"
#include "tcc_cure_messages.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_tx_5fmessages_2eproto();
void protobuf_AssignDesc_tx_5fmessages_2eproto();
void protobuf_ShutdownFile_tx_5fmessages_2eproto();

class PbRpcTxPublicGetServerConfigResult;

// ===================================================================

class PbRpcTxPublicGetServerConfigResult : public ::google::protobuf::Message {
 public:
  PbRpcTxPublicGetServerConfigResult();
  virtual ~PbRpcTxPublicGetServerConfigResult();

  PbRpcTxPublicGetServerConfigResult(const PbRpcTxPublicGetServerConfigResult& from);

  inline PbRpcTxPublicGetServerConfigResult& operator=(const PbRpcTxPublicGetServerConfigResult& from) {
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
  static const PbRpcTxPublicGetServerConfigResult& default_instance();

  void Swap(PbRpcTxPublicGetServerConfigResult* other);

  // implements Message ----------------------------------------------

  PbRpcTxPublicGetServerConfigResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PbRpcTxPublicGetServerConfigResult& from);
  void MergeFrom(const PbRpcTxPublicGetServerConfigResult& from);
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

  // required bool Succeeded = 1;
  inline bool has_succeeded() const;
  inline void clear_succeeded();
  static const int kSucceededFieldNumber = 1;
  inline bool succeeded() const;
  inline void set_succeeded(bool value);

  // required int32 NumPartitions = 2;
  inline bool has_numpartitions() const;
  inline void clear_numpartitions();
  static const int kNumPartitionsFieldNumber = 2;
  inline ::google::protobuf::int32 numpartitions() const;
  inline void set_numpartitions(::google::protobuf::int32 value);

  // required int32 NumReplicasPerPartition = 3;
  inline bool has_numreplicasperpartition() const;
  inline void clear_numreplicasperpartition();
  static const int kNumReplicasPerPartitionFieldNumber = 3;
  inline ::google::protobuf::int32 numreplicasperpartition() const;
  inline void set_numreplicasperpartition(::google::protobuf::int32 value);

  // required int32 replicaId = 5;
  inline bool has_replicaid() const;
  inline void clear_replicaid();
  static const int kReplicaIdFieldNumber = 5;
  inline ::google::protobuf::int32 replicaid() const;
  inline void set_replicaid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PbRpcTxPublicGetServerConfigResult)
 private:
  inline void set_has_succeeded();
  inline void clear_has_succeeded();
  inline void set_has_numpartitions();
  inline void clear_has_numpartitions();
  inline void set_has_numreplicasperpartition();
  inline void clear_has_numreplicasperpartition();
  inline void set_has_replicaid();
  inline void clear_has_replicaid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  bool succeeded_;
  ::google::protobuf::int32 numpartitions_;
  ::google::protobuf::int32 numreplicasperpartition_;
  ::google::protobuf::int32 replicaid_;
  friend void  protobuf_AddDesc_tx_5fmessages_2eproto();
  friend void protobuf_AssignDesc_tx_5fmessages_2eproto();
  friend void protobuf_ShutdownFile_tx_5fmessages_2eproto();

  void InitAsDefaultInstance();
  static PbRpcTxPublicGetServerConfigResult* default_instance_;
};
// ===================================================================


// ===================================================================

// PbRpcTxPublicGetServerConfigResult

// required bool Succeeded = 1;
inline bool PbRpcTxPublicGetServerConfigResult::has_succeeded() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PbRpcTxPublicGetServerConfigResult::set_has_succeeded() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PbRpcTxPublicGetServerConfigResult::clear_has_succeeded() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PbRpcTxPublicGetServerConfigResult::clear_succeeded() {
  succeeded_ = false;
  clear_has_succeeded();
}
inline bool PbRpcTxPublicGetServerConfigResult::succeeded() const {
  // @@protoc_insertion_point(field_get:PbRpcTxPublicGetServerConfigResult.Succeeded)
  return succeeded_;
}
inline void PbRpcTxPublicGetServerConfigResult::set_succeeded(bool value) {
  set_has_succeeded();
  succeeded_ = value;
  // @@protoc_insertion_point(field_set:PbRpcTxPublicGetServerConfigResult.Succeeded)
}

// required int32 NumPartitions = 2;
inline bool PbRpcTxPublicGetServerConfigResult::has_numpartitions() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PbRpcTxPublicGetServerConfigResult::set_has_numpartitions() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PbRpcTxPublicGetServerConfigResult::clear_has_numpartitions() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PbRpcTxPublicGetServerConfigResult::clear_numpartitions() {
  numpartitions_ = 0;
  clear_has_numpartitions();
}
inline ::google::protobuf::int32 PbRpcTxPublicGetServerConfigResult::numpartitions() const {
  // @@protoc_insertion_point(field_get:PbRpcTxPublicGetServerConfigResult.NumPartitions)
  return numpartitions_;
}
inline void PbRpcTxPublicGetServerConfigResult::set_numpartitions(::google::protobuf::int32 value) {
  set_has_numpartitions();
  numpartitions_ = value;
  // @@protoc_insertion_point(field_set:PbRpcTxPublicGetServerConfigResult.NumPartitions)
}

// required int32 NumReplicasPerPartition = 3;
inline bool PbRpcTxPublicGetServerConfigResult::has_numreplicasperpartition() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PbRpcTxPublicGetServerConfigResult::set_has_numreplicasperpartition() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PbRpcTxPublicGetServerConfigResult::clear_has_numreplicasperpartition() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PbRpcTxPublicGetServerConfigResult::clear_numreplicasperpartition() {
  numreplicasperpartition_ = 0;
  clear_has_numreplicasperpartition();
}
inline ::google::protobuf::int32 PbRpcTxPublicGetServerConfigResult::numreplicasperpartition() const {
  // @@protoc_insertion_point(field_get:PbRpcTxPublicGetServerConfigResult.NumReplicasPerPartition)
  return numreplicasperpartition_;
}
inline void PbRpcTxPublicGetServerConfigResult::set_numreplicasperpartition(::google::protobuf::int32 value) {
  set_has_numreplicasperpartition();
  numreplicasperpartition_ = value;
  // @@protoc_insertion_point(field_set:PbRpcTxPublicGetServerConfigResult.NumReplicasPerPartition)
}

// required int32 replicaId = 5;
inline bool PbRpcTxPublicGetServerConfigResult::has_replicaid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PbRpcTxPublicGetServerConfigResult::set_has_replicaid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PbRpcTxPublicGetServerConfigResult::clear_has_replicaid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PbRpcTxPublicGetServerConfigResult::clear_replicaid() {
  replicaid_ = 0;
  clear_has_replicaid();
}
inline ::google::protobuf::int32 PbRpcTxPublicGetServerConfigResult::replicaid() const {
  // @@protoc_insertion_point(field_get:PbRpcTxPublicGetServerConfigResult.replicaId)
  return replicaid_;
}
inline void PbRpcTxPublicGetServerConfigResult::set_replicaid(::google::protobuf::int32 value) {
  set_has_replicaid();
  replicaid_ = value;
  // @@protoc_insertion_point(field_set:PbRpcTxPublicGetServerConfigResult.replicaId)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tx_5fmessages_2eproto__INCLUDED
