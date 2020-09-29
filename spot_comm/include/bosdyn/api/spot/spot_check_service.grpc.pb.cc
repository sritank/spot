// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: bosdyn/api/spot/spot_check_service.proto

#include "bosdyn/api/spot/spot_check_service.pb.h"
#include "bosdyn/api/spot/spot_check_service.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace bosdyn {
namespace api {
namespace spot {

static const char* SpotCheckService_method_names[] = {
  "/bosdyn.api.spot.SpotCheckService/SpotCheckCommand",
  "/bosdyn.api.spot.SpotCheckService/SpotCheckFeedback",
  "/bosdyn.api.spot.SpotCheckService/CameraCalibrationCommand",
  "/bosdyn.api.spot.SpotCheckService/CameraCalibrationFeedback",
};

std::unique_ptr< SpotCheckService::Stub> SpotCheckService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SpotCheckService::Stub> stub(new SpotCheckService::Stub(channel));
  return stub;
}

SpotCheckService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SpotCheckCommand_(SpotCheckService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SpotCheckFeedback_(SpotCheckService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CameraCalibrationCommand_(SpotCheckService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CameraCalibrationFeedback_(SpotCheckService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SpotCheckService::Stub::SpotCheckCommand(::grpc::ClientContext* context, const ::bosdyn::api::spot::SpotCheckCommandRequest& request, ::bosdyn::api::spot::SpotCheckCommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SpotCheckCommand_, context, request, response);
}

void SpotCheckService::Stub::experimental_async::SpotCheckCommand(::grpc::ClientContext* context, const ::bosdyn::api::spot::SpotCheckCommandRequest* request, ::bosdyn::api::spot::SpotCheckCommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SpotCheckCommand_, context, request, response, std::move(f));
}

void SpotCheckService::Stub::experimental_async::SpotCheckCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::spot::SpotCheckCommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SpotCheckCommand_, context, request, response, std::move(f));
}

void SpotCheckService::Stub::experimental_async::SpotCheckCommand(::grpc::ClientContext* context, const ::bosdyn::api::spot::SpotCheckCommandRequest* request, ::bosdyn::api::spot::SpotCheckCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SpotCheckCommand_, context, request, response, reactor);
}

void SpotCheckService::Stub::experimental_async::SpotCheckCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::spot::SpotCheckCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SpotCheckCommand_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::spot::SpotCheckCommandResponse>* SpotCheckService::Stub::AsyncSpotCheckCommandRaw(::grpc::ClientContext* context, const ::bosdyn::api::spot::SpotCheckCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::spot::SpotCheckCommandResponse>::Create(channel_.get(), cq, rpcmethod_SpotCheckCommand_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::spot::SpotCheckCommandResponse>* SpotCheckService::Stub::PrepareAsyncSpotCheckCommandRaw(::grpc::ClientContext* context, const ::bosdyn::api::spot::SpotCheckCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::spot::SpotCheckCommandResponse>::Create(channel_.get(), cq, rpcmethod_SpotCheckCommand_, context, request, false);
}

::grpc::Status SpotCheckService::Stub::SpotCheckFeedback(::grpc::ClientContext* context, const ::bosdyn::api::spot::SpotCheckFeedbackRequest& request, ::bosdyn::api::spot::SpotCheckFeedbackResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SpotCheckFeedback_, context, request, response);
}

void SpotCheckService::Stub::experimental_async::SpotCheckFeedback(::grpc::ClientContext* context, const ::bosdyn::api::spot::SpotCheckFeedbackRequest* request, ::bosdyn::api::spot::SpotCheckFeedbackResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SpotCheckFeedback_, context, request, response, std::move(f));
}

void SpotCheckService::Stub::experimental_async::SpotCheckFeedback(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::spot::SpotCheckFeedbackResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SpotCheckFeedback_, context, request, response, std::move(f));
}

void SpotCheckService::Stub::experimental_async::SpotCheckFeedback(::grpc::ClientContext* context, const ::bosdyn::api::spot::SpotCheckFeedbackRequest* request, ::bosdyn::api::spot::SpotCheckFeedbackResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SpotCheckFeedback_, context, request, response, reactor);
}

void SpotCheckService::Stub::experimental_async::SpotCheckFeedback(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::spot::SpotCheckFeedbackResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SpotCheckFeedback_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::spot::SpotCheckFeedbackResponse>* SpotCheckService::Stub::AsyncSpotCheckFeedbackRaw(::grpc::ClientContext* context, const ::bosdyn::api::spot::SpotCheckFeedbackRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::spot::SpotCheckFeedbackResponse>::Create(channel_.get(), cq, rpcmethod_SpotCheckFeedback_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::spot::SpotCheckFeedbackResponse>* SpotCheckService::Stub::PrepareAsyncSpotCheckFeedbackRaw(::grpc::ClientContext* context, const ::bosdyn::api::spot::SpotCheckFeedbackRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::spot::SpotCheckFeedbackResponse>::Create(channel_.get(), cq, rpcmethod_SpotCheckFeedback_, context, request, false);
}

::grpc::Status SpotCheckService::Stub::CameraCalibrationCommand(::grpc::ClientContext* context, const ::bosdyn::api::spot::CameraCalibrationCommandRequest& request, ::bosdyn::api::spot::CameraCalibrationCommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CameraCalibrationCommand_, context, request, response);
}

void SpotCheckService::Stub::experimental_async::CameraCalibrationCommand(::grpc::ClientContext* context, const ::bosdyn::api::spot::CameraCalibrationCommandRequest* request, ::bosdyn::api::spot::CameraCalibrationCommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CameraCalibrationCommand_, context, request, response, std::move(f));
}

void SpotCheckService::Stub::experimental_async::CameraCalibrationCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::spot::CameraCalibrationCommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CameraCalibrationCommand_, context, request, response, std::move(f));
}

void SpotCheckService::Stub::experimental_async::CameraCalibrationCommand(::grpc::ClientContext* context, const ::bosdyn::api::spot::CameraCalibrationCommandRequest* request, ::bosdyn::api::spot::CameraCalibrationCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CameraCalibrationCommand_, context, request, response, reactor);
}

void SpotCheckService::Stub::experimental_async::CameraCalibrationCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::spot::CameraCalibrationCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CameraCalibrationCommand_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::spot::CameraCalibrationCommandResponse>* SpotCheckService::Stub::AsyncCameraCalibrationCommandRaw(::grpc::ClientContext* context, const ::bosdyn::api::spot::CameraCalibrationCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::spot::CameraCalibrationCommandResponse>::Create(channel_.get(), cq, rpcmethod_CameraCalibrationCommand_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::spot::CameraCalibrationCommandResponse>* SpotCheckService::Stub::PrepareAsyncCameraCalibrationCommandRaw(::grpc::ClientContext* context, const ::bosdyn::api::spot::CameraCalibrationCommandRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::spot::CameraCalibrationCommandResponse>::Create(channel_.get(), cq, rpcmethod_CameraCalibrationCommand_, context, request, false);
}

::grpc::Status SpotCheckService::Stub::CameraCalibrationFeedback(::grpc::ClientContext* context, const ::bosdyn::api::spot::CameraCalibrationFeedbackRequest& request, ::bosdyn::api::spot::CameraCalibrationFeedbackResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CameraCalibrationFeedback_, context, request, response);
}

void SpotCheckService::Stub::experimental_async::CameraCalibrationFeedback(::grpc::ClientContext* context, const ::bosdyn::api::spot::CameraCalibrationFeedbackRequest* request, ::bosdyn::api::spot::CameraCalibrationFeedbackResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CameraCalibrationFeedback_, context, request, response, std::move(f));
}

void SpotCheckService::Stub::experimental_async::CameraCalibrationFeedback(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::spot::CameraCalibrationFeedbackResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CameraCalibrationFeedback_, context, request, response, std::move(f));
}

void SpotCheckService::Stub::experimental_async::CameraCalibrationFeedback(::grpc::ClientContext* context, const ::bosdyn::api::spot::CameraCalibrationFeedbackRequest* request, ::bosdyn::api::spot::CameraCalibrationFeedbackResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CameraCalibrationFeedback_, context, request, response, reactor);
}

void SpotCheckService::Stub::experimental_async::CameraCalibrationFeedback(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::spot::CameraCalibrationFeedbackResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CameraCalibrationFeedback_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::spot::CameraCalibrationFeedbackResponse>* SpotCheckService::Stub::AsyncCameraCalibrationFeedbackRaw(::grpc::ClientContext* context, const ::bosdyn::api::spot::CameraCalibrationFeedbackRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::spot::CameraCalibrationFeedbackResponse>::Create(channel_.get(), cq, rpcmethod_CameraCalibrationFeedback_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::bosdyn::api::spot::CameraCalibrationFeedbackResponse>* SpotCheckService::Stub::PrepareAsyncCameraCalibrationFeedbackRaw(::grpc::ClientContext* context, const ::bosdyn::api::spot::CameraCalibrationFeedbackRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::bosdyn::api::spot::CameraCalibrationFeedbackResponse>::Create(channel_.get(), cq, rpcmethod_CameraCalibrationFeedback_, context, request, false);
}

SpotCheckService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SpotCheckService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SpotCheckService::Service, ::bosdyn::api::spot::SpotCheckCommandRequest, ::bosdyn::api::spot::SpotCheckCommandResponse>(
          [](SpotCheckService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::bosdyn::api::spot::SpotCheckCommandRequest* req,
             ::bosdyn::api::spot::SpotCheckCommandResponse* resp) {
               return service->SpotCheckCommand(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SpotCheckService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SpotCheckService::Service, ::bosdyn::api::spot::SpotCheckFeedbackRequest, ::bosdyn::api::spot::SpotCheckFeedbackResponse>(
          [](SpotCheckService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::bosdyn::api::spot::SpotCheckFeedbackRequest* req,
             ::bosdyn::api::spot::SpotCheckFeedbackResponse* resp) {
               return service->SpotCheckFeedback(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SpotCheckService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SpotCheckService::Service, ::bosdyn::api::spot::CameraCalibrationCommandRequest, ::bosdyn::api::spot::CameraCalibrationCommandResponse>(
          [](SpotCheckService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::bosdyn::api::spot::CameraCalibrationCommandRequest* req,
             ::bosdyn::api::spot::CameraCalibrationCommandResponse* resp) {
               return service->CameraCalibrationCommand(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SpotCheckService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SpotCheckService::Service, ::bosdyn::api::spot::CameraCalibrationFeedbackRequest, ::bosdyn::api::spot::CameraCalibrationFeedbackResponse>(
          [](SpotCheckService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::bosdyn::api::spot::CameraCalibrationFeedbackRequest* req,
             ::bosdyn::api::spot::CameraCalibrationFeedbackResponse* resp) {
               return service->CameraCalibrationFeedback(ctx, req, resp);
             }, this)));
}

SpotCheckService::Service::~Service() {
}

::grpc::Status SpotCheckService::Service::SpotCheckCommand(::grpc::ServerContext* context, const ::bosdyn::api::spot::SpotCheckCommandRequest* request, ::bosdyn::api::spot::SpotCheckCommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SpotCheckService::Service::SpotCheckFeedback(::grpc::ServerContext* context, const ::bosdyn::api::spot::SpotCheckFeedbackRequest* request, ::bosdyn::api::spot::SpotCheckFeedbackResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SpotCheckService::Service::CameraCalibrationCommand(::grpc::ServerContext* context, const ::bosdyn::api::spot::CameraCalibrationCommandRequest* request, ::bosdyn::api::spot::CameraCalibrationCommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SpotCheckService::Service::CameraCalibrationFeedback(::grpc::ServerContext* context, const ::bosdyn::api::spot::CameraCalibrationFeedbackRequest* request, ::bosdyn::api::spot::CameraCalibrationFeedbackResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace bosdyn
}  // namespace api
}  // namespace spot

