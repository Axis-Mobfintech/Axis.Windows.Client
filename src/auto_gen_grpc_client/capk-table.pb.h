// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: capk-table.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_capk_2dtable_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_capk_2dtable_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_capk_2dtable_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_capk_2dtable_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_capk_2dtable_2eproto;
namespace axis {
namespace transactions {
class CertificateAuthorityPublicKeyData;
class CertificateAuthorityPublicKeyDataDefaultTypeInternal;
extern CertificateAuthorityPublicKeyDataDefaultTypeInternal _CertificateAuthorityPublicKeyData_default_instance_;
class CertificateAuthorityPublicKeyTable;
class CertificateAuthorityPublicKeyTableDefaultTypeInternal;
extern CertificateAuthorityPublicKeyTableDefaultTypeInternal _CertificateAuthorityPublicKeyTable_default_instance_;
}  // namespace transactions
}  // namespace axis
PROTOBUF_NAMESPACE_OPEN
template<> ::axis::transactions::CertificateAuthorityPublicKeyData* Arena::CreateMaybeMessage<::axis::transactions::CertificateAuthorityPublicKeyData>(Arena*);
template<> ::axis::transactions::CertificateAuthorityPublicKeyTable* Arena::CreateMaybeMessage<::axis::transactions::CertificateAuthorityPublicKeyTable>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace axis {
namespace transactions {

// ===================================================================

class CertificateAuthorityPublicKeyTable PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:axis.transactions.CertificateAuthorityPublicKeyTable) */ {
 public:
  inline CertificateAuthorityPublicKeyTable() : CertificateAuthorityPublicKeyTable(nullptr) {}
  virtual ~CertificateAuthorityPublicKeyTable();

  CertificateAuthorityPublicKeyTable(const CertificateAuthorityPublicKeyTable& from);
  CertificateAuthorityPublicKeyTable(CertificateAuthorityPublicKeyTable&& from) noexcept
    : CertificateAuthorityPublicKeyTable() {
    *this = ::std::move(from);
  }

  inline CertificateAuthorityPublicKeyTable& operator=(const CertificateAuthorityPublicKeyTable& from) {
    CopyFrom(from);
    return *this;
  }
  inline CertificateAuthorityPublicKeyTable& operator=(CertificateAuthorityPublicKeyTable&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CertificateAuthorityPublicKeyTable& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CertificateAuthorityPublicKeyTable* internal_default_instance() {
    return reinterpret_cast<const CertificateAuthorityPublicKeyTable*>(
               &_CertificateAuthorityPublicKeyTable_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CertificateAuthorityPublicKeyTable& a, CertificateAuthorityPublicKeyTable& b) {
    a.Swap(&b);
  }
  inline void Swap(CertificateAuthorityPublicKeyTable* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CertificateAuthorityPublicKeyTable* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CertificateAuthorityPublicKeyTable* New() const final {
    return CreateMaybeMessage<CertificateAuthorityPublicKeyTable>(nullptr);
  }

  CertificateAuthorityPublicKeyTable* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CertificateAuthorityPublicKeyTable>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CertificateAuthorityPublicKeyTable& from);
  void MergeFrom(const CertificateAuthorityPublicKeyTable& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CertificateAuthorityPublicKeyTable* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "axis.transactions.CertificateAuthorityPublicKeyTable";
  }
  protected:
  explicit CertificateAuthorityPublicKeyTable(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_capk_2dtable_2eproto);
    return ::descriptor_table_capk_2dtable_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCapkDataFieldNumber = 3,
    kMessageIdFieldNumber = 1,
    kIndexFieldNumber = 2,
  };
  // .axis.transactions.CertificateAuthorityPublicKeyData capk_data = 3;
  bool has_capk_data() const;
  private:
  bool _internal_has_capk_data() const;
  public:
  void clear_capk_data();
  const ::axis::transactions::CertificateAuthorityPublicKeyData& capk_data() const;
  ::axis::transactions::CertificateAuthorityPublicKeyData* release_capk_data();
  ::axis::transactions::CertificateAuthorityPublicKeyData* mutable_capk_data();
  void set_allocated_capk_data(::axis::transactions::CertificateAuthorityPublicKeyData* capk_data);
  private:
  const ::axis::transactions::CertificateAuthorityPublicKeyData& _internal_capk_data() const;
  ::axis::transactions::CertificateAuthorityPublicKeyData* _internal_mutable_capk_data();
  public:
  void unsafe_arena_set_allocated_capk_data(
      ::axis::transactions::CertificateAuthorityPublicKeyData* capk_data);
  ::axis::transactions::CertificateAuthorityPublicKeyData* unsafe_arena_release_capk_data();

  // int32 message_id = 1;
  void clear_message_id();
  ::PROTOBUF_NAMESPACE_ID::int32 message_id() const;
  void set_message_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_message_id() const;
  void _internal_set_message_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 index = 2;
  void clear_index();
  ::PROTOBUF_NAMESPACE_ID::int32 index() const;
  void set_index(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_index() const;
  void _internal_set_index(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:axis.transactions.CertificateAuthorityPublicKeyTable)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::axis::transactions::CertificateAuthorityPublicKeyData* capk_data_;
  ::PROTOBUF_NAMESPACE_ID::int32 message_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 index_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_capk_2dtable_2eproto;
};
// -------------------------------------------------------------------

class CertificateAuthorityPublicKeyData PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:axis.transactions.CertificateAuthorityPublicKeyData) */ {
 public:
  inline CertificateAuthorityPublicKeyData() : CertificateAuthorityPublicKeyData(nullptr) {}
  virtual ~CertificateAuthorityPublicKeyData();

  CertificateAuthorityPublicKeyData(const CertificateAuthorityPublicKeyData& from);
  CertificateAuthorityPublicKeyData(CertificateAuthorityPublicKeyData&& from) noexcept
    : CertificateAuthorityPublicKeyData() {
    *this = ::std::move(from);
  }

  inline CertificateAuthorityPublicKeyData& operator=(const CertificateAuthorityPublicKeyData& from) {
    CopyFrom(from);
    return *this;
  }
  inline CertificateAuthorityPublicKeyData& operator=(CertificateAuthorityPublicKeyData&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CertificateAuthorityPublicKeyData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CertificateAuthorityPublicKeyData* internal_default_instance() {
    return reinterpret_cast<const CertificateAuthorityPublicKeyData*>(
               &_CertificateAuthorityPublicKeyData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CertificateAuthorityPublicKeyData& a, CertificateAuthorityPublicKeyData& b) {
    a.Swap(&b);
  }
  inline void Swap(CertificateAuthorityPublicKeyData* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CertificateAuthorityPublicKeyData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CertificateAuthorityPublicKeyData* New() const final {
    return CreateMaybeMessage<CertificateAuthorityPublicKeyData>(nullptr);
  }

  CertificateAuthorityPublicKeyData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CertificateAuthorityPublicKeyData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CertificateAuthorityPublicKeyData& from);
  void MergeFrom(const CertificateAuthorityPublicKeyData& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CertificateAuthorityPublicKeyData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "axis.transactions.CertificateAuthorityPublicKeyData";
  }
  protected:
  explicit CertificateAuthorityPublicKeyData(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_capk_2dtable_2eproto);
    return ::descriptor_table_capk_2dtable_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRegisteredIdentifierFieldNumber = 1,
    kRsaKeyModulusFieldNumber = 2,
    kRsaKeyExponentFieldNumber = 3,
    kChecksumFieldNumber = 4,
  };
  // bytes registered_identifier = 1;
  void clear_registered_identifier();
  const std::string& registered_identifier() const;
  void set_registered_identifier(const std::string& value);
  void set_registered_identifier(std::string&& value);
  void set_registered_identifier(const char* value);
  void set_registered_identifier(const void* value, size_t size);
  std::string* mutable_registered_identifier();
  std::string* release_registered_identifier();
  void set_allocated_registered_identifier(std::string* registered_identifier);
  private:
  const std::string& _internal_registered_identifier() const;
  void _internal_set_registered_identifier(const std::string& value);
  std::string* _internal_mutable_registered_identifier();
  public:

  // bytes rsa_key_modulus = 2;
  void clear_rsa_key_modulus();
  const std::string& rsa_key_modulus() const;
  void set_rsa_key_modulus(const std::string& value);
  void set_rsa_key_modulus(std::string&& value);
  void set_rsa_key_modulus(const char* value);
  void set_rsa_key_modulus(const void* value, size_t size);
  std::string* mutable_rsa_key_modulus();
  std::string* release_rsa_key_modulus();
  void set_allocated_rsa_key_modulus(std::string* rsa_key_modulus);
  private:
  const std::string& _internal_rsa_key_modulus() const;
  void _internal_set_rsa_key_modulus(const std::string& value);
  std::string* _internal_mutable_rsa_key_modulus();
  public:

  // bytes rsa_key_exponent = 3;
  void clear_rsa_key_exponent();
  const std::string& rsa_key_exponent() const;
  void set_rsa_key_exponent(const std::string& value);
  void set_rsa_key_exponent(std::string&& value);
  void set_rsa_key_exponent(const char* value);
  void set_rsa_key_exponent(const void* value, size_t size);
  std::string* mutable_rsa_key_exponent();
  std::string* release_rsa_key_exponent();
  void set_allocated_rsa_key_exponent(std::string* rsa_key_exponent);
  private:
  const std::string& _internal_rsa_key_exponent() const;
  void _internal_set_rsa_key_exponent(const std::string& value);
  std::string* _internal_mutable_rsa_key_exponent();
  public:

  // bytes checksum = 4;
  void clear_checksum();
  const std::string& checksum() const;
  void set_checksum(const std::string& value);
  void set_checksum(std::string&& value);
  void set_checksum(const char* value);
  void set_checksum(const void* value, size_t size);
  std::string* mutable_checksum();
  std::string* release_checksum();
  void set_allocated_checksum(std::string* checksum);
  private:
  const std::string& _internal_checksum() const;
  void _internal_set_checksum(const std::string& value);
  std::string* _internal_mutable_checksum();
  public:

  // @@protoc_insertion_point(class_scope:axis.transactions.CertificateAuthorityPublicKeyData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr registered_identifier_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr rsa_key_modulus_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr rsa_key_exponent_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr checksum_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_capk_2dtable_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CertificateAuthorityPublicKeyTable

// int32 message_id = 1;
inline void CertificateAuthorityPublicKeyTable::clear_message_id() {
  message_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CertificateAuthorityPublicKeyTable::_internal_message_id() const {
  return message_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CertificateAuthorityPublicKeyTable::message_id() const {
  // @@protoc_insertion_point(field_get:axis.transactions.CertificateAuthorityPublicKeyTable.message_id)
  return _internal_message_id();
}
inline void CertificateAuthorityPublicKeyTable::_internal_set_message_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  message_id_ = value;
}
inline void CertificateAuthorityPublicKeyTable::set_message_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_message_id(value);
  // @@protoc_insertion_point(field_set:axis.transactions.CertificateAuthorityPublicKeyTable.message_id)
}

// int32 index = 2;
inline void CertificateAuthorityPublicKeyTable::clear_index() {
  index_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CertificateAuthorityPublicKeyTable::_internal_index() const {
  return index_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CertificateAuthorityPublicKeyTable::index() const {
  // @@protoc_insertion_point(field_get:axis.transactions.CertificateAuthorityPublicKeyTable.index)
  return _internal_index();
}
inline void CertificateAuthorityPublicKeyTable::_internal_set_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  index_ = value;
}
inline void CertificateAuthorityPublicKeyTable::set_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_index(value);
  // @@protoc_insertion_point(field_set:axis.transactions.CertificateAuthorityPublicKeyTable.index)
}

// .axis.transactions.CertificateAuthorityPublicKeyData capk_data = 3;
inline bool CertificateAuthorityPublicKeyTable::_internal_has_capk_data() const {
  return this != internal_default_instance() && capk_data_ != nullptr;
}
inline bool CertificateAuthorityPublicKeyTable::has_capk_data() const {
  return _internal_has_capk_data();
}
inline void CertificateAuthorityPublicKeyTable::clear_capk_data() {
  if (GetArena() == nullptr && capk_data_ != nullptr) {
    delete capk_data_;
  }
  capk_data_ = nullptr;
}
inline const ::axis::transactions::CertificateAuthorityPublicKeyData& CertificateAuthorityPublicKeyTable::_internal_capk_data() const {
  const ::axis::transactions::CertificateAuthorityPublicKeyData* p = capk_data_;
  return p != nullptr ? *p : *reinterpret_cast<const ::axis::transactions::CertificateAuthorityPublicKeyData*>(
      &::axis::transactions::_CertificateAuthorityPublicKeyData_default_instance_);
}
inline const ::axis::transactions::CertificateAuthorityPublicKeyData& CertificateAuthorityPublicKeyTable::capk_data() const {
  // @@protoc_insertion_point(field_get:axis.transactions.CertificateAuthorityPublicKeyTable.capk_data)
  return _internal_capk_data();
}
inline void CertificateAuthorityPublicKeyTable::unsafe_arena_set_allocated_capk_data(
    ::axis::transactions::CertificateAuthorityPublicKeyData* capk_data) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(capk_data_);
  }
  capk_data_ = capk_data;
  if (capk_data) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:axis.transactions.CertificateAuthorityPublicKeyTable.capk_data)
}
inline ::axis::transactions::CertificateAuthorityPublicKeyData* CertificateAuthorityPublicKeyTable::release_capk_data() {
  
  ::axis::transactions::CertificateAuthorityPublicKeyData* temp = capk_data_;
  capk_data_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::axis::transactions::CertificateAuthorityPublicKeyData* CertificateAuthorityPublicKeyTable::unsafe_arena_release_capk_data() {
  // @@protoc_insertion_point(field_release:axis.transactions.CertificateAuthorityPublicKeyTable.capk_data)
  
  ::axis::transactions::CertificateAuthorityPublicKeyData* temp = capk_data_;
  capk_data_ = nullptr;
  return temp;
}
inline ::axis::transactions::CertificateAuthorityPublicKeyData* CertificateAuthorityPublicKeyTable::_internal_mutable_capk_data() {
  
  if (capk_data_ == nullptr) {
    auto* p = CreateMaybeMessage<::axis::transactions::CertificateAuthorityPublicKeyData>(GetArena());
    capk_data_ = p;
  }
  return capk_data_;
}
inline ::axis::transactions::CertificateAuthorityPublicKeyData* CertificateAuthorityPublicKeyTable::mutable_capk_data() {
  // @@protoc_insertion_point(field_mutable:axis.transactions.CertificateAuthorityPublicKeyTable.capk_data)
  return _internal_mutable_capk_data();
}
inline void CertificateAuthorityPublicKeyTable::set_allocated_capk_data(::axis::transactions::CertificateAuthorityPublicKeyData* capk_data) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete capk_data_;
  }
  if (capk_data) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(capk_data);
    if (message_arena != submessage_arena) {
      capk_data = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, capk_data, submessage_arena);
    }
    
  } else {
    
  }
  capk_data_ = capk_data;
  // @@protoc_insertion_point(field_set_allocated:axis.transactions.CertificateAuthorityPublicKeyTable.capk_data)
}

// -------------------------------------------------------------------

// CertificateAuthorityPublicKeyData

// bytes registered_identifier = 1;
inline void CertificateAuthorityPublicKeyData::clear_registered_identifier() {
  registered_identifier_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& CertificateAuthorityPublicKeyData::registered_identifier() const {
  // @@protoc_insertion_point(field_get:axis.transactions.CertificateAuthorityPublicKeyData.registered_identifier)
  return _internal_registered_identifier();
}
inline void CertificateAuthorityPublicKeyData::set_registered_identifier(const std::string& value) {
  _internal_set_registered_identifier(value);
  // @@protoc_insertion_point(field_set:axis.transactions.CertificateAuthorityPublicKeyData.registered_identifier)
}
inline std::string* CertificateAuthorityPublicKeyData::mutable_registered_identifier() {
  // @@protoc_insertion_point(field_mutable:axis.transactions.CertificateAuthorityPublicKeyData.registered_identifier)
  return _internal_mutable_registered_identifier();
}
inline const std::string& CertificateAuthorityPublicKeyData::_internal_registered_identifier() const {
  return registered_identifier_.Get();
}
inline void CertificateAuthorityPublicKeyData::_internal_set_registered_identifier(const std::string& value) {
  
  registered_identifier_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void CertificateAuthorityPublicKeyData::set_registered_identifier(std::string&& value) {
  
  registered_identifier_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:axis.transactions.CertificateAuthorityPublicKeyData.registered_identifier)
}
inline void CertificateAuthorityPublicKeyData::set_registered_identifier(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  registered_identifier_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:axis.transactions.CertificateAuthorityPublicKeyData.registered_identifier)
}
inline void CertificateAuthorityPublicKeyData::set_registered_identifier(const void* value,
    size_t size) {
  
  registered_identifier_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:axis.transactions.CertificateAuthorityPublicKeyData.registered_identifier)
}
inline std::string* CertificateAuthorityPublicKeyData::_internal_mutable_registered_identifier() {
  
  return registered_identifier_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* CertificateAuthorityPublicKeyData::release_registered_identifier() {
  // @@protoc_insertion_point(field_release:axis.transactions.CertificateAuthorityPublicKeyData.registered_identifier)
  return registered_identifier_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CertificateAuthorityPublicKeyData::set_allocated_registered_identifier(std::string* registered_identifier) {
  if (registered_identifier != nullptr) {
    
  } else {
    
  }
  registered_identifier_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), registered_identifier,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:axis.transactions.CertificateAuthorityPublicKeyData.registered_identifier)
}

// bytes rsa_key_modulus = 2;
inline void CertificateAuthorityPublicKeyData::clear_rsa_key_modulus() {
  rsa_key_modulus_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& CertificateAuthorityPublicKeyData::rsa_key_modulus() const {
  // @@protoc_insertion_point(field_get:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_modulus)
  return _internal_rsa_key_modulus();
}
inline void CertificateAuthorityPublicKeyData::set_rsa_key_modulus(const std::string& value) {
  _internal_set_rsa_key_modulus(value);
  // @@protoc_insertion_point(field_set:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_modulus)
}
inline std::string* CertificateAuthorityPublicKeyData::mutable_rsa_key_modulus() {
  // @@protoc_insertion_point(field_mutable:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_modulus)
  return _internal_mutable_rsa_key_modulus();
}
inline const std::string& CertificateAuthorityPublicKeyData::_internal_rsa_key_modulus() const {
  return rsa_key_modulus_.Get();
}
inline void CertificateAuthorityPublicKeyData::_internal_set_rsa_key_modulus(const std::string& value) {
  
  rsa_key_modulus_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void CertificateAuthorityPublicKeyData::set_rsa_key_modulus(std::string&& value) {
  
  rsa_key_modulus_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_modulus)
}
inline void CertificateAuthorityPublicKeyData::set_rsa_key_modulus(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  rsa_key_modulus_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_modulus)
}
inline void CertificateAuthorityPublicKeyData::set_rsa_key_modulus(const void* value,
    size_t size) {
  
  rsa_key_modulus_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_modulus)
}
inline std::string* CertificateAuthorityPublicKeyData::_internal_mutable_rsa_key_modulus() {
  
  return rsa_key_modulus_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* CertificateAuthorityPublicKeyData::release_rsa_key_modulus() {
  // @@protoc_insertion_point(field_release:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_modulus)
  return rsa_key_modulus_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CertificateAuthorityPublicKeyData::set_allocated_rsa_key_modulus(std::string* rsa_key_modulus) {
  if (rsa_key_modulus != nullptr) {
    
  } else {
    
  }
  rsa_key_modulus_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), rsa_key_modulus,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_modulus)
}

// bytes rsa_key_exponent = 3;
inline void CertificateAuthorityPublicKeyData::clear_rsa_key_exponent() {
  rsa_key_exponent_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& CertificateAuthorityPublicKeyData::rsa_key_exponent() const {
  // @@protoc_insertion_point(field_get:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_exponent)
  return _internal_rsa_key_exponent();
}
inline void CertificateAuthorityPublicKeyData::set_rsa_key_exponent(const std::string& value) {
  _internal_set_rsa_key_exponent(value);
  // @@protoc_insertion_point(field_set:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_exponent)
}
inline std::string* CertificateAuthorityPublicKeyData::mutable_rsa_key_exponent() {
  // @@protoc_insertion_point(field_mutable:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_exponent)
  return _internal_mutable_rsa_key_exponent();
}
inline const std::string& CertificateAuthorityPublicKeyData::_internal_rsa_key_exponent() const {
  return rsa_key_exponent_.Get();
}
inline void CertificateAuthorityPublicKeyData::_internal_set_rsa_key_exponent(const std::string& value) {
  
  rsa_key_exponent_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void CertificateAuthorityPublicKeyData::set_rsa_key_exponent(std::string&& value) {
  
  rsa_key_exponent_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_exponent)
}
inline void CertificateAuthorityPublicKeyData::set_rsa_key_exponent(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  rsa_key_exponent_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_exponent)
}
inline void CertificateAuthorityPublicKeyData::set_rsa_key_exponent(const void* value,
    size_t size) {
  
  rsa_key_exponent_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_exponent)
}
inline std::string* CertificateAuthorityPublicKeyData::_internal_mutable_rsa_key_exponent() {
  
  return rsa_key_exponent_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* CertificateAuthorityPublicKeyData::release_rsa_key_exponent() {
  // @@protoc_insertion_point(field_release:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_exponent)
  return rsa_key_exponent_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CertificateAuthorityPublicKeyData::set_allocated_rsa_key_exponent(std::string* rsa_key_exponent) {
  if (rsa_key_exponent != nullptr) {
    
  } else {
    
  }
  rsa_key_exponent_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), rsa_key_exponent,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:axis.transactions.CertificateAuthorityPublicKeyData.rsa_key_exponent)
}

// bytes checksum = 4;
inline void CertificateAuthorityPublicKeyData::clear_checksum() {
  checksum_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& CertificateAuthorityPublicKeyData::checksum() const {
  // @@protoc_insertion_point(field_get:axis.transactions.CertificateAuthorityPublicKeyData.checksum)
  return _internal_checksum();
}
inline void CertificateAuthorityPublicKeyData::set_checksum(const std::string& value) {
  _internal_set_checksum(value);
  // @@protoc_insertion_point(field_set:axis.transactions.CertificateAuthorityPublicKeyData.checksum)
}
inline std::string* CertificateAuthorityPublicKeyData::mutable_checksum() {
  // @@protoc_insertion_point(field_mutable:axis.transactions.CertificateAuthorityPublicKeyData.checksum)
  return _internal_mutable_checksum();
}
inline const std::string& CertificateAuthorityPublicKeyData::_internal_checksum() const {
  return checksum_.Get();
}
inline void CertificateAuthorityPublicKeyData::_internal_set_checksum(const std::string& value) {
  
  checksum_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void CertificateAuthorityPublicKeyData::set_checksum(std::string&& value) {
  
  checksum_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:axis.transactions.CertificateAuthorityPublicKeyData.checksum)
}
inline void CertificateAuthorityPublicKeyData::set_checksum(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  checksum_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:axis.transactions.CertificateAuthorityPublicKeyData.checksum)
}
inline void CertificateAuthorityPublicKeyData::set_checksum(const void* value,
    size_t size) {
  
  checksum_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:axis.transactions.CertificateAuthorityPublicKeyData.checksum)
}
inline std::string* CertificateAuthorityPublicKeyData::_internal_mutable_checksum() {
  
  return checksum_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* CertificateAuthorityPublicKeyData::release_checksum() {
  // @@protoc_insertion_point(field_release:axis.transactions.CertificateAuthorityPublicKeyData.checksum)
  return checksum_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CertificateAuthorityPublicKeyData::set_allocated_checksum(std::string* checksum) {
  if (checksum != nullptr) {
    
  } else {
    
  }
  checksum_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), checksum,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:axis.transactions.CertificateAuthorityPublicKeyData.checksum)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace transactions
}  // namespace axis

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_capk_2dtable_2eproto