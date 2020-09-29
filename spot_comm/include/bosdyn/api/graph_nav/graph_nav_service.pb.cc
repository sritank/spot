// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bosdyn/api/graph_nav/graph_nav_service.proto

#include "bosdyn/api/graph_nav/graph_nav_service.pb.h"

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
namespace bosdyn {
namespace api {
namespace graph_nav {
}  // namespace graph_nav
}  // namespace api
}  // namespace bosdyn
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n,bosdyn/api/graph_nav/graph_nav_service"
  ".proto\022\024bosdyn.api.graph_nav\032$bosdyn/api"
  "/graph_nav/graph_nav.proto2\236\013\n\017GraphNavS"
  "ervice\022p\n\017SetLocalization\022,.bosdyn.api.g"
  "raph_nav.SetLocalizationRequest\032-.bosdyn"
  ".api.graph_nav.SetLocalizationResponse\"\000"
  "\022j\n\rNavigateRoute\022*.bosdyn.api.graph_nav"
  ".NavigateRouteRequest\032+.bosdyn.api.graph"
  "_nav.NavigateRouteResponse\"\000\022a\n\nNavigate"
  "To\022\'.bosdyn.api.graph_nav.NavigateToRequ"
  "est\032(.bosdyn.api.graph_nav.NavigateToRes"
  "ponse\"\000\022y\n\022NavigationFeedback\022/.bosdyn.a"
  "pi.graph_nav.NavigationFeedbackRequest\0320"
  ".bosdyn.api.graph_nav.NavigationFeedback"
  "Response\"\000\022\177\n\024GetLocalizationState\0221.bos"
  "dyn.api.graph_nav.GetLocalizationStateRe"
  "quest\0322.bosdyn.api.graph_nav.GetLocaliza"
  "tionStateResponse\"\000\022a\n\nClearGraph\022\'.bosd"
  "yn.api.graph_nav.ClearGraphRequest\032(.bos"
  "dyn.api.graph_nav.ClearGraphResponse\"\000\022j"
  "\n\rDownloadGraph\022*.bosdyn.api.graph_nav.D"
  "ownloadGraphRequest\032+.bosdyn.api.graph_n"
  "av.DownloadGraphResponse\"\000\022d\n\013UploadGrap"
  "h\022(.bosdyn.api.graph_nav.UploadGraphRequ"
  "est\032).bosdyn.api.graph_nav.UploadGraphRe"
  "sponse\"\000\022\207\001\n\026UploadWaypointSnapshot\0223.bo"
  "sdyn.api.graph_nav.UploadWaypointSnapsho"
  "tRequest\0324.bosdyn.api.graph_nav.UploadWa"
  "ypointSnapshotResponse\"\000(\001\022{\n\022UploadEdge"
  "Snapshot\022/.bosdyn.api.graph_nav.UploadEd"
  "geSnapshotRequest\0320.bosdyn.api.graph_nav"
  ".UploadEdgeSnapshotResponse\"\000(\001\022\215\001\n\030Down"
  "loadWaypointSnapshot\0225.bosdyn.api.graph_"
  "nav.DownloadWaypointSnapshotRequest\0326.bo"
  "sdyn.api.graph_nav.DownloadWaypointSnaps"
  "hotResponse\"\0000\001\022\201\001\n\024DownloadEdgeSnapshot"
  "\0221.bosdyn.api.graph_nav.DownloadEdgeSnap"
  "shotRequest\0322.bosdyn.api.graph_nav.Downl"
  "oadEdgeSnapshotResponse\"\0000\001B\026B\024GraphNavS"
  "erviceProtob\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto_deps[1] = {
  &::descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto = {
  false, false, descriptor_table_protodef_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto, "bosdyn/api/graph_nav/graph_nav_service.proto", 1579,
  &descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto_once, descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto_sccs, descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto_deps, 0, 1,
  schemas, file_default_instances, TableStruct_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto::offsets,
  file_level_metadata_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto, 0, file_level_enum_descriptors_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto, file_level_service_descriptors_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_bosdyn_2fapi_2fgraph_5fnav_2fgraph_5fnav_5fservice_2eproto)), true);
namespace bosdyn {
namespace api {
namespace graph_nav {

// @@protoc_insertion_point(namespace_scope)
}  // namespace graph_nav
}  // namespace api
}  // namespace bosdyn
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
