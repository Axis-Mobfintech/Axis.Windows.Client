// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protos/pan_acceptance_list.proto

#include "Protos/pan_acceptance_list.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ftimestamp_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto;
namespace axis {
namespace transactions {
class PrimaryAccountNumberWhiteListDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PrimaryAccountNumberWhiteList> _instance;
} _PrimaryAccountNumberWhiteList_default_instance_;
}  // namespace transactions
}  // namespace axis
static void InitDefaultsscc_info_PrimaryAccountNumberWhiteList_Protos_2fpan_5facceptance_5flist_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::axis::transactions::_PrimaryAccountNumberWhiteList_default_instance_;
    new (ptr) ::axis::transactions::PrimaryAccountNumberWhiteList();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::axis::transactions::PrimaryAccountNumberWhiteList::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PrimaryAccountNumberWhiteList_Protos_2fpan_5facceptance_5flist_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_PrimaryAccountNumberWhiteList_Protos_2fpan_5facceptance_5flist_2eproto}, {
      &scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Protos_2fpan_5facceptance_5flist_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Protos_2fpan_5facceptance_5flist_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Protos_2fpan_5facceptance_5flist_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Protos_2fpan_5facceptance_5flist_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::axis::transactions::PrimaryAccountNumberWhiteList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::axis::transactions::PrimaryAccountNumberWhiteList, index_),
  PROTOBUF_FIELD_OFFSET(::axis::transactions::PrimaryAccountNumberWhiteList, reason_),
  PROTOBUF_FIELD_OFFSET(::axis::transactions::PrimaryAccountNumberWhiteList, register_date_),
  PROTOBUF_FIELD_OFFSET(::axis::transactions::PrimaryAccountNumberWhiteList, initial_pan_crypt_),
  PROTOBUF_FIELD_OFFSET(::axis::transactions::PrimaryAccountNumberWhiteList, pan_sequence_number_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::axis::transactions::PrimaryAccountNumberWhiteList)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::axis::transactions::_PrimaryAccountNumberWhiteList_default_instance_),
};

const char descriptor_table_protodef_Protos_2fpan_5facceptance_5flist_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n Protos/pan_acceptance_list.proto\022\021axis"
  ".transactions\032\037google/protobuf/timestamp"
  ".proto\"\251\001\n\035PrimaryAccountNumberWhiteList"
  "\022\r\n\005index\030\001 \001(\005\022\016\n\006reason\030\002 \001(\005\0221\n\rregis"
  "ter_date\030\003 \001(\0132\032.google.protobuf.Timesta"
  "mp\022\031\n\021initial_pan_crypt\030\004 \001(\014\022\033\n\023pan_seq"
  "uence_number\030\005 \001(\tBQ\n#com.axismobfintech"
  ".gpb.transactionsZ\022axistransactionspb\252\002\025"
  "Axis.GPB.Transactionsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Protos_2fpan_5facceptance_5flist_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Protos_2fpan_5facceptance_5flist_2eproto_sccs[1] = {
  &scc_info_PrimaryAccountNumberWhiteList_Protos_2fpan_5facceptance_5flist_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Protos_2fpan_5facceptance_5flist_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Protos_2fpan_5facceptance_5flist_2eproto = {
  false, false, descriptor_table_protodef_Protos_2fpan_5facceptance_5flist_2eproto, "Protos/pan_acceptance_list.proto", 349,
  &descriptor_table_Protos_2fpan_5facceptance_5flist_2eproto_once, descriptor_table_Protos_2fpan_5facceptance_5flist_2eproto_sccs, descriptor_table_Protos_2fpan_5facceptance_5flist_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_Protos_2fpan_5facceptance_5flist_2eproto::offsets,
  file_level_metadata_Protos_2fpan_5facceptance_5flist_2eproto, 1, file_level_enum_descriptors_Protos_2fpan_5facceptance_5flist_2eproto, file_level_service_descriptors_Protos_2fpan_5facceptance_5flist_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Protos_2fpan_5facceptance_5flist_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Protos_2fpan_5facceptance_5flist_2eproto)), true);
namespace axis {
namespace transactions {

// ===================================================================

void PrimaryAccountNumberWhiteList::InitAsDefaultInstance() {
  ::axis::transactions::_PrimaryAccountNumberWhiteList_default_instance_._instance.get_mutable()->register_date_ = const_cast< PROTOBUF_NAMESPACE_ID::Timestamp*>(
      PROTOBUF_NAMESPACE_ID::Timestamp::internal_default_instance());
}
class PrimaryAccountNumberWhiteList::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Timestamp& register_date(const PrimaryAccountNumberWhiteList* msg);
};

const PROTOBUF_NAMESPACE_ID::Timestamp&
PrimaryAccountNumberWhiteList::_Internal::register_date(const PrimaryAccountNumberWhiteList* msg) {
  return *msg->register_date_;
}
void PrimaryAccountNumberWhiteList::clear_register_date() {
  if (GetArena() == nullptr && register_date_ != nullptr) {
    delete register_date_;
  }
  register_date_ = nullptr;
}
PrimaryAccountNumberWhiteList::PrimaryAccountNumberWhiteList(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:axis.transactions.PrimaryAccountNumberWhiteList)
}
PrimaryAccountNumberWhiteList::PrimaryAccountNumberWhiteList(const PrimaryAccountNumberWhiteList& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  initial_pan_crypt_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_initial_pan_crypt().empty()) {
    initial_pan_crypt_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_initial_pan_crypt(),
      GetArena());
  }
  pan_sequence_number_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_pan_sequence_number().empty()) {
    pan_sequence_number_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_pan_sequence_number(),
      GetArena());
  }
  if (from._internal_has_register_date()) {
    register_date_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.register_date_);
  } else {
    register_date_ = nullptr;
  }
  ::memcpy(&index_, &from.index_,
    static_cast<size_t>(reinterpret_cast<char*>(&reason_) -
    reinterpret_cast<char*>(&index_)) + sizeof(reason_));
  // @@protoc_insertion_point(copy_constructor:axis.transactions.PrimaryAccountNumberWhiteList)
}

void PrimaryAccountNumberWhiteList::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_PrimaryAccountNumberWhiteList_Protos_2fpan_5facceptance_5flist_2eproto.base);
  initial_pan_crypt_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  pan_sequence_number_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&register_date_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&reason_) -
      reinterpret_cast<char*>(&register_date_)) + sizeof(reason_));
}

PrimaryAccountNumberWhiteList::~PrimaryAccountNumberWhiteList() {
  // @@protoc_insertion_point(destructor:axis.transactions.PrimaryAccountNumberWhiteList)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PrimaryAccountNumberWhiteList::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  initial_pan_crypt_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  pan_sequence_number_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete register_date_;
}

void PrimaryAccountNumberWhiteList::ArenaDtor(void* object) {
  PrimaryAccountNumberWhiteList* _this = reinterpret_cast< PrimaryAccountNumberWhiteList* >(object);
  (void)_this;
}
void PrimaryAccountNumberWhiteList::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PrimaryAccountNumberWhiteList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PrimaryAccountNumberWhiteList& PrimaryAccountNumberWhiteList::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PrimaryAccountNumberWhiteList_Protos_2fpan_5facceptance_5flist_2eproto.base);
  return *internal_default_instance();
}


void PrimaryAccountNumberWhiteList::Clear() {
// @@protoc_insertion_point(message_clear_start:axis.transactions.PrimaryAccountNumberWhiteList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  initial_pan_crypt_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  pan_sequence_number_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  if (GetArena() == nullptr && register_date_ != nullptr) {
    delete register_date_;
  }
  register_date_ = nullptr;
  ::memset(&index_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&reason_) -
      reinterpret_cast<char*>(&index_)) + sizeof(reason_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PrimaryAccountNumberWhiteList::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 index = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 reason = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          reason_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp register_date = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_register_date(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes initial_pan_crypt = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_initial_pan_crypt();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string pan_sequence_number = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_pan_sequence_number();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "axis.transactions.PrimaryAccountNumberWhiteList.pan_sequence_number"));
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* PrimaryAccountNumberWhiteList::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:axis.transactions.PrimaryAccountNumberWhiteList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 index = 1;
  if (this->index() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_index(), target);
  }

  // int32 reason = 2;
  if (this->reason() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_reason(), target);
  }

  // .google.protobuf.Timestamp register_date = 3;
  if (this->has_register_date()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::register_date(this), target, stream);
  }

  // bytes initial_pan_crypt = 4;
  if (this->initial_pan_crypt().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_initial_pan_crypt(), target);
  }

  // string pan_sequence_number = 5;
  if (this->pan_sequence_number().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_pan_sequence_number().data(), static_cast<int>(this->_internal_pan_sequence_number().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "axis.transactions.PrimaryAccountNumberWhiteList.pan_sequence_number");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_pan_sequence_number(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:axis.transactions.PrimaryAccountNumberWhiteList)
  return target;
}

size_t PrimaryAccountNumberWhiteList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:axis.transactions.PrimaryAccountNumberWhiteList)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes initial_pan_crypt = 4;
  if (this->initial_pan_crypt().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_initial_pan_crypt());
  }

  // string pan_sequence_number = 5;
  if (this->pan_sequence_number().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_pan_sequence_number());
  }

  // .google.protobuf.Timestamp register_date = 3;
  if (this->has_register_date()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *register_date_);
  }

  // int32 index = 1;
  if (this->index() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_index());
  }

  // int32 reason = 2;
  if (this->reason() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_reason());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PrimaryAccountNumberWhiteList::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:axis.transactions.PrimaryAccountNumberWhiteList)
  GOOGLE_DCHECK_NE(&from, this);
  const PrimaryAccountNumberWhiteList* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PrimaryAccountNumberWhiteList>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:axis.transactions.PrimaryAccountNumberWhiteList)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:axis.transactions.PrimaryAccountNumberWhiteList)
    MergeFrom(*source);
  }
}

void PrimaryAccountNumberWhiteList::MergeFrom(const PrimaryAccountNumberWhiteList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:axis.transactions.PrimaryAccountNumberWhiteList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.initial_pan_crypt().size() > 0) {
    _internal_set_initial_pan_crypt(from._internal_initial_pan_crypt());
  }
  if (from.pan_sequence_number().size() > 0) {
    _internal_set_pan_sequence_number(from._internal_pan_sequence_number());
  }
  if (from.has_register_date()) {
    _internal_mutable_register_date()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_register_date());
  }
  if (from.index() != 0) {
    _internal_set_index(from._internal_index());
  }
  if (from.reason() != 0) {
    _internal_set_reason(from._internal_reason());
  }
}

void PrimaryAccountNumberWhiteList::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:axis.transactions.PrimaryAccountNumberWhiteList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PrimaryAccountNumberWhiteList::CopyFrom(const PrimaryAccountNumberWhiteList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:axis.transactions.PrimaryAccountNumberWhiteList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PrimaryAccountNumberWhiteList::IsInitialized() const {
  return true;
}

void PrimaryAccountNumberWhiteList::InternalSwap(PrimaryAccountNumberWhiteList* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  initial_pan_crypt_.Swap(&other->initial_pan_crypt_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  pan_sequence_number_.Swap(&other->pan_sequence_number_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PrimaryAccountNumberWhiteList, reason_)
      + sizeof(PrimaryAccountNumberWhiteList::reason_)
      - PROTOBUF_FIELD_OFFSET(PrimaryAccountNumberWhiteList, register_date_)>(
          reinterpret_cast<char*>(&register_date_),
          reinterpret_cast<char*>(&other->register_date_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PrimaryAccountNumberWhiteList::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace transactions
}  // namespace axis
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::axis::transactions::PrimaryAccountNumberWhiteList* Arena::CreateMaybeMessage< ::axis::transactions::PrimaryAccountNumberWhiteList >(Arena* arena) {
  return Arena::CreateMessageInternal< ::axis::transactions::PrimaryAccountNumberWhiteList >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
