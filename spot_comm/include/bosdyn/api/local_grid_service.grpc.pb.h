// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: bosdyn/api/local_grid_service.proto
// Original file comments:
// Copyright (c) 2020 Boston Dynamics, Inc.  All rights reserved.
//
// Downloading, reproducing, distributing or otherwise using the SDK Software
// is subject to the terms and conditions of the Boston Dynamics Software
// Development Kit License (20191101-BDSDK-SL).
//
#ifndef GRPC_bosdyn_2fapi_2flocal_5fgrid_5fservice_2eproto__INCLUDED
#define GRPC_bosdyn_2fapi_2flocal_5fgrid_5fservice_2eproto__INCLUDED

#include "bosdyn/api/local_grid_service.pb.h"

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

// The map service provides access multiple kinds of cell-based map data.
// It supports querying for the list of available types of local grids provided by the service,
// and supports requesting a set of the latest local grids by map type name.
class LocalGridService final {
 public:
  static constexpr char const* service_full_name() {
    return "bosdyn.api.LocalGridService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Obtain the list of available map types.
    // The name field keys access to individual local grids when calling GetLocalGrids.
    virtual ::grpc::Status GetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest& request, ::bosdyn::api::GetLocalGridTypesResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLocalGridTypesResponse>> AsyncGetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLocalGridTypesResponse>>(AsyncGetLocalGridTypesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLocalGridTypesResponse>> PrepareAsyncGetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLocalGridTypesResponse>>(PrepareAsyncGetLocalGridTypesRaw(context, request, cq));
    }
    // Request a set of local grids by type name.
    virtual ::grpc::Status GetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest& request, ::bosdyn::api::GetLocalGridsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLocalGridsResponse>> AsyncGetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLocalGridsResponse>>(AsyncGetLocalGridsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLocalGridsResponse>> PrepareAsyncGetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLocalGridsResponse>>(PrepareAsyncGetLocalGridsRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // Obtain the list of available map types.
      // The name field keys access to individual local grids when calling GetLocalGrids.
      virtual void GetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest* request, ::bosdyn::api::GetLocalGridTypesResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetLocalGridTypes(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridTypesResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest* request, ::bosdyn::api::GetLocalGridTypesResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest* request, ::bosdyn::api::GetLocalGridTypesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetLocalGridTypes(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridTypesResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetLocalGridTypes(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridTypesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      // Request a set of local grids by type name.
      virtual void GetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest* request, ::bosdyn::api::GetLocalGridsResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetLocalGrids(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridsResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest* request, ::bosdyn::api::GetLocalGridsResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest* request, ::bosdyn::api::GetLocalGridsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetLocalGrids(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridsResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetLocalGrids(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
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
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLocalGridTypesResponse>* AsyncGetLocalGridTypesRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLocalGridTypesResponse>* PrepareAsyncGetLocalGridTypesRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLocalGridsResponse>* AsyncGetLocalGridsRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bosdyn::api::GetLocalGridsResponse>* PrepareAsyncGetLocalGridsRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest& request, ::bosdyn::api::GetLocalGridTypesResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridTypesResponse>> AsyncGetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridTypesResponse>>(AsyncGetLocalGridTypesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridTypesResponse>> PrepareAsyncGetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridTypesResponse>>(PrepareAsyncGetLocalGridTypesRaw(context, request, cq));
    }
    ::grpc::Status GetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest& request, ::bosdyn::api::GetLocalGridsResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridsResponse>> AsyncGetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridsResponse>>(AsyncGetLocalGridsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridsResponse>> PrepareAsyncGetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridsResponse>>(PrepareAsyncGetLocalGridsRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest* request, ::bosdyn::api::GetLocalGridTypesResponse* response, std::function<void(::grpc::Status)>) override;
      void GetLocalGridTypes(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridTypesResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest* request, ::bosdyn::api::GetLocalGridTypesResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetLocalGridTypes(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest* request, ::bosdyn::api::GetLocalGridTypesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetLocalGridTypes(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridTypesResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetLocalGridTypes(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridTypesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void GetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest* request, ::bosdyn::api::GetLocalGridsResponse* response, std::function<void(::grpc::Status)>) override;
      void GetLocalGrids(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridsResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest* request, ::bosdyn::api::GetLocalGridsResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetLocalGrids(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest* request, ::bosdyn::api::GetLocalGridsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetLocalGrids(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridsResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetLocalGrids(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::bosdyn::api::GetLocalGridsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridTypesResponse>* AsyncGetLocalGridTypesRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridTypesResponse>* PrepareAsyncGetLocalGridTypesRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridTypesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridsResponse>* AsyncGetLocalGridsRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::bosdyn::api::GetLocalGridsResponse>* PrepareAsyncGetLocalGridsRaw(::grpc::ClientContext* context, const ::bosdyn::api::GetLocalGridsRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetLocalGridTypes_;
    const ::grpc::internal::RpcMethod rpcmethod_GetLocalGrids_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Obtain the list of available map types.
    // The name field keys access to individual local grids when calling GetLocalGrids.
    virtual ::grpc::Status GetLocalGridTypes(::grpc::ServerContext* context, const ::bosdyn::api::GetLocalGridTypesRequest* request, ::bosdyn::api::GetLocalGridTypesResponse* response);
    // Request a set of local grids by type name.
    virtual ::grpc::Status GetLocalGrids(::grpc::ServerContext* context, const ::bosdyn::api::GetLocalGridsRequest* request, ::bosdyn::api::GetLocalGridsResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetLocalGridTypes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetLocalGridTypes() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetLocalGridTypes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLocalGridTypes(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLocalGridTypesRequest* /*request*/, ::bosdyn::api::GetLocalGridTypesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetLocalGridTypes(::grpc::ServerContext* context, ::bosdyn::api::GetLocalGridTypesRequest* request, ::grpc::ServerAsyncResponseWriter< ::bosdyn::api::GetLocalGridTypesResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetLocalGrids : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetLocalGrids() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetLocalGrids() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLocalGrids(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLocalGridsRequest* /*request*/, ::bosdyn::api::GetLocalGridsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetLocalGrids(::grpc::ServerContext* context, ::bosdyn::api::GetLocalGridsRequest* request, ::grpc::ServerAsyncResponseWriter< ::bosdyn::api::GetLocalGridsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetLocalGridTypes<WithAsyncMethod_GetLocalGrids<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetLocalGridTypes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetLocalGridTypes() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::bosdyn::api::GetLocalGridTypesRequest, ::bosdyn::api::GetLocalGridTypesResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::bosdyn::api::GetLocalGridTypesRequest* request, ::bosdyn::api::GetLocalGridTypesResponse* response) { return this->GetLocalGridTypes(context, request, response); }));}
    void SetMessageAllocatorFor_GetLocalGridTypes(
        ::grpc::experimental::MessageAllocator< ::bosdyn::api::GetLocalGridTypesRequest, ::bosdyn::api::GetLocalGridTypesResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::bosdyn::api::GetLocalGridTypesRequest, ::bosdyn::api::GetLocalGridTypesResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetLocalGridTypes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLocalGridTypes(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLocalGridTypesRequest* /*request*/, ::bosdyn::api::GetLocalGridTypesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetLocalGridTypes(
      ::grpc::CallbackServerContext* /*context*/, const ::bosdyn::api::GetLocalGridTypesRequest* /*request*/, ::bosdyn::api::GetLocalGridTypesResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetLocalGridTypes(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::bosdyn::api::GetLocalGridTypesRequest* /*request*/, ::bosdyn::api::GetLocalGridTypesResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetLocalGrids : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetLocalGrids() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::bosdyn::api::GetLocalGridsRequest, ::bosdyn::api::GetLocalGridsResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::bosdyn::api::GetLocalGridsRequest* request, ::bosdyn::api::GetLocalGridsResponse* response) { return this->GetLocalGrids(context, request, response); }));}
    void SetMessageAllocatorFor_GetLocalGrids(
        ::grpc::experimental::MessageAllocator< ::bosdyn::api::GetLocalGridsRequest, ::bosdyn::api::GetLocalGridsResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::bosdyn::api::GetLocalGridsRequest, ::bosdyn::api::GetLocalGridsResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetLocalGrids() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLocalGrids(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLocalGridsRequest* /*request*/, ::bosdyn::api::GetLocalGridsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetLocalGrids(
      ::grpc::CallbackServerContext* /*context*/, const ::bosdyn::api::GetLocalGridsRequest* /*request*/, ::bosdyn::api::GetLocalGridsResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetLocalGrids(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::bosdyn::api::GetLocalGridsRequest* /*request*/, ::bosdyn::api::GetLocalGridsResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetLocalGridTypes<ExperimentalWithCallbackMethod_GetLocalGrids<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_GetLocalGridTypes<ExperimentalWithCallbackMethod_GetLocalGrids<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetLocalGridTypes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetLocalGridTypes() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetLocalGridTypes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLocalGridTypes(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLocalGridTypesRequest* /*request*/, ::bosdyn::api::GetLocalGridTypesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetLocalGrids : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetLocalGrids() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetLocalGrids() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLocalGrids(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLocalGridsRequest* /*request*/, ::bosdyn::api::GetLocalGridsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetLocalGridTypes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetLocalGridTypes() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetLocalGridTypes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLocalGridTypes(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLocalGridTypesRequest* /*request*/, ::bosdyn::api::GetLocalGridTypesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetLocalGridTypes(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetLocalGrids : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetLocalGrids() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_GetLocalGrids() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLocalGrids(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLocalGridsRequest* /*request*/, ::bosdyn::api::GetLocalGridsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetLocalGrids(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetLocalGridTypes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetLocalGridTypes() {
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
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetLocalGridTypes(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetLocalGridTypes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLocalGridTypes(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLocalGridTypesRequest* /*request*/, ::bosdyn::api::GetLocalGridTypesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetLocalGridTypes(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetLocalGridTypes(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetLocalGrids : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetLocalGrids() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetLocalGrids(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetLocalGrids() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetLocalGrids(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLocalGridsRequest* /*request*/, ::bosdyn::api::GetLocalGridsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetLocalGrids(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetLocalGrids(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetLocalGridTypes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetLocalGridTypes() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::bosdyn::api::GetLocalGridTypesRequest, ::bosdyn::api::GetLocalGridTypesResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::bosdyn::api::GetLocalGridTypesRequest, ::bosdyn::api::GetLocalGridTypesResponse>* streamer) {
                       return this->StreamedGetLocalGridTypes(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetLocalGridTypes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetLocalGridTypes(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLocalGridTypesRequest* /*request*/, ::bosdyn::api::GetLocalGridTypesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetLocalGridTypes(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::bosdyn::api::GetLocalGridTypesRequest,::bosdyn::api::GetLocalGridTypesResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetLocalGrids : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetLocalGrids() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::bosdyn::api::GetLocalGridsRequest, ::bosdyn::api::GetLocalGridsResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::bosdyn::api::GetLocalGridsRequest, ::bosdyn::api::GetLocalGridsResponse>* streamer) {
                       return this->StreamedGetLocalGrids(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetLocalGrids() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetLocalGrids(::grpc::ServerContext* /*context*/, const ::bosdyn::api::GetLocalGridsRequest* /*request*/, ::bosdyn::api::GetLocalGridsResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetLocalGrids(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::bosdyn::api::GetLocalGridsRequest,::bosdyn::api::GetLocalGridsResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetLocalGridTypes<WithStreamedUnaryMethod_GetLocalGrids<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetLocalGridTypes<WithStreamedUnaryMethod_GetLocalGrids<Service > > StreamedService;
};

}  // namespace api
}  // namespace bosdyn


#endif  // GRPC_bosdyn_2fapi_2flocal_5fgrid_5fservice_2eproto__INCLUDED
