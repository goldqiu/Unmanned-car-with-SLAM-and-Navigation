// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ring_keys.proto

#ifndef PROTOBUF_INCLUDED_ring_5fkeys_2eproto
#define PROTOBUF_INCLUDED_ring_5fkeys_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ring_5fkeys_2eproto 

namespace protobuf_ring_5fkeys_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_ring_5fkeys_2eproto
namespace scan_context_io {
class RingKey;
class RingKeyDefaultTypeInternal;
extern RingKeyDefaultTypeInternal _RingKey_default_instance_;
class RingKeys;
class RingKeysDefaultTypeInternal;
extern RingKeysDefaultTypeInternal _RingKeys_default_instance_;
}  // namespace scan_context_io
namespace google {
namespace protobuf {
template<> ::scan_context_io::RingKey* Arena::CreateMaybeMessage<::scan_context_io::RingKey>(Arena*);
template<> ::scan_context_io::RingKeys* Arena::CreateMaybeMessage<::scan_context_io::RingKeys>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace scan_context_io {

// ===================================================================

class RingKey : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:scan_context_io.RingKey) */ {
 public:
  RingKey();
  virtual ~RingKey();

  RingKey(const RingKey& from);

  inline RingKey& operator=(const RingKey& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RingKey(RingKey&& from) noexcept
    : RingKey() {
    *this = ::std::move(from);
  }

  inline RingKey& operator=(RingKey&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RingKey& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RingKey* internal_default_instance() {
    return reinterpret_cast<const RingKey*>(
               &_RingKey_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(RingKey* other);
  friend void swap(RingKey& a, RingKey& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RingKey* New() const final {
    return CreateMaybeMessage<RingKey>(NULL);
  }

  RingKey* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<RingKey>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const RingKey& from);
  void MergeFrom(const RingKey& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RingKey* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated float data = 1;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 1;
  float data(int index) const;
  void set_data(int index, float value);
  void add_data(float value);
  const ::google::protobuf::RepeatedField< float >&
      data() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_data();

  // @@protoc_insertion_point(class_scope:scan_context_io.RingKey)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedField< float > data_;
  friend struct ::protobuf_ring_5fkeys_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class RingKeys : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:scan_context_io.RingKeys) */ {
 public:
  RingKeys();
  virtual ~RingKeys();

  RingKeys(const RingKeys& from);

  inline RingKeys& operator=(const RingKeys& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RingKeys(RingKeys&& from) noexcept
    : RingKeys() {
    *this = ::std::move(from);
  }

  inline RingKeys& operator=(RingKeys&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RingKeys& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RingKeys* internal_default_instance() {
    return reinterpret_cast<const RingKeys*>(
               &_RingKeys_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(RingKeys* other);
  friend void swap(RingKeys& a, RingKeys& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RingKeys* New() const final {
    return CreateMaybeMessage<RingKeys>(NULL);
  }

  RingKeys* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<RingKeys>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const RingKeys& from);
  void MergeFrom(const RingKeys& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RingKeys* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .scan_context_io.RingKey data = 1;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 1;
  ::scan_context_io::RingKey* mutable_data(int index);
  ::google::protobuf::RepeatedPtrField< ::scan_context_io::RingKey >*
      mutable_data();
  const ::scan_context_io::RingKey& data(int index) const;
  ::scan_context_io::RingKey* add_data();
  const ::google::protobuf::RepeatedPtrField< ::scan_context_io::RingKey >&
      data() const;

  // @@protoc_insertion_point(class_scope:scan_context_io.RingKeys)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::scan_context_io::RingKey > data_;
  friend struct ::protobuf_ring_5fkeys_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RingKey

// repeated float data = 1;
inline int RingKey::data_size() const {
  return data_.size();
}
inline void RingKey::clear_data() {
  data_.Clear();
}
inline float RingKey::data(int index) const {
  // @@protoc_insertion_point(field_get:scan_context_io.RingKey.data)
  return data_.Get(index);
}
inline void RingKey::set_data(int index, float value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:scan_context_io.RingKey.data)
}
inline void RingKey::add_data(float value) {
  data_.Add(value);
  // @@protoc_insertion_point(field_add:scan_context_io.RingKey.data)
}
inline const ::google::protobuf::RepeatedField< float >&
RingKey::data() const {
  // @@protoc_insertion_point(field_list:scan_context_io.RingKey.data)
  return data_;
}
inline ::google::protobuf::RepeatedField< float >*
RingKey::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:scan_context_io.RingKey.data)
  return &data_;
}

// -------------------------------------------------------------------

// RingKeys

// repeated .scan_context_io.RingKey data = 1;
inline int RingKeys::data_size() const {
  return data_.size();
}
inline void RingKeys::clear_data() {
  data_.Clear();
}
inline ::scan_context_io::RingKey* RingKeys::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:scan_context_io.RingKeys.data)
  return data_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::scan_context_io::RingKey >*
RingKeys::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:scan_context_io.RingKeys.data)
  return &data_;
}
inline const ::scan_context_io::RingKey& RingKeys::data(int index) const {
  // @@protoc_insertion_point(field_get:scan_context_io.RingKeys.data)
  return data_.Get(index);
}
inline ::scan_context_io::RingKey* RingKeys::add_data() {
  // @@protoc_insertion_point(field_add:scan_context_io.RingKeys.data)
  return data_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::scan_context_io::RingKey >&
RingKeys::data() const {
  // @@protoc_insertion_point(field_list:scan_context_io.RingKeys.data)
  return data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace scan_context_io

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_ring_5fkeys_2eproto
