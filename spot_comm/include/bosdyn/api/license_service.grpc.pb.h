// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: bosdyn/api/license_service.proto
// Original file comments:
// Copyright (c) 2020 Boston Dynamics, Inc.  All rights reserved.
//
// Downloading, reproducing, distributing or otherwise using the SDK Software
// is subject to the terms and conditions of the Boston Dynamics Software
// Development Kit License (20191101-BDSDK-SL).
//
#ifndef GRPC_bosdyn_2fapi_2flicense_5fservice_2eproto__INCLUDED
#define GRPC_bosdyn_2fapi_2flicense_5fservice_2eproto__INCLUDED

#include "bosdyn/api/license_service.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace bosdyn {
namespace api {

// The LicenseService allows clients to query the currently installed license on robot.
class LicenseService final {
 public:
  static constexpr char const* service_full_name() {
    return "bosdyn.api.LicenseService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetLicenseInfo(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest& request, ::bosdyn::api::GetLicenseInfoResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLicenseInfoResponse>> AsyncGetLicenseInfo(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLicenseInfoResponse>>(AsyncGetLicenseInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLicenseInfoResponse>> PrepareAsyncGetLicenseInfo(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLicenseInfoResponse>>(PrepareAsyncGetLicenseInfoRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void GetLicenseInfo(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest* request, ::bosdyn::api::GetLicenseInfoResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetLicenseInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLicenseInfoResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetLicenseInfo(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest* request, ::bosdyn::api::GetLicenseInfoResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetLicenseInfo(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest* request, ::bosdyn::api::GetLicenseInfoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetLicenseInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLicenseInfoResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetLicenseInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLicenseInfoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLicenseInfoResponse>* AsyncGetLicenseInfoRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLicenseInfoResponse>* PrepareAsyncGetLicenseInfoRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetLicenseInfo(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest& request, ::bosdyn::api::GetLicenseInfoResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLicenseInfoResponse>> AsyncGetLicenseInfo(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLicenseInfoResponse>>(AsyncGetLicenseInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLicenseInfoResponse>> PrepareAsyncGetLicenseInfo(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLicenseInfoResponse>>(PrepareAsyncGetLicenseInfoRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetLicenseInfo(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest* request, ::bosdyn::api::GetLicenseInfoResponse* response, std::function<void(::grpc::Status)>) override;
      void GetLicenseInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLicenseInfoResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetLicenseInfo(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest* request, ::bosdyn::api::GetLicenseInfoResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetLicenseInfo(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest* request, ::bosdyn::api::GetLicenseInfoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetLicenseInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLicenseInfoResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetLicenseInfo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLicenseInfoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLicenseInfoResponse>* AsyncGetLicenseInfoRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLicenseInfoResponse>* PrepareAsyncGetLicenseInfoRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLicenseInfoRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetLicenseInfo_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetLicenseInfo(::grpc::ServerContext* context, const ::bosdyn::api::GetLicenseInfoRequest* request, ::bosdyn::api::GetLicenseInfoResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetLicenseInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetLicenseInfo() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetLicenseInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLicenseInfo(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLicenseInfoRequest* /*request*/, ::bosdyn::api::GetLicenseInfoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetLicenseInfo(::grpc::ServerContext* context, ::bosdyn::api::GetLicenseInfoRequest* request, ::grpc::ServerAsyncResponseWriter< ::bosdyn::api::GetLicenseInfoResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetLicenseInfo<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetLicenseInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetLicenseInfo() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::bosdyn::api::GetLicenseInfoRequest, ::bosdyn::api::GetLicenseInfoResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::bosdyn::api::GetLicenseInfoRequest* request, ::bosdyn::api::GetLicenseInfoResponse* response) { return this->GetLicenseInfo(context, request, response); }));}
    void SetMessageAllocatorFor_GetLicenseInfo(
        ::grpc::experimental::MessageAllocator< ::bosdyn::api::GetLicenseInfoRequest, ::bosdyn::api::GetLicenseInfoResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::bosdyn::api::GetLicenseInfoRequest, ::bosdyn::api::GetLicenseInfoResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetLicenseInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLicenseInfo(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLicenseInfoRequest* /*request*/, ::bosdyn::api::GetLicenseInfoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetLicenseInfo(
      ::grpc::CallbackServerContext* /*context*/, const ::bosdyn::api::GetLicenseInfoRequest* /*request*/, ::bosdyn::api::GetLicenseInfoResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetLicenseInfo(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::bosdyn::api::GetLicenseInfoRequest* /*request*/, ::bosdyn::api::GetLicenseInfoResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetLicenseInfo<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_GetLicenseInfo<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetLicenseInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetLicenseInfo() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetLicenseInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLicenseInfo(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLicenseInfoRequest* /*request*/, ::bosdyn::api::GetLicenseInfoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetLicenseInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetLicenseInfo() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetLicenseInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLicenseInfo(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLicenseInfoRequest* /*request*/, ::bosdyn::api::GetLicenseInfoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetLicenseInfo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetLicenseInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetLicenseInfo() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetLicenseInfo(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetLicenseInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLicenseInfo(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLicenseInfoRequest* /*request*/, ::bosdyn::api::GetLicenseInfoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetLicenseInfo(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetLicenseInfo(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetLicenseInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetLicenseInfo() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::bosdyn::api::GetLicenseInfoRequest, ::bosdyn::api::GetLicenseInfoResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::bosdyn::api::GetLicenseInfoRequest, ::bosdyn::api::GetLicenseInfoResponse>* streamer) {
                       return this->StreamedGetLicenseInfo(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetLicenseInfo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetLicenseInfo(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLicenseInfoRequest* /*request*/, ::bosdyn::api::GetLicenseInfoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetLicenseInfo(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::bosdyn::api::GetLicenseInfoRequest,::bosdyn::api::GetLicenseInfoResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetLicenseInfo<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetLicenseInfo<Service > StreamedService;
};

}  // namespace api
}  // namespace bosdyn


#endif  // GRPC_bosdyn_2fapi_2flicense_5fservice_2eproto__INCLUDED
