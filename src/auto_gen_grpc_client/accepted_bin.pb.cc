// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protos/accepted_bin.proto

#include "Protos/accepted_bin.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace axis {
namespace transactions {
class AcceptedBankIdentificationNumberDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AcceptedBankIdentificationNumber> _instance;
} _AcceptedBankIdentificationNumber_default_instance_;
}  // namespace transactions
}  // namespace axis
static void InitDefaultsscc_info_AcceptedBankIdentificationNumber_Protos_2faccepted_5fbin_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::axis::transactions::_AcceptedBankIdentificationNumber_default_instance_;
    new (ptr) ::axis::transactions::AcceptedBankIdentificationNumber();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::axis::transactions::AcceptedBankIdentificationNumber::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_AcceptedBankIdentificationNumber_Protos_2faccepted_5fbin_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_AcceptedBankIdentificationNumber_Protos_2faccepted_5fbin_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Protos_2faccepted_5fbin_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Protos_2faccepted_5fbin_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Protos_2faccepted_5fbin_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Protos_2faccepted_5fbin_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::axis::transactions::AcceptedBankIdentificationNumber, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::axis::transactions::AcceptedBankIdentificationNumber, index_),
  PROTOBUF_FIELD_OFFSET(::axis::transactions::AcceptedBankIdentificationNumber, issuer_code_),
  PROTOBUF_FIELD_OFFSET(::axis::transactions::AcceptedBankIdentificationNumber, initial_range_),
  PROTOBUF_FIELD_OFFSET(::axis::transactions::AcceptedBankIdentificationNumber, final_range_),
  PROTOBUF_FIELD_OFFSET(::axis::transactions::AcceptedBankIdentificationNumber, total_sequential_transactions_allowed_),
  PROTOBUF_FIELD_OFFSET(::axis::transactions::AcceptedBankIdentificationNumber, card_action_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::axis::transactions::AcceptedBankIdentificationNumber)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::axis::transactions::_AcceptedBankIdentificationNumber_default_instance_),
};

const char descriptor_table_protodef_Protos_2faccepted_5fbin_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031Protos/accepted_bin.proto\022\021axis.transa"
  "ctions\032\030Protos/card_action.proto\"\325\001\n Acc"
  "eptedBankIdentificationNumber\022\r\n\005index\030\002"
  " \001(\005\022\023\n\013issuer_code\030\003 \001(\005\022\025\n\rinitial_ran"
  "ge\030\004 \001(\004\022\023\n\013final_range\030\005 \001(\004\022-\n%total_s"
  "equential_transactions_allowed\030\006 \001(\r\0222\n\013"
  "card_action\030\007 \001(\0162\035.axis.transactions.Ca"
  "rdActionBQ\n#com.axismobfintech.gpb.trans"
  "actionsZ\022axistransactionspb\252\002\025Axis.GPB.T"
  "ransactionsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Protos_2faccepted_5fbin_2eproto_deps[1] = {
  &::descriptor_table_Protos_2fcard_5faction_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Protos_2faccepted_5fbin_2eproto_sccs[1] = {
  &scc_info_AcceptedBankIdentificationNumber_Protos_2faccepted_5fbin_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Protos_2faccepted_5fbin_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Protos_2faccepted_5fbin_2eproto = {
  false, false, descriptor_table_protodef_Protos_2faccepted_5fbin_2eproto, "Protos/accepted_bin.proto", 379,
  &descriptor_table_Protos_2faccepted_5fbin_2eproto_once, descriptor_table_Protos_2faccepted_5fbin_2eproto_sccs, descriptor_table_Protos_2faccepted_5fbin_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_Protos_2faccepted_5fbin_2eproto::offsets,
  file_level_metadata_Protos_2faccepted_5fbin_2eproto, 1, file_level_enum_descriptors_Protos_2faccepted_5fbin_2eproto, file_level_service_descriptors_Protos_2faccepted_5fbin_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Protos_2faccepted_5fbin_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Protos_2faccepted_5fbin_2eproto)), true);
namespace axis {
namespace transactions {

// ===================================================================

void AcceptedBankIdentificationNumber::InitAsDefaultInstance() {
}
class AcceptedBankIdentificationNumber::_Internal {
 public:
};

AcceptedBankIdentificationNumber::AcceptedBankIdentificationNumber(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:axis.transactions.AcceptedBankIdentificationNumber)
}
AcceptedBankIdentificationNumber::AcceptedBankIdentificationNumber(const AcceptedBankIdentificationNumber& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&index_, &from.index_,
    static_cast<size_t>(reinterpret_cast<char*>(&card_action_) -
    reinterpret_cast<char*>(&index_)) + sizeof(card_action_));
  // @@protoc_insertion_point(copy_constructor:axis.transactions.AcceptedBankIdentificationNumber)
}

void AcceptedBankIdentificationNumber::SharedCtor() {
  ::memset(&index_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&card_action_) -
      reinterpret_cast<char*>(&index_)) + sizeof(card_action_));
}

AcceptedBankIdentificationNumber::~AcceptedBankIdentificationNumber() {
  // @@protoc_insertion_point(destructor:axis.transactions.AcceptedBankIdentificationNumber)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AcceptedBankIdentificationNumber::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void AcceptedBankIdentificationNumber::ArenaDtor(void* object) {
  AcceptedBankIdentificationNumber* _this = reinterpret_cast< AcceptedBankIdentificationNumber* >(object);
  (void)_this;
}
void AcceptedBankIdentificationNumber::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AcceptedBankIdentificationNumber::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AcceptedBankIdentificationNumber& AcceptedBankIdentificationNumber::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AcceptedBankIdentificationNumber_Protos_2faccepted_5fbin_2eproto.base);
  return *internal_default_instance();
}


void AcceptedBankIdentificationNumber::Clear() {
// @@protoc_insertion_point(message_clear_start:axis.transactions.AcceptedBankIdentificationNumber)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&index_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&card_action_) -
      reinterpret_cast<char*>(&index_)) + sizeof(card_action_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AcceptedBankIdentificationNumber::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 index = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 issuer_code = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          issuer_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 initial_range = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          initial_range_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 final_range = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          final_range_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 total_sequential_transactions_allowed = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          total_sequential_transactions_allowed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .axis.transactions.CardAction card_action = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_card_action(static_cast<::axis::transactions::CardAction>(val));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* AcceptedBankIdentificationNumber::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:axis.transactions.AcceptedBankIdentificationNumber)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 index = 2;
  if (this->index() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_index(), target);
  }

  // int32 issuer_code = 3;
  if (this->issuer_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_issuer_code(), target);
  }

  // uint64 initial_range = 4;
  if (this->initial_range() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(4, this->_internal_initial_range(), target);
  }

  // uint64 final_range = 5;
  if (this->final_range() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(5, this->_internal_final_range(), target);
  }

  // uint32 total_sequential_transactions_allowed = 6;
  if (this->total_sequential_transactions_allowed() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(6, this->_internal_total_sequential_transactions_allowed(), target);
  }

  // .axis.transactions.CardAction card_action = 7;
  if (this->card_action() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      7, this->_internal_card_action(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:axis.transactions.AcceptedBankIdentificationNumber)
  return target;
}

size_t AcceptedBankIdentificationNumber::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:axis.transactions.AcceptedBankIdentificationNumber)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 index = 2;
  if (this->index() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_index());
  }

  // int32 issuer_code = 3;
  if (this->issuer_code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_issuer_code());
  }

  // uint64 initial_range = 4;
  if (this->initial_range() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_initial_range());
  }

  // uint64 final_range = 5;
  if (this->final_range() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_final_range());
  }

  // uint32 total_sequential_transactions_allowed = 6;
  if (this->total_sequential_transactions_allowed() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_total_sequential_transactions_allowed());
  }

  // .axis.transactions.CardAction card_action = 7;
  if (this->card_action() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_card_action());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AcceptedBankIdentificationNumber::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:axis.transactions.AcceptedBankIdentificationNumber)
  GOOGLE_DCHECK_NE(&from, this);
  const AcceptedBankIdentificationNumber* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AcceptedBankIdentificationNumber>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:axis.transactions.AcceptedBankIdentificationNumber)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:axis.transactions.AcceptedBankIdentificationNumber)
    MergeFrom(*source);
  }
}

void AcceptedBankIdentificationNumber::MergeFrom(const AcceptedBankIdentificationNumber& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:axis.transactions.AcceptedBankIdentificationNumber)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.index() != 0) {
    _internal_set_index(from._internal_index());
  }
  if (from.issuer_code() != 0) {
    _internal_set_issuer_code(from._internal_issuer_code());
  }
  if (from.initial_range() != 0) {
    _internal_set_initial_range(from._internal_initial_range());
  }
  if (from.final_range() != 0) {
    _internal_set_final_range(from._internal_final_range());
  }
  if (from.total_sequential_transactions_allowed() != 0) {
    _internal_set_total_sequential_transactions_allowed(from._internal_total_sequential_transactions_allowed());
  }
  if (from.card_action() != 0) {
    _internal_set_card_action(from._internal_card_action());
  }
}

void AcceptedBankIdentificationNumber::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:axis.transactions.AcceptedBankIdentificationNumber)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AcceptedBankIdentificationNumber::CopyFrom(const AcceptedBankIdentificationNumber& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:axis.transactions.AcceptedBankIdentificationNumber)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AcceptedBankIdentificationNumber::IsInitialized() const {
  return true;
}

void AcceptedBankIdentificationNumber::InternalSwap(AcceptedBankIdentificationNumber* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AcceptedBankIdentificationNumber, card_action_)
      + sizeof(AcceptedBankIdentificationNumber::card_action_)
      - PROTOBUF_FIELD_OFFSET(AcceptedBankIdentificationNumber, index_)>(
          reinterpret_cast<char*>(&index_),
          reinterpret_cast<char*>(&other->index_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AcceptedBankIdentificationNumber::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace transactions
}  // namespace axis
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::axis::transactions::AcceptedBankIdentificationNumber* Arena::CreateMaybeMessage< ::axis::transactions::AcceptedBankIdentificationNumber >(Arena* arena) {
  return Arena::CreateMessageInternal< ::axis::transactions::AcceptedBankIdentificationNumber >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
