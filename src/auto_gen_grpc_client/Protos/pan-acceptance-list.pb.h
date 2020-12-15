// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protos/pan-acceptance-list.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Protos_2fpan_2dacceptance_2dlist_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Protos_2fpan_2dacceptance_2dlist_2eproto

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
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Protos_2fpan_2dacceptance_2dlist_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Protos_2fpan_2dacceptance_2dlist_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Protos_2fpan_2dacceptance_2dlist_2eproto;
namespace axis {
namespace transactions {
class PrimaryAccountNumberWhiteList;
class PrimaryAccountNumberWhiteListDefaultTypeInternal;
extern PrimaryAccountNumberWhiteListDefaultTypeInternal _PrimaryAccountNumberWhiteList_default_instance_;
}  // namespace transactions
}  // namespace axis
PROTOBUF_NAMESPACE_OPEN
template<> ::axis::transactions::PrimaryAccountNumberWhiteList* Arena::CreateMaybeMessage<::axis::transactions::PrimaryAccountNumberWhiteList>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace axis {
namespace transactions {

// ===================================================================

class PrimaryAccountNumberWhiteList PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:axis.transactions.PrimaryAccountNumberWhiteList) */ {
 public:
  inline PrimaryAccountNumberWhiteList() : PrimaryAccountNumberWhiteList(nullptr) {}
  virtual ~PrimaryAccountNumberWhiteList();

  PrimaryAccountNumberWhiteList(const PrimaryAccountNumberWhiteList& from);
  PrimaryAccountNumberWhiteList(PrimaryAccountNumberWhiteList&& from) noexcept
    : PrimaryAccountNumberWhiteList() {
    *this = ::std::move(from);
  }

  inline PrimaryAccountNumberWhiteList& operator=(const PrimaryAccountNumberWhiteList& from) {
    CopyFrom(from);
    return *this;
  }
  inline PrimaryAccountNumberWhiteList& operator=(PrimaryAccountNumberWhiteList&& from) noexcept {
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
  static const PrimaryAccountNumberWhiteList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PrimaryAccountNumberWhiteList* internal_default_instance() {
    return reinterpret_cast<const PrimaryAccountNumberWhiteList*>(
               &_PrimaryAccountNumberWhiteList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PrimaryAccountNumberWhiteList& a, PrimaryAccountNumberWhiteList& b) {
    a.Swap(&b);
  }
  inline void Swap(PrimaryAccountNumberWhiteList* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PrimaryAccountNumberWhiteList* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PrimaryAccountNumberWhiteList* New() const final {
    return CreateMaybeMessage<PrimaryAccountNumberWhiteList>(nullptr);
  }

  PrimaryAccountNumberWhiteList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PrimaryAccountNumberWhiteList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PrimaryAccountNumberWhiteList& from);
  void MergeFrom(const PrimaryAccountNumberWhiteList& from);
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
  void InternalSwap(PrimaryAccountNumberWhiteList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "axis.transactions.PrimaryAccountNumberWhiteList";
  }
  protected:
  explicit PrimaryAccountNumberWhiteList(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Protos_2fpan_2dacceptance_2dlist_2eproto);
    return ::descriptor_table_Protos_2fpan_2dacceptance_2dlist_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInitialPanCryptFieldNumber = 5,
    kPanSequenceNumberFieldNumber = 6,
    kRegisterDateFieldNumber = 4,
    kMessageIdFieldNumber = 1,
    kIndexFieldNumber = 2,
    kReasonFieldNumber = 3,
  };
  // bytes initial_pan_crypt = 5;
  void clear_initial_pan_crypt();
  const std::string& initial_pan_crypt() const;
  void set_initial_pan_crypt(const std::string& value);
  void set_initial_pan_crypt(std::string&& value);
  void set_initial_pan_crypt(const char* value);
  void set_initial_pan_crypt(const void* value, size_t size);
  std::string* mutable_initial_pan_crypt();
  std::string* release_initial_pan_crypt();
  void set_allocated_initial_pan_crypt(std::string* initial_pan_crypt);
  private:
  const std::string& _internal_initial_pan_crypt() const;
  void _internal_set_initial_pan_crypt(const std::string& value);
  std::string* _internal_mutable_initial_pan_crypt();
  public:

  // string pan_sequence_number = 6;
  void clear_pan_sequence_number();
  const std::string& pan_sequence_number() const;
  void set_pan_sequence_number(const std::string& value);
  void set_pan_sequence_number(std::string&& value);
  void set_pan_sequence_number(const char* value);
  void set_pan_sequence_number(const char* value, size_t size);
  std::string* mutable_pan_sequence_number();
  std::string* release_pan_sequence_number();
  void set_allocated_pan_sequence_number(std::string* pan_sequence_number);
  private:
  const std::string& _internal_pan_sequence_number() const;
  void _internal_set_pan_sequence_number(const std::string& value);
  std::string* _internal_mutable_pan_sequence_number();
  public:

  // .google.protobuf.Timestamp register_date = 4;
  bool has_register_date() const;
  private:
  bool _internal_has_register_date() const;
  public:
  void clear_register_date();
  const PROTOBUF_NAMESPACE_ID::Timestamp& register_date() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_register_date();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_register_date();
  void set_allocated_register_date(PROTOBUF_NAMESPACE_ID::Timestamp* register_date);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_register_date() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_register_date();
  public:
  void unsafe_arena_set_allocated_register_date(
      PROTOBUF_NAMESPACE_ID::Timestamp* register_date);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_register_date();

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

  // int32 reason = 3;
  void clear_reason();
  ::PROTOBUF_NAMESPACE_ID::int32 reason() const;
  void set_reason(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_reason() const;
  void _internal_set_reason(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:axis.transactions.PrimaryAccountNumberWhiteList)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr initial_pan_crypt_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr pan_sequence_number_;
  PROTOBUF_NAMESPACE_ID::Timestamp* register_date_;
  ::PROTOBUF_NAMESPACE_ID::int32 message_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 index_;
  ::PROTOBUF_NAMESPACE_ID::int32 reason_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Protos_2fpan_2dacceptance_2dlist_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PrimaryAccountNumberWhiteList

// int32 message_id = 1;
inline void PrimaryAccountNumberWhiteList::clear_message_id() {
  message_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountNumberWhiteList::_internal_message_id() const {
  return message_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountNumberWhiteList::message_id() const {
  // @@protoc_insertion_point(field_get:axis.transactions.PrimaryAccountNumberWhiteList.message_id)
  return _internal_message_id();
}
inline void PrimaryAccountNumberWhiteList::_internal_set_message_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  message_id_ = value;
}
inline void PrimaryAccountNumberWhiteList::set_message_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_message_id(value);
  // @@protoc_insertion_point(field_set:axis.transactions.PrimaryAccountNumberWhiteList.message_id)
}

// int32 index = 2;
inline void PrimaryAccountNumberWhiteList::clear_index() {
  index_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountNumberWhiteList::_internal_index() const {
  return index_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountNumberWhiteList::index() const {
  // @@protoc_insertion_point(field_get:axis.transactions.PrimaryAccountNumberWhiteList.index)
  return _internal_index();
}
inline void PrimaryAccountNumberWhiteList::_internal_set_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  index_ = value;
}
inline void PrimaryAccountNumberWhiteList::set_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_index(value);
  // @@protoc_insertion_point(field_set:axis.transactions.PrimaryAccountNumberWhiteList.index)
}

// int32 reason = 3;
inline void PrimaryAccountNumberWhiteList::clear_reason() {
  reason_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountNumberWhiteList::_internal_reason() const {
  return reason_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountNumberWhiteList::reason() const {
  // @@protoc_insertion_point(field_get:axis.transactions.PrimaryAccountNumberWhiteList.reason)
  return _internal_reason();
}
inline void PrimaryAccountNumberWhiteList::_internal_set_reason(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  reason_ = value;
}
inline void PrimaryAccountNumberWhiteList::set_reason(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_reason(value);
  // @@protoc_insertion_point(field_set:axis.transactions.PrimaryAccountNumberWhiteList.reason)
}

// .google.protobuf.Timestamp register_date = 4;
inline bool PrimaryAccountNumberWhiteList::_internal_has_register_date() const {
  return this != internal_default_instance() && register_date_ != nullptr;
}
inline bool PrimaryAccountNumberWhiteList::has_register_date() const {
  return _internal_has_register_date();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& PrimaryAccountNumberWhiteList::_internal_register_date() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = register_date_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& PrimaryAccountNumberWhiteList::register_date() const {
  // @@protoc_insertion_point(field_get:axis.transactions.PrimaryAccountNumberWhiteList.register_date)
  return _internal_register_date();
}
inline void PrimaryAccountNumberWhiteList::unsafe_arena_set_allocated_register_date(
    PROTOBUF_NAMESPACE_ID::Timestamp* register_date) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(register_date_);
  }
  register_date_ = register_date;
  if (register_date) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:axis.transactions.PrimaryAccountNumberWhiteList.register_date)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* PrimaryAccountNumberWhiteList::release_register_date() {
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = register_date_;
  register_date_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* PrimaryAccountNumberWhiteList::unsafe_arena_release_register_date() {
  // @@protoc_insertion_point(field_release:axis.transactions.PrimaryAccountNumberWhiteList.register_date)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = register_date_;
  register_date_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* PrimaryAccountNumberWhiteList::_internal_mutable_register_date() {
  
  if (register_date_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArena());
    register_date_ = p;
  }
  return register_date_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* PrimaryAccountNumberWhiteList::mutable_register_date() {
  // @@protoc_insertion_point(field_mutable:axis.transactions.PrimaryAccountNumberWhiteList.register_date)
  return _internal_mutable_register_date();
}
inline void PrimaryAccountNumberWhiteList::set_allocated_register_date(PROTOBUF_NAMESPACE_ID::Timestamp* register_date) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(register_date_);
  }
  if (register_date) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(register_date)->GetArena();
    if (message_arena != submessage_arena) {
      register_date = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, register_date, submessage_arena);
    }
    
  } else {
    
  }
  register_date_ = register_date;
  // @@protoc_insertion_point(field_set_allocated:axis.transactions.PrimaryAccountNumberWhiteList.register_date)
}

// bytes initial_pan_crypt = 5;
inline void PrimaryAccountNumberWhiteList::clear_initial_pan_crypt() {
  initial_pan_crypt_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& PrimaryAccountNumberWhiteList::initial_pan_crypt() const {
  // @@protoc_insertion_point(field_get:axis.transactions.PrimaryAccountNumberWhiteList.initial_pan_crypt)
  return _internal_initial_pan_crypt();
}
inline void PrimaryAccountNumberWhiteList::set_initial_pan_crypt(const std::string& value) {
  _internal_set_initial_pan_crypt(value);
  // @@protoc_insertion_point(field_set:axis.transactions.PrimaryAccountNumberWhiteList.initial_pan_crypt)
}
inline std::string* PrimaryAccountNumberWhiteList::mutable_initial_pan_crypt() {
  // @@protoc_insertion_point(field_mutable:axis.transactions.PrimaryAccountNumberWhiteList.initial_pan_crypt)
  return _internal_mutable_initial_pan_crypt();
}
inline const std::string& PrimaryAccountNumberWhiteList::_internal_initial_pan_crypt() const {
  return initial_pan_crypt_.Get();
}
inline void PrimaryAccountNumberWhiteList::_internal_set_initial_pan_crypt(const std::string& value) {
  
  initial_pan_crypt_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void PrimaryAccountNumberWhiteList::set_initial_pan_crypt(std::string&& value) {
  
  initial_pan_crypt_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:axis.transactions.PrimaryAccountNumberWhiteList.initial_pan_crypt)
}
inline void PrimaryAccountNumberWhiteList::set_initial_pan_crypt(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  initial_pan_crypt_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:axis.transactions.PrimaryAccountNumberWhiteList.initial_pan_crypt)
}
inline void PrimaryAccountNumberWhiteList::set_initial_pan_crypt(const void* value,
    size_t size) {
  
  initial_pan_crypt_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:axis.transactions.PrimaryAccountNumberWhiteList.initial_pan_crypt)
}
inline std::string* PrimaryAccountNumberWhiteList::_internal_mutable_initial_pan_crypt() {
  
  return initial_pan_crypt_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* PrimaryAccountNumberWhiteList::release_initial_pan_crypt() {
  // @@protoc_insertion_point(field_release:axis.transactions.PrimaryAccountNumberWhiteList.initial_pan_crypt)
  return initial_pan_crypt_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PrimaryAccountNumberWhiteList::set_allocated_initial_pan_crypt(std::string* initial_pan_crypt) {
  if (initial_pan_crypt != nullptr) {
    
  } else {
    
  }
  initial_pan_crypt_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), initial_pan_crypt,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:axis.transactions.PrimaryAccountNumberWhiteList.initial_pan_crypt)
}

// string pan_sequence_number = 6;
inline void PrimaryAccountNumberWhiteList::clear_pan_sequence_number() {
  pan_sequence_number_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& PrimaryAccountNumberWhiteList::pan_sequence_number() const {
  // @@protoc_insertion_point(field_get:axis.transactions.PrimaryAccountNumberWhiteList.pan_sequence_number)
  return _internal_pan_sequence_number();
}
inline void PrimaryAccountNumberWhiteList::set_pan_sequence_number(const std::string& value) {
  _internal_set_pan_sequence_number(value);
  // @@protoc_insertion_point(field_set:axis.transactions.PrimaryAccountNumberWhiteList.pan_sequence_number)
}
inline std::string* PrimaryAccountNumberWhiteList::mutable_pan_sequence_number() {
  // @@protoc_insertion_point(field_mutable:axis.transactions.PrimaryAccountNumberWhiteList.pan_sequence_number)
  return _internal_mutable_pan_sequence_number();
}
inline const std::string& PrimaryAccountNumberWhiteList::_internal_pan_sequence_number() const {
  return pan_sequence_number_.Get();
}
inline void PrimaryAccountNumberWhiteList::_internal_set_pan_sequence_number(const std::string& value) {
  
  pan_sequence_number_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void PrimaryAccountNumberWhiteList::set_pan_sequence_number(std::string&& value) {
  
  pan_sequence_number_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:axis.transactions.PrimaryAccountNumberWhiteList.pan_sequence_number)
}
inline void PrimaryAccountNumberWhiteList::set_pan_sequence_number(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  pan_sequence_number_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:axis.transactions.PrimaryAccountNumberWhiteList.pan_sequence_number)
}
inline void PrimaryAccountNumberWhiteList::set_pan_sequence_number(const char* value,
    size_t size) {
  
  pan_sequence_number_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:axis.transactions.PrimaryAccountNumberWhiteList.pan_sequence_number)
}
inline std::string* PrimaryAccountNumberWhiteList::_internal_mutable_pan_sequence_number() {
  
  return pan_sequence_number_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* PrimaryAccountNumberWhiteList::release_pan_sequence_number() {
  // @@protoc_insertion_point(field_release:axis.transactions.PrimaryAccountNumberWhiteList.pan_sequence_number)
  return pan_sequence_number_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PrimaryAccountNumberWhiteList::set_allocated_pan_sequence_number(std::string* pan_sequence_number) {
  if (pan_sequence_number != nullptr) {
    
  } else {
    
  }
  pan_sequence_number_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), pan_sequence_number,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:axis.transactions.PrimaryAccountNumberWhiteList.pan_sequence_number)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace transactions
}  // namespace axis

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Protos_2fpan_2dacceptance_2dlist_2eproto
