// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bosdyn/api/graph_nav/nav.proto

#include "bosdyn/api/graph_nav/nav.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_bosdyn_2fapi_2fgeometry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_SE3Pose_bosdyn_2fapi_2fgeometry_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_bosdyn_2fapi_2fgraph_5fnav_2fmap_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Edge_Id_bosdyn_2fapi_2fgraph_5fnav_2fmap_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ftimestamp_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto;
namespace bosdyn {
namespace api {
namespace graph_nav {
class RouteDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Route> _instance;
} _Route_default_instance_;
class LocalizationDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Localization> _instance;
} _Localization_default_instance_;
}  // namespace graph_nav
}  // namespace api
}  // namespace bosdyn
static void InitDefaultsscc_info_Localization_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::bosdyn::api::graph_nav::_Localization_default_instance_;
    new (ptr) ::bosdyn::api::graph_nav::Localization();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::bosdyn::api::graph_nav::Localization::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Localization_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_Localization_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto}, {
      &scc_info_SE3Pose_bosdyn_2fapi_2fgeometry_2eproto.base,
      &scc_info_Timestamp_google_2fprotobuf_2ftimestamp_2eproto.base,}};

static void InitDefaultsscc_info_Route_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::bosdyn::api::graph_nav::_Route_default_instance_;
    new (ptr) ::bosdyn::api::graph_nav::Route();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::bosdyn::api::graph_nav::Route::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Route_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Route_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto}, {
      &scc_info_Edge_Id_bosdyn_2fapi_2fgraph_5fnav_2fmap_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::bosdyn::api::graph_nav::Route, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::bosdyn::api::graph_nav::Route, waypoint_id_),
  PROTOBUF_FIELD_OFFSET(::bosdyn::api::graph_nav::Route, edge_id_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::bosdyn::api::graph_nav::Localization, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::bosdyn::api::graph_nav::Localization, waypoint_id_),
  PROTOBUF_FIELD_OFFSET(::bosdyn::api::graph_nav::Localization, waypoint_tform_body_),
  PROTOBUF_FIELD_OFFSET(::bosdyn::api::graph_nav::Localization, timestamp_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::bosdyn::api::graph_nav::Route)},
  { 7, -1, sizeof(::bosdyn::api::graph_nav::Localization)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::bosdyn::api::graph_nav::_Route_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::bosdyn::api::graph_nav::_Localization_default_instance_),
};

const char descriptor_table_protodef_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036bosdyn/api/graph_nav/nav.proto\022\024bosdyn"
  ".api.graph_nav\032\036bosdyn/api/graph_nav/map"
  ".proto\032\031bosdyn/api/geometry.proto\032\037googl"
  "e/protobuf/timestamp.proto\"L\n\005Route\022\023\n\013w"
  "aypoint_id\030\002 \003(\t\022.\n\007edge_id\030\003 \003(\0132\035.bosd"
  "yn.api.graph_nav.Edge.Id\"\204\001\n\014Localizatio"
  "n\022\023\n\013waypoint_id\030\001 \001(\t\0220\n\023waypoint_tform"
  "_body\030\002 \001(\0132\023.bosdyn.api.SE3Pose\022-\n\ttime"
  "stamp\030\003 \001(\0132\032.google.protobuf.TimestampB"
  "\nB\010NavProtob\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto_deps[3] = {
  &::descriptor_table_bosdyn_2fapi_2fgeometry_2eproto,
  &::descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fmap_2eproto,
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto_sccs[2] = {
  &scc_info_Localization_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto.base,
  &scc_info_Route_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto = {
  false, false, descriptor_table_protodef_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto, "bosdyn/api/graph_nav/nav.proto", 379,
  &descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto_once, descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto_sccs, descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto_deps, 2, 3,
  schemas, file_default_instances, TableStruct_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto::offsets,
  file_level_metadata_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto, 2, file_level_enum_descriptors_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto, file_level_service_descriptors_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto)), true);
namespace bosdyn {
namespace api {
namespace graph_nav {

// ===================================================================

void Route::InitAsDefaultInstance() {
}
class Route::_Internal {
 public:
};

void Route::clear_edge_id() {
  edge_id_.Clear();
}
Route::Route(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  waypoint_id_(arena),
  edge_id_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:bosdyn.api.graph_nav.Route)
}
Route::Route(const Route& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      waypoint_id_(from.waypoint_id_),
      edge_id_(from.edge_id_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:bosdyn.api.graph_nav.Route)
}

void Route::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Route_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto.base);
}

Route::~Route() {
  // @@protoc_insertion_point(destructor:bosdyn.api.graph_nav.Route)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Route::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Route::ArenaDtor(void* object) {
  Route* _this = reinterpret_cast< Route* >(object);
  (void)_this;
}
void Route::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Route::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Route& Route::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Route_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto.base);
  return *internal_default_instance();
}


void Route::Clear() {
// @@protoc_insertion_point(message_clear_start:bosdyn.api.graph_nav.Route)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  waypoint_id_.Clear();
  edge_id_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Route::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated string waypoint_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_waypoint_id();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "bosdyn.api.graph_nav.Route.waypoint_id"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .bosdyn.api.graph_nav.Edge.Id edge_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_edge_id(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* Route::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:bosdyn.api.graph_nav.Route)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string waypoint_id = 2;
  for (int i = 0, n = this->_internal_waypoint_id_size(); i < n; i++) {
    const auto& s = this->_internal_waypoint_id(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "bosdyn.api.graph_nav.Route.waypoint_id");
    target = stream->WriteString(2, s, target);
  }

  // repeated .bosdyn.api.graph_nav.Edge.Id edge_id = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_edge_id_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_edge_id(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bosdyn.api.graph_nav.Route)
  return target;
}

size_t Route::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:bosdyn.api.graph_nav.Route)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string waypoint_id = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(waypoint_id_.size());
  for (int i = 0, n = waypoint_id_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      waypoint_id_.Get(i));
  }

  // repeated .bosdyn.api.graph_nav.Edge.Id edge_id = 3;
  total_size += 1UL * this->_internal_edge_id_size();
  for (const auto& msg : this->edge_id_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Route::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:bosdyn.api.graph_nav.Route)
  GOOGLE_DCHECK_NE(&from, this);
  const Route* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Route>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:bosdyn.api.graph_nav.Route)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:bosdyn.api.graph_nav.Route)
    MergeFrom(*source);
  }
}

void Route::MergeFrom(const Route& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:bosdyn.api.graph_nav.Route)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  waypoint_id_.MergeFrom(from.waypoint_id_);
  edge_id_.MergeFrom(from.edge_id_);
}

void Route::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:bosdyn.api.graph_nav.Route)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Route::CopyFrom(const Route& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:bosdyn.api.graph_nav.Route)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Route::IsInitialized() const {
  return true;
}

void Route::InternalSwap(Route* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  waypoint_id_.InternalSwap(&other->waypoint_id_);
  edge_id_.InternalSwap(&other->edge_id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Route::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Localization::InitAsDefaultInstance() {
  ::bosdyn::api::graph_nav::_Localization_default_instance_._instance.get_mutable()->waypoint_tform_body_ = const_cast< ::bosdyn::api::SE3Pose*>(
      ::bosdyn::api::SE3Pose::internal_default_instance());
  ::bosdyn::api::graph_nav::_Localization_default_instance_._instance.get_mutable()->timestamp_ = const_cast< PROTOBUF_NAMESPACE_ID::Timestamp*>(
      PROTOBUF_NAMESPACE_ID::Timestamp::internal_default_instance());
}
class Localization::_Internal {
 public:
  static const ::bosdyn::api::SE3Pose& waypoint_tform_body(const Localization* msg);
  static const PROTOBUF_NAMESPACE_ID::Timestamp& timestamp(const Localization* msg);
};

const ::bosdyn::api::SE3Pose&
Localization::_Internal::waypoint_tform_body(const Localization* msg) {
  return *msg->waypoint_tform_body_;
}
const PROTOBUF_NAMESPACE_ID::Timestamp&
Localization::_Internal::timestamp(const Localization* msg) {
  return *msg->timestamp_;
}
void Localization::clear_waypoint_tform_body() {
  if (GetArena() == nullptr && waypoint_tform_body_ != nullptr) {
    delete waypoint_tform_body_;
  }
  waypoint_tform_body_ = nullptr;
}
void Localization::clear_timestamp() {
  if (GetArena() == nullptr && timestamp_ != nullptr) {
    delete timestamp_;
  }
  timestamp_ = nullptr;
}
Localization::Localization(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:bosdyn.api.graph_nav.Localization)
}
Localization::Localization(const Localization& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  waypoint_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_waypoint_id().empty()) {
    waypoint_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_waypoint_id(),
      GetArena());
  }
  if (from._internal_has_waypoint_tform_body()) {
    waypoint_tform_body_ = new ::bosdyn::api::SE3Pose(*from.waypoint_tform_body_);
  } else {
    waypoint_tform_body_ = nullptr;
  }
  if (from._internal_has_timestamp()) {
    timestamp_ = new PROTOBUF_NAMESPACE_ID::Timestamp(*from.timestamp_);
  } else {
    timestamp_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:bosdyn.api.graph_nav.Localization)
}

void Localization::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Localization_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto.base);
  waypoint_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&waypoint_tform_body_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&timestamp_) -
      reinterpret_cast<char*>(&waypoint_tform_body_)) + sizeof(timestamp_));
}

Localization::~Localization() {
  // @@protoc_insertion_point(destructor:bosdyn.api.graph_nav.Localization)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Localization::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  waypoint_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete waypoint_tform_body_;
  if (this != internal_default_instance()) delete timestamp_;
}

void Localization::ArenaDtor(void* object) {
  Localization* _this = reinterpret_cast< Localization* >(object);
  (void)_this;
}
void Localization::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Localization::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Localization& Localization::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Localization_bosdyn_2fapi_2fgraph_5fnav_2fnav_2eproto.base);
  return *internal_default_instance();
}


void Localization::Clear() {
// @@protoc_insertion_point(message_clear_start:bosdyn.api.graph_nav.Localization)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  waypoint_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  if (GetArena() == nullptr && waypoint_tform_body_ != nullptr) {
    delete waypoint_tform_body_;
  }
  waypoint_tform_body_ = nullptr;
  if (GetArena() == nullptr && timestamp_ != nullptr) {
    delete timestamp_;
  }
  timestamp_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Localization::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string waypoint_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_waypoint_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "bosdyn.api.graph_nav.Localization.waypoint_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .bosdyn.api.SE3Pose waypoint_tform_body = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_waypoint_tform_body(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp timestamp = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_timestamp(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Localization::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:bosdyn.api.graph_nav.Localization)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string waypoint_id = 1;
  if (this->waypoint_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_waypoint_id().data(), static_cast<int>(this->_internal_waypoint_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "bosdyn.api.graph_nav.Localization.waypoint_id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_waypoint_id(), target);
  }

  // .bosdyn.api.SE3Pose waypoint_tform_body = 2;
  if (this->has_waypoint_tform_body()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::waypoint_tform_body(this), target, stream);
  }

  // .google.protobuf.Timestamp timestamp = 3;
  if (this->has_timestamp()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::timestamp(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bosdyn.api.graph_nav.Localization)
  return target;
}

size_t Localization::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:bosdyn.api.graph_nav.Localization)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string waypoint_id = 1;
  if (this->waypoint_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_waypoint_id());
  }

  // .bosdyn.api.SE3Pose waypoint_tform_body = 2;
  if (this->has_waypoint_tform_body()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *waypoint_tform_body_);
  }

  // .google.protobuf.Timestamp timestamp = 3;
  if (this->has_timestamp()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *timestamp_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Localization::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:bosdyn.api.graph_nav.Localization)
  GOOGLE_DCHECK_NE(&from, this);
  const Localization* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Localization>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:bosdyn.api.graph_nav.Localization)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:bosdyn.api.graph_nav.Localization)
    MergeFrom(*source);
  }
}

void Localization::MergeFrom(const Localization& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:bosdyn.api.graph_nav.Localization)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.waypoint_id().size() > 0) {
    _internal_set_waypoint_id(from._internal_waypoint_id());
  }
  if (from.has_waypoint_tform_body()) {
    _internal_mutable_waypoint_tform_body()->::bosdyn::api::SE3Pose::MergeFrom(from._internal_waypoint_tform_body());
  }
  if (from.has_timestamp()) {
    _internal_mutable_timestamp()->PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_timestamp());
  }
}

void Localization::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:bosdyn.api.graph_nav.Localization)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Localization::CopyFrom(const Localization& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:bosdyn.api.graph_nav.Localization)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Localization::IsInitialized() const {
  return true;
}

void Localization::InternalSwap(Localization* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  waypoint_id_.Swap(&other->waypoint_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Localization, timestamp_)
      + sizeof(Localization::timestamp_)
      - PROTOBUF_FIELD_OFFSET(Localization, waypoint_tform_body_)>(
          reinterpret_cast<char*>(&waypoint_tform_body_),
          reinterpret_cast<char*>(&other->waypoint_tform_body_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Localization::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace graph_nav
}  // namespace api
}  // namespace bosdyn
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::bosdyn::api::graph_nav::Route* Arena::CreateMaybeMessage< ::bosdyn::api::graph_nav::Route >(Arena* arena) {
  return Arena::CreateMessageInternal< ::bosdyn::api::graph_nav::Route >(arena);
}
template<> PROTOBUF_NOINLINE ::bosdyn::api::graph_nav::Localization* Arena::CreateMaybeMessage< ::bosdyn::api::graph_nav::Localization >(Arena* arena) {
  return Arena::CreateMessageInternal< ::bosdyn::api::graph_nav::Localization >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
