// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protos/par-acceptance-list.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Protos_2fpar_2dacceptance_2dlist_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Protos_2fpar_2dacceptance_2dlist_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_Protos_2fpar_2dacceptance_2dlist_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Protos_2fpar_2dacceptance_2dlist_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Protos_2fpar_2dacceptance_2dlist_2eproto;
namespace axis {
namespace transactions {
class PrimaryAccountReferenceWhiteList;
class PrimaryAccountReferenceWhiteListDefaultTypeInternal;
extern PrimaryAccountReferenceWhiteListDefaultTypeInternal _PrimaryAccountReferenceWhiteList_default_instance_;
}  // namespace transactions
}  // namespace axis
PROTOBUF_NAMESPACE_OPEN
template<> ::axis::transactions::PrimaryAccountReferenceWhiteList* Arena::CreateMaybeMessage<::axis::transactions::PrimaryAccountReferenceWhiteList>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace axis {
namespace transactions {

// ===================================================================

class PrimaryAccountReferenceWhiteList PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:axis.transactions.PrimaryAccountReferenceWhiteList) */ {
 public:
  inline PrimaryAccountReferenceWhiteList() : PrimaryAccountReferenceWhiteList(nullptr) {}
  virtual ~PrimaryAccountReferenceWhiteList();

  PrimaryAccountReferenceWhiteList(const PrimaryAccountReferenceWhiteList& from);
  PrimaryAccountReferenceWhiteList(PrimaryAccountReferenceWhiteList&& from) noexcept
    : PrimaryAccountReferenceWhiteList() {
    *this = ::std::move(from);
  }

  inline PrimaryAccountReferenceWhiteList& operator=(const PrimaryAccountReferenceWhiteList& from) {
    CopyFrom(from);
    return *this;
  }
  inline PrimaryAccountReferenceWhiteList& operator=(PrimaryAccountReferenceWhiteList&& from) noexcept {
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
  static const PrimaryAccountReferenceWhiteList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PrimaryAccountReferenceWhiteList* internal_default_instance() {
    return reinterpret_cast<const PrimaryAccountReferenceWhiteList*>(
               &_PrimaryAccountReferenceWhiteList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PrimaryAccountReferenceWhiteList& a, PrimaryAccountReferenceWhiteList& b) {
    a.Swap(&b);
  }
  inline void Swap(PrimaryAccountReferenceWhiteList* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PrimaryAccountReferenceWhiteList* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PrimaryAccountReferenceWhiteList* New() const final {
    return CreateMaybeMessage<PrimaryAccountReferenceWhiteList>(nullptr);
  }

  PrimaryAccountReferenceWhiteList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PrimaryAccountReferenceWhiteList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PrimaryAccountReferenceWhiteList& from);
  void MergeFrom(const PrimaryAccountReferenceWhiteList& from);
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
  void InternalSwap(PrimaryAccountReferenceWhiteList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "axis.transactions.PrimaryAccountReferenceWhiteList";
  }
  protected:
  explicit PrimaryAccountReferenceWhiteList(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Protos_2fpar_2dacceptance_2dlist_2eproto);
    return ::descriptor_table_Protos_2fpar_2dacceptance_2dlist_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRegisterDateFieldNumber = 4,
    kMessageIdFieldNumber = 1,
    kIndexFieldNumber = 2,
    kReasonFieldNumber = 3,
    kPaymentAccountReferenceFieldNumber = 5,
  };
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

  // int32 payment_account_reference = 5;
  void clear_payment_account_reference();
  ::PROTOBUF_NAMESPACE_ID::int32 payment_account_reference() const;
  void set_payment_account_reference(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_payment_account_reference() const;
  void _internal_set_payment_account_reference(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:axis.transactions.PrimaryAccountReferenceWhiteList)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  PROTOBUF_NAMESPACE_ID::Timestamp* register_date_;
  ::PROTOBUF_NAMESPACE_ID::int32 message_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 index_;
  ::PROTOBUF_NAMESPACE_ID::int32 reason_;
  ::PROTOBUF_NAMESPACE_ID::int32 payment_account_reference_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Protos_2fpar_2dacceptance_2dlist_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PrimaryAccountReferenceWhiteList

// int32 message_id = 1;
inline void PrimaryAccountReferenceWhiteList::clear_message_id() {
  message_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountReferenceWhiteList::_internal_message_id() const {
  return message_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountReferenceWhiteList::message_id() const {
  // @@protoc_insertion_point(field_get:axis.transactions.PrimaryAccountReferenceWhiteList.message_id)
  return _internal_message_id();
}
inline void PrimaryAccountReferenceWhiteList::_internal_set_message_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  message_id_ = value;
}
inline void PrimaryAccountReferenceWhiteList::set_message_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_message_id(value);
  // @@protoc_insertion_point(field_set:axis.transactions.PrimaryAccountReferenceWhiteList.message_id)
}

// int32 index = 2;
inline void PrimaryAccountReferenceWhiteList::clear_index() {
  index_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountReferenceWhiteList::_internal_index() const {
  return index_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountReferenceWhiteList::index() const {
  // @@protoc_insertion_point(field_get:axis.transactions.PrimaryAccountReferenceWhiteList.index)
  return _internal_index();
}
inline void PrimaryAccountReferenceWhiteList::_internal_set_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  index_ = value;
}
inline void PrimaryAccountReferenceWhiteList::set_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_index(value);
  // @@protoc_insertion_point(field_set:axis.transactions.PrimaryAccountReferenceWhiteList.index)
}

// int32 reason = 3;
inline void PrimaryAccountReferenceWhiteList::clear_reason() {
  reason_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountReferenceWhiteList::_internal_reason() const {
  return reason_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountReferenceWhiteList::reason() const {
  // @@protoc_insertion_point(field_get:axis.transactions.PrimaryAccountReferenceWhiteList.reason)
  return _internal_reason();
}
inline void PrimaryAccountReferenceWhiteList::_internal_set_reason(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  reason_ = value;
}
inline void PrimaryAccountReferenceWhiteList::set_reason(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_reason(value);
  // @@protoc_insertion_point(field_set:axis.transactions.PrimaryAccountReferenceWhiteList.reason)
}

// .google.protobuf.Timestamp register_date = 4;
inline bool PrimaryAccountReferenceWhiteList::_internal_has_register_date() const {
  return this != internal_default_instance() && register_date_ != nullptr;
}
inline bool PrimaryAccountReferenceWhiteList::has_register_date() const {
  return _internal_has_register_date();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& PrimaryAccountReferenceWhiteList::_internal_register_date() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = register_date_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& PrimaryAccountReferenceWhiteList::register_date() const {
  // @@protoc_insertion_point(field_get:axis.transactions.PrimaryAccountReferenceWhiteList.register_date)
  return _internal_register_date();
}
inline void PrimaryAccountReferenceWhiteList::unsafe_arena_set_allocated_register_date(
    PROTOBUF_NAMESPACE_ID::Timestamp* register_date) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(register_date_);
  }
  register_date_ = register_date;
  if (register_date) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:axis.transactions.PrimaryAccountReferenceWhiteList.register_date)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* PrimaryAccountReferenceWhiteList::release_register_date() {
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = register_date_;
  register_date_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* PrimaryAccountReferenceWhiteList::unsafe_arena_release_register_date() {
  // @@protoc_insertion_point(field_release:axis.transactions.PrimaryAccountReferenceWhiteList.register_date)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = register_date_;
  register_date_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* PrimaryAccountReferenceWhiteList::_internal_mutable_register_date() {
  
  if (register_date_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArena());
    register_date_ = p;
  }
  return register_date_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* PrimaryAccountReferenceWhiteList::mutable_register_date() {
  // @@protoc_insertion_point(field_mutable:axis.transactions.PrimaryAccountReferenceWhiteList.register_date)
  return _internal_mutable_register_date();
}
inline void PrimaryAccountReferenceWhiteList::set_allocated_register_date(PROTOBUF_NAMESPACE_ID::Timestamp* register_date) {
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
  // @@protoc_insertion_point(field_set_allocated:axis.transactions.PrimaryAccountReferenceWhiteList.register_date)
}

// int32 payment_account_reference = 5;
inline void PrimaryAccountReferenceWhiteList::clear_payment_account_reference() {
  payment_account_reference_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountReferenceWhiteList::_internal_payment_account_reference() const {
  return payment_account_reference_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PrimaryAccountReferenceWhiteList::payment_account_reference() const {
  // @@protoc_insertion_point(field_get:axis.transactions.PrimaryAccountReferenceWhiteList.payment_account_reference)
  return _internal_payment_account_reference();
}
inline void PrimaryAccountReferenceWhiteList::_internal_set_payment_account_reference(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  payment_account_reference_ = value;
}
inline void PrimaryAccountReferenceWhiteList::set_payment_account_reference(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_payment_account_reference(value);
  // @@protoc_insertion_point(field_set:axis.transactions.PrimaryAccountReferenceWhiteList.payment_account_reference)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace transactions
}  // namespace axis

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Protos_2fpar_2dacceptance_2dlist_2eproto