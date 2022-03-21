// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protos/pan_restriction_list.proto

#include "Protos/pan_restriction_list.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG
namespace axis {
namespace transactions {
constexpr PrimaryAccountNumberBlackList::PrimaryAccountNumberBlackList(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : initial_pan_crypt_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , register_date_(nullptr)
  , index_(0)
  , reason_(0)
  , pan_sequence_number_(0){}
struct PrimaryAccountNumberBlackListDefaultTypeInternal {
  constexpr PrimaryAccountNumberBlackListDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~PrimaryAccountNumberBlackListDefaultTypeInternal() {}
  union {
    PrimaryAccountNumberBlackList _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PrimaryAccountNumberBlackListDefaultTypeInternal _PrimaryAccountNumberBlackList_default_instance_;
}  // namespace transactions
}  // namespace axis
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Protos_2fpan_5frestriction_5flist_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Protos_2fpan_5frestriction_5flist_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Protos_2fpan_5frestriction_5flist_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Protos_2fpan_5frestriction_5flist_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::axis::transactions::PrimaryAccountNumberBlackList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::axis::transactions::PrimaryAccountNumberBlackList, index_),
  PROTOBUF_FIELD_OFFSET(::axis::transactions::PrimaryAccountNumberBlackList, reason_),
  PROTOBUF_FIELD_OFFSET(::axis::transactions::PrimaryAccountNumberBlackList, register_date_),
  PROTOBUF_FIELD_OFFSET(::axis::transactions::PrimaryAccountNumberBlackList, initial_pan_crypt_),
  PROTOBUF_FIELD_OFFSET(::axis::transactions::PrimaryAccountNumberBlackList, pan_sequence_number_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::axis::transactions::PrimaryAccountNumberBlackList)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::axis::transactions::_PrimaryAccountNumberBlackList_default_instance_),
};

const char descriptor_table_protodef_Protos_2fpan_5frestriction_5flist_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!Protos/pan_restriction_list.proto\022\021axi"
  "s.transactions\032\037google/protobuf/timestam"
  "p.proto\"\251\001\n\035PrimaryAccountNumberBlackLis"
  "t\022\r\n\005index\030\001 \001(\005\022\016\n\006reason\030\002 \001(\005\0221\n\rregi"
  "ster_date\030\003 \001(\0132\032.google.protobuf.Timest"
  "amp\022\031\n\021initial_pan_crypt\030\004 \001(\014\022\033\n\023pan_se"
  "quence_number\030\005 \001(\005BQ\n#com.axismobfintec"
  "h.gpb.transactionsZ\022axistransactionspb\252\002"
  "\025Axis.GPB.Transactionsb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Protos_2fpan_5frestriction_5flist_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Protos_2fpan_5frestriction_5flist_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Protos_2fpan_5frestriction_5flist_2eproto = {
  false, false, 350, descriptor_table_protodef_Protos_2fpan_5frestriction_5flist_2eproto, "Protos/pan_restriction_list.proto", 
  &descriptor_table_Protos_2fpan_5frestriction_5flist_2eproto_once, descriptor_table_Protos_2fpan_5frestriction_5flist_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_Protos_2fpan_5frestriction_5flist_2eproto::offsets,
  file_level_metadata_Protos_2fpan_5frestriction_5flist_2eproto, file_level_enum_descriptors_Protos_2fpan_5frestriction_5flist_2eproto, file_level_service_descriptors_Protos_2fpan_5frestriction_5flist_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_Protos_2fpan_5frestriction_5flist_2eproto_getter() {
  return &descriptor_table_Protos_2fpan_5frestriction_5flist_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_Protos_2fpan_5frestriction_5flist_2eproto(&descriptor_table_Protos_2fpan_5frestriction_5flist_2eproto);
namespace axis {
namespace transactions {

// ===================================================================

class PrimaryAccountNumberBlackList::_Internal {
 public:
  static const ::PROTOBUF_NAMESPACE_ID::Timestamp& register_date(const PrimaryAccountNumberBlackList* msg);
};

const ::PROTOBUF_NAMESPACE_ID::Timestamp&
PrimaryAccountNumberBlackList::_Internal::register_date(const PrimaryAccountNumberBlackList* msg) {
  return *msg->register_date_;
}
void PrimaryAccountNumberBlackList::clear_register_date() {
  if (GetArenaForAllocation() == nullptr && register_date_ != nullptr) {
    delete register_date_;
  }
  register_date_ = nullptr;
}
PrimaryAccountNumberBlackList::PrimaryAccountNumberBlackList(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:axis.transactions.PrimaryAccountNumberBlackList)
}
PrimaryAccountNumberBlackList::PrimaryAccountNumberBlackList(const PrimaryAccountNumberBlackList& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  initial_pan_crypt_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_initial_pan_crypt().empty()) {
    initial_pan_crypt_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_initial_pan_crypt(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_register_date()) {
    register_date_ = new ::PROTOBUF_NAMESPACE_ID::Timestamp(*from.register_date_);
  } else {
    register_date_ = nullptr;
  }
  ::memcpy(&index_, &from.index_,
    static_cast<size_t>(reinterpret_cast<char*>(&pan_sequence_number_) -
    reinterpret_cast<char*>(&index_)) + sizeof(pan_sequence_number_));
  // @@protoc_insertion_point(copy_constructor:axis.transactions.PrimaryAccountNumberBlackList)
}

void PrimaryAccountNumberBlackList::SharedCtor() {
initial_pan_crypt_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&register_date_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&pan_sequence_number_) -
    reinterpret_cast<char*>(&register_date_)) + sizeof(pan_sequence_number_));
}

PrimaryAccountNumberBlackList::~PrimaryAccountNumberBlackList() {
  // @@protoc_insertion_point(destructor:axis.transactions.PrimaryAccountNumberBlackList)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void PrimaryAccountNumberBlackList::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  initial_pan_crypt_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete register_date_;
}

void PrimaryAccountNumberBlackList::ArenaDtor(void* object) {
  PrimaryAccountNumberBlackList* _this = reinterpret_cast< PrimaryAccountNumberBlackList* >(object);
  (void)_this;
}
void PrimaryAccountNumberBlackList::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PrimaryAccountNumberBlackList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void PrimaryAccountNumberBlackList::Clear() {
// @@protoc_insertion_point(message_clear_start:axis.transactions.PrimaryAccountNumberBlackList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  initial_pan_crypt_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && register_date_ != nullptr) {
    delete register_date_;
  }
  register_date_ = nullptr;
  ::memset(&index_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&pan_sequence_number_) -
      reinterpret_cast<char*>(&index_)) + sizeof(pan_sequence_number_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PrimaryAccountNumberBlackList::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 index = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 reason = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          reason_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp register_date = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_register_date(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes initial_pan_crypt = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_initial_pan_crypt();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 pan_sequence_number = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          pan_sequence_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* PrimaryAccountNumberBlackList::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:axis.transactions.PrimaryAccountNumberBlackList)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 index = 1;
  if (this->_internal_index() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_index(), target);
  }

  // int32 reason = 2;
  if (this->_internal_reason() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_reason(), target);
  }

  // .google.protobuf.Timestamp register_date = 3;
  if (this->_internal_has_register_date()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::register_date(this), target, stream);
  }

  // bytes initial_pan_crypt = 4;
  if (!this->_internal_initial_pan_crypt().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_initial_pan_crypt(), target);
  }

  // int32 pan_sequence_number = 5;
  if (this->_internal_pan_sequence_number() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_pan_sequence_number(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:axis.transactions.PrimaryAccountNumberBlackList)
  return target;
}

size_t PrimaryAccountNumberBlackList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:axis.transactions.PrimaryAccountNumberBlackList)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes initial_pan_crypt = 4;
  if (!this->_internal_initial_pan_crypt().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_initial_pan_crypt());
  }

  // .google.protobuf.Timestamp register_date = 3;
  if (this->_internal_has_register_date()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *register_date_);
  }

  // int32 index = 1;
  if (this->_internal_index() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_index());
  }

  // int32 reason = 2;
  if (this->_internal_reason() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_reason());
  }

  // int32 pan_sequence_number = 5;
  if (this->_internal_pan_sequence_number() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_pan_sequence_number());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PrimaryAccountNumberBlackList::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    PrimaryAccountNumberBlackList::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PrimaryAccountNumberBlackList::GetClassData() const { return &_class_data_; }

void PrimaryAccountNumberBlackList::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<PrimaryAccountNumberBlackList *>(to)->MergeFrom(
      static_cast<const PrimaryAccountNumberBlackList &>(from));
}


void PrimaryAccountNumberBlackList::MergeFrom(const PrimaryAccountNumberBlackList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:axis.transactions.PrimaryAccountNumberBlackList)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_initial_pan_crypt().empty()) {
    _internal_set_initial_pan_crypt(from._internal_initial_pan_crypt());
  }
  if (from._internal_has_register_date()) {
    _internal_mutable_register_date()->::PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_register_date());
  }
  if (from._internal_index() != 0) {
    _internal_set_index(from._internal_index());
  }
  if (from._internal_reason() != 0) {
    _internal_set_reason(from._internal_reason());
  }
  if (from._internal_pan_sequence_number() != 0) {
    _internal_set_pan_sequence_number(from._internal_pan_sequence_number());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PrimaryAccountNumberBlackList::CopyFrom(const PrimaryAccountNumberBlackList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:axis.transactions.PrimaryAccountNumberBlackList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PrimaryAccountNumberBlackList::IsInitialized() const {
  return true;
}

void PrimaryAccountNumberBlackList::InternalSwap(PrimaryAccountNumberBlackList* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &initial_pan_crypt_, lhs_arena,
      &other->initial_pan_crypt_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PrimaryAccountNumberBlackList, pan_sequence_number_)
      + sizeof(PrimaryAccountNumberBlackList::pan_sequence_number_)
      - PROTOBUF_FIELD_OFFSET(PrimaryAccountNumberBlackList, register_date_)>(
          reinterpret_cast<char*>(&register_date_),
          reinterpret_cast<char*>(&other->register_date_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PrimaryAccountNumberBlackList::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_Protos_2fpan_5frestriction_5flist_2eproto_getter, &descriptor_table_Protos_2fpan_5frestriction_5flist_2eproto_once,
      file_level_metadata_Protos_2fpan_5frestriction_5flist_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace transactions
}  // namespace axis
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::axis::transactions::PrimaryAccountNumberBlackList* Arena::CreateMaybeMessage< ::axis::transactions::PrimaryAccountNumberBlackList >(Arena* arena) {
  return Arena::CreateMessageInternal< ::axis::transactions::PrimaryAccountNumberBlackList >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
