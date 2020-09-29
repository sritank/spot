// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bosdyn/api/parameter.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_bosdyn_2fapi_2fparameter_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_bosdyn_2fapi_2fparameter_2eproto

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
#include <google/protobuf/duration.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_bosdyn_2fapi_2fparameter_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_bosdyn_2fapi_2fparameter_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_bosdyn_2fapi_2fparameter_2eproto;
namespace bosdyn {
namespace api {
class Parameter;
class ParameterDefaultTypeInternal;
extern ParameterDefaultTypeInternal _Parameter_default_instance_;
}  // namespace api
}  // namespace bosdyn
PROTOBUF_NAMESPACE_OPEN
template<> ::bosdyn::api::Parameter* Arena::CreateMaybeMessage<::bosdyn::api::Parameter>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace bosdyn {
namespace api {

// ===================================================================

class Parameter PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:bosdyn.api.Parameter) */ {
 public:
  inline Parameter() : Parameter(nullptr) {}
  virtual ~Parameter();

  Parameter(const Parameter& from);
  Parameter(Parameter&& from) noexcept
    : Parameter() {
    *this = ::std::move(from);
  }

  inline Parameter& operator=(const Parameter& from) {
    CopyFrom(from);
    return *this;
  }
  inline Parameter& operator=(Parameter&& from) noexcept {
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
  static const Parameter& default_instance();

  enum ValuesCase {
    kIntValue = 3,
    kFloatValue = 4,
    kTimestamp = 5,
    kDuration = 6,
    kStringValue = 7,
    kBoolValue = 8,
    VALUES_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Parameter* internal_default_instance() {
    return reinterpret_cast<const Parameter*>(
               &_Parameter_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Parameter& a, Parameter& b) {
    a.Swap(&b);
  }
  inline void Swap(Parameter* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Parameter* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Parameter* New() const final {
    return CreateMaybeMessage<Parameter>(nullptr);
  }

  Parameter* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Parameter>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Parameter& from);
  void MergeFrom(const Parameter& from);
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
  void InternalSwap(Parameter* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "bosdyn.api.Parameter";
  }
  protected:
  explicit Parameter(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_bosdyn_2fapi_2fparameter_2eproto);
    return ::descriptor_table_bosdyn_2fapi_2fparameter_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLabelFieldNumber = 1,
    kUnitsFieldNumber = 2,
    kNotesFieldNumber = 9,
    kIntValueFieldNumber = 3,
    kFloatValueFieldNumber = 4,
    kTimestampFieldNumber = 5,
    kDurationFieldNumber = 6,
    kStringValueFieldNumber = 7,
    kBoolValueFieldNumber = 8,
  };
  // string label = 1;
  void clear_label();
  const std::string& label() const;
  void set_label(const std::string& value);
  void set_label(std::string&& value);
  void set_label(const char* value);
  void set_label(const char* value, size_t size);
  std::string* mutable_label();
  std::string* release_label();
  void set_allocated_label(std::string* label);
  private:
  const std::string& _internal_label() const;
  void _internal_set_label(const std::string& value);
  std::string* _internal_mutable_label();
  public:

  // string units = 2;
  void clear_units();
  const std::string& units() const;
  void set_units(const std::string& value);
  void set_units(std::string&& value);
  void set_units(const char* value);
  void set_units(const char* value, size_t size);
  std::string* mutable_units();
  std::string* release_units();
  void set_allocated_units(std::string* units);
  private:
  const std::string& _internal_units() const;
  void _internal_set_units(const std::string& value);
  std::string* _internal_mutable_units();
  public:

  // string notes = 9;
  void clear_notes();
  const std::string& notes() const;
  void set_notes(const std::string& value);
  void set_notes(std::string&& value);
  void set_notes(const char* value);
  void set_notes(const char* value, size_t size);
  std::string* mutable_notes();
  std::string* release_notes();
  void set_allocated_notes(std::string* notes);
  private:
  const std::string& _internal_notes() const;
  void _internal_set_notes(const std::string& value);
  std::string* _internal_mutable_notes();
  public:

  // int64 int_value = 3;
  private:
  bool _internal_has_int_value() const;
  public:
  void clear_int_value();
  ::PROTOBUF_NAMESPACE_ID::int64 int_value() const;
  void set_int_value(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_int_value() const;
  void _internal_set_int_value(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // double float_value = 4;
  private:
  bool _internal_has_float_value() const;
  public:
  void clear_float_value();
  double float_value() const;
  void set_float_value(double value);
  private:
  double _internal_float_value() const;
  void _internal_set_float_value(double value);
  public:

  // .google.protobuf.Timestamp timestamp = 5;
  bool has_timestamp() const;
  private:
  bool _internal_has_timestamp() const;
  public:
  void clear_timestamp();
  const PROTOBUF_NAMESPACE_ID::Timestamp& timestamp() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_timestamp();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_timestamp();
  void set_allocated_timestamp(PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_timestamp() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_timestamp();
  public:
  void unsafe_arena_set_allocated_timestamp(
      PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_timestamp();

  // .google.protobuf.Duration duration = 6;
  bool has_duration() const;
  private:
  bool _internal_has_duration() const;
  public:
  void clear_duration();
  const PROTOBUF_NAMESPACE_ID::Duration& duration() const;
  PROTOBUF_NAMESPACE_ID::Duration* release_duration();
  PROTOBUF_NAMESPACE_ID::Duration* mutable_duration();
  void set_allocated_duration(PROTOBUF_NAMESPACE_ID::Duration* duration);
  private:
  const PROTOBUF_NAMESPACE_ID::Duration& _internal_duration() const;
  PROTOBUF_NAMESPACE_ID::Duration* _internal_mutable_duration();
  public:
  void unsafe_arena_set_allocated_duration(
      PROTOBUF_NAMESPACE_ID::Duration* duration);
  PROTOBUF_NAMESPACE_ID::Duration* unsafe_arena_release_duration();

  // string string_value = 7;
  private:
  bool _internal_has_string_value() const;
  public:
  void clear_string_value();
  const std::string& string_value() const;
  void set_string_value(const std::string& value);
  void set_string_value(std::string&& value);
  void set_string_value(const char* value);
  void set_string_value(const char* value, size_t size);
  std::string* mutable_string_value();
  std::string* release_string_value();
  void set_allocated_string_value(std::string* string_value);
  private:
  const std::string& _internal_string_value() const;
  void _internal_set_string_value(const std::string& value);
  std::string* _internal_mutable_string_value();
  public:

  // bool bool_value = 8;
  private:
  bool _internal_has_bool_value() const;
  public:
  void clear_bool_value();
  bool bool_value() const;
  void set_bool_value(bool value);
  private:
  bool _internal_bool_value() const;
  void _internal_set_bool_value(bool value);
  public:

  void clear_values();
  ValuesCase values_case() const;
  // @@protoc_insertion_point(class_scope:bosdyn.api.Parameter)
 private:
  class _Internal;
  void set_has_int_value();
  void set_has_float_value();
  void set_has_timestamp();
  void set_has_duration();
  void set_has_string_value();
  void set_has_bool_value();

  inline bool has_values() const;
  inline void clear_has_values();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr label_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr units_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr notes_;
  union ValuesUnion {
    ValuesUnion() {}
    ::PROTOBUF_NAMESPACE_ID::int64 int_value_;
    double float_value_;
    PROTOBUF_NAMESPACE_ID::Timestamp* timestamp_;
    PROTOBUF_NAMESPACE_ID::Duration* duration_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr string_value_;
    bool bool_value_;
  } values_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_bosdyn_2fapi_2fparameter_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Parameter

// string label = 1;
inline void Parameter::clear_label() {
  label_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Parameter::label() const {
  // @@protoc_insertion_point(field_get:bosdyn.api.Parameter.label)
  return _internal_label();
}
inline void Parameter::set_label(const std::string& value) {
  _internal_set_label(value);
  // @@protoc_insertion_point(field_set:bosdyn.api.Parameter.label)
}
inline std::string* Parameter::mutable_label() {
  // @@protoc_insertion_point(field_mutable:bosdyn.api.Parameter.label)
  return _internal_mutable_label();
}
inline const std::string& Parameter::_internal_label() const {
  return label_.Get();
}
inline void Parameter::_internal_set_label(const std::string& value) {
  
  label_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Parameter::set_label(std::string&& value) {
  
  label_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:bosdyn.api.Parameter.label)
}
inline void Parameter::set_label(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  label_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:bosdyn.api.Parameter.label)
}
inline void Parameter::set_label(const char* value,
    size_t size) {
  
  label_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:bosdyn.api.Parameter.label)
}
inline std::string* Parameter::_internal_mutable_label() {
  
  return label_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Parameter::release_label() {
  // @@protoc_insertion_point(field_release:bosdyn.api.Parameter.label)
  return label_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Parameter::set_allocated_label(std::string* label) {
  if (label != nullptr) {
    
  } else {
    
  }
  label_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), label,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:bosdyn.api.Parameter.label)
}

// string units = 2;
inline void Parameter::clear_units() {
  units_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Parameter::units() const {
  // @@protoc_insertion_point(field_get:bosdyn.api.Parameter.units)
  return _internal_units();
}
inline void Parameter::set_units(const std::string& value) {
  _internal_set_units(value);
  // @@protoc_insertion_point(field_set:bosdyn.api.Parameter.units)
}
inline std::string* Parameter::mutable_units() {
  // @@protoc_insertion_point(field_mutable:bosdyn.api.Parameter.units)
  return _internal_mutable_units();
}
inline const std::string& Parameter::_internal_units() const {
  return units_.Get();
}
inline void Parameter::_internal_set_units(const std::string& value) {
  
  units_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Parameter::set_units(std::string&& value) {
  
  units_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:bosdyn.api.Parameter.units)
}
inline void Parameter::set_units(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  units_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:bosdyn.api.Parameter.units)
}
inline void Parameter::set_units(const char* value,
    size_t size) {
  
  units_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:bosdyn.api.Parameter.units)
}
inline std::string* Parameter::_internal_mutable_units() {
  
  return units_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Parameter::release_units() {
  // @@protoc_insertion_point(field_release:bosdyn.api.Parameter.units)
  return units_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Parameter::set_allocated_units(std::string* units) {
  if (units != nullptr) {
    
  } else {
    
  }
  units_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), units,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:bosdyn.api.Parameter.units)
}

// int64 int_value = 3;
inline bool Parameter::_internal_has_int_value() const {
  return values_case() == kIntValue;
}
inline void Parameter::set_has_int_value() {
  _oneof_case_[0] = kIntValue;
}
inline void Parameter::clear_int_value() {
  if (_internal_has_int_value()) {
    values_.int_value_ = PROTOBUF_LONGLONG(0);
    clear_has_values();
  }
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Parameter::_internal_int_value() const {
  if (_internal_has_int_value()) {
    return values_.int_value_;
  }
  return PROTOBUF_LONGLONG(0);
}
inline void Parameter::_internal_set_int_value(::PROTOBUF_NAMESPACE_ID::int64 value) {
  if (!_internal_has_int_value()) {
    clear_values();
    set_has_int_value();
  }
  values_.int_value_ = value;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Parameter::int_value() const {
  // @@protoc_insertion_point(field_get:bosdyn.api.Parameter.int_value)
  return _internal_int_value();
}
inline void Parameter::set_int_value(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_int_value(value);
  // @@protoc_insertion_point(field_set:bosdyn.api.Parameter.int_value)
}

// double float_value = 4;
inline bool Parameter::_internal_has_float_value() const {
  return values_case() == kFloatValue;
}
inline void Parameter::set_has_float_value() {
  _oneof_case_[0] = kFloatValue;
}
inline void Parameter::clear_float_value() {
  if (_internal_has_float_value()) {
    values_.float_value_ = 0;
    clear_has_values();
  }
}
inline double Parameter::_internal_float_value() const {
  if (_internal_has_float_value()) {
    return values_.float_value_;
  }
  return 0;
}
inline void Parameter::_internal_set_float_value(double value) {
  if (!_internal_has_float_value()) {
    clear_values();
    set_has_float_value();
  }
  values_.float_value_ = value;
}
inline double Parameter::float_value() const {
  // @@protoc_insertion_point(field_get:bosdyn.api.Parameter.float_value)
  return _internal_float_value();
}
inline void Parameter::set_float_value(double value) {
  _internal_set_float_value(value);
  // @@protoc_insertion_point(field_set:bosdyn.api.Parameter.float_value)
}

// .google.protobuf.Timestamp timestamp = 5;
inline bool Parameter::_internal_has_timestamp() const {
  return values_case() == kTimestamp;
}
inline bool Parameter::has_timestamp() const {
  return _internal_has_timestamp();
}
inline void Parameter::set_has_timestamp() {
  _oneof_case_[0] = kTimestamp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Parameter::release_timestamp() {
  // @@protoc_insertion_point(field_release:bosdyn.api.Parameter.timestamp)
  if (_internal_has_timestamp()) {
    clear_has_values();
      PROTOBUF_NAMESPACE_ID::Timestamp* temp = values_.timestamp_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    values_.timestamp_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Parameter::_internal_timestamp() const {
  return _internal_has_timestamp()
      ? *values_.timestamp_
      : *reinterpret_cast< PROTOBUF_NAMESPACE_ID::Timestamp*>(&PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Parameter::timestamp() const {
  // @@protoc_insertion_point(field_get:bosdyn.api.Parameter.timestamp)
  return _internal_timestamp();
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Parameter::unsafe_arena_release_timestamp() {
  // @@protoc_insertion_point(field_unsafe_arena_release:bosdyn.api.Parameter.timestamp)
  if (_internal_has_timestamp()) {
    clear_has_values();
    PROTOBUF_NAMESPACE_ID::Timestamp* temp = values_.timestamp_;
    values_.timestamp_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Parameter::unsafe_arena_set_allocated_timestamp(PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  clear_values();
  if (timestamp) {
    set_has_timestamp();
    values_.timestamp_ = timestamp;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:bosdyn.api.Parameter.timestamp)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Parameter::_internal_mutable_timestamp() {
  if (!_internal_has_timestamp()) {
    clear_values();
    set_has_timestamp();
    values_.timestamp_ = CreateMaybeMessage< PROTOBUF_NAMESPACE_ID::Timestamp >(GetArena());
  }
  return values_.timestamp_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Parameter::mutable_timestamp() {
  // @@protoc_insertion_point(field_mutable:bosdyn.api.Parameter.timestamp)
  return _internal_mutable_timestamp();
}

// .google.protobuf.Duration duration = 6;
inline bool Parameter::_internal_has_duration() const {
  return values_case() == kDuration;
}
inline bool Parameter::has_duration() const {
  return _internal_has_duration();
}
inline void Parameter::set_has_duration() {
  _oneof_case_[0] = kDuration;
}
inline PROTOBUF_NAMESPACE_ID::Duration* Parameter::release_duration() {
  // @@protoc_insertion_point(field_release:bosdyn.api.Parameter.duration)
  if (_internal_has_duration()) {
    clear_has_values();
      PROTOBUF_NAMESPACE_ID::Duration* temp = values_.duration_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    values_.duration_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const PROTOBUF_NAMESPACE_ID::Duration& Parameter::_internal_duration() const {
  return _internal_has_duration()
      ? *values_.duration_
      : *reinterpret_cast< PROTOBUF_NAMESPACE_ID::Duration*>(&PROTOBUF_NAMESPACE_ID::_Duration_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Duration& Parameter::duration() const {
  // @@protoc_insertion_point(field_get:bosdyn.api.Parameter.duration)
  return _internal_duration();
}
inline PROTOBUF_NAMESPACE_ID::Duration* Parameter::unsafe_arena_release_duration() {
  // @@protoc_insertion_point(field_unsafe_arena_release:bosdyn.api.Parameter.duration)
  if (_internal_has_duration()) {
    clear_has_values();
    PROTOBUF_NAMESPACE_ID::Duration* temp = values_.duration_;
    values_.duration_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Parameter::unsafe_arena_set_allocated_duration(PROTOBUF_NAMESPACE_ID::Duration* duration) {
  clear_values();
  if (duration) {
    set_has_duration();
    values_.duration_ = duration;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:bosdyn.api.Parameter.duration)
}
inline PROTOBUF_NAMESPACE_ID::Duration* Parameter::_internal_mutable_duration() {
  if (!_internal_has_duration()) {
    clear_values();
    set_has_duration();
    values_.duration_ = CreateMaybeMessage< PROTOBUF_NAMESPACE_ID::Duration >(GetArena());
  }
  return values_.duration_;
}
inline PROTOBUF_NAMESPACE_ID::Duration* Parameter::mutable_duration() {
  // @@protoc_insertion_point(field_mutable:bosdyn.api.Parameter.duration)
  return _internal_mutable_duration();
}

// string string_value = 7;
inline bool Parameter::_internal_has_string_value() const {
  return values_case() == kStringValue;
}
inline void Parameter::set_has_string_value() {
  _oneof_case_[0] = kStringValue;
}
inline void Parameter::clear_string_value() {
  if (_internal_has_string_value()) {
    values_.string_value_.Destroy(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
    clear_has_values();
  }
}
inline const std::string& Parameter::string_value() const {
  // @@protoc_insertion_point(field_get:bosdyn.api.Parameter.string_value)
  return _internal_string_value();
}
inline void Parameter::set_string_value(const std::string& value) {
  _internal_set_string_value(value);
  // @@protoc_insertion_point(field_set:bosdyn.api.Parameter.string_value)
}
inline std::string* Parameter::mutable_string_value() {
  // @@protoc_insertion_point(field_mutable:bosdyn.api.Parameter.string_value)
  return _internal_mutable_string_value();
}
inline const std::string& Parameter::_internal_string_value() const {
  if (_internal_has_string_value()) {
    return values_.string_value_.Get();
  }
  return *&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void Parameter::_internal_set_string_value(const std::string& value) {
  if (!_internal_has_string_value()) {
    clear_values();
    set_has_string_value();
    values_.string_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  values_.string_value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Parameter::set_string_value(std::string&& value) {
  // @@protoc_insertion_point(field_set:bosdyn.api.Parameter.string_value)
  if (!_internal_has_string_value()) {
    clear_values();
    set_has_string_value();
    values_.string_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  values_.string_value_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:bosdyn.api.Parameter.string_value)
}
inline void Parameter::set_string_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  if (!_internal_has_string_value()) {
    clear_values();
    set_has_string_value();
    values_.string_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  values_.string_value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:bosdyn.api.Parameter.string_value)
}
inline void Parameter::set_string_value(const char* value,
                             size_t size) {
  if (!_internal_has_string_value()) {
    clear_values();
    set_has_string_value();
    values_.string_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  values_.string_value_.Set(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size),
      GetArena());
  // @@protoc_insertion_point(field_set_pointer:bosdyn.api.Parameter.string_value)
}
inline std::string* Parameter::_internal_mutable_string_value() {
  if (!_internal_has_string_value()) {
    clear_values();
    set_has_string_value();
    values_.string_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  return values_.string_value_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Parameter::release_string_value() {
  // @@protoc_insertion_point(field_release:bosdyn.api.Parameter.string_value)
  if (_internal_has_string_value()) {
    clear_has_values();
    return values_.string_value_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  } else {
    return nullptr;
  }
}
inline void Parameter::set_allocated_string_value(std::string* string_value) {
  if (has_values()) {
    clear_values();
  }
  if (string_value != nullptr) {
    set_has_string_value();
    values_.string_value_.UnsafeSetDefault(string_value);
    ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena();
    if (arena != nullptr) {
      arena->Own(string_value);
    }
  }
  // @@protoc_insertion_point(field_set_allocated:bosdyn.api.Parameter.string_value)
}

// bool bool_value = 8;
inline bool Parameter::_internal_has_bool_value() const {
  return values_case() == kBoolValue;
}
inline void Parameter::set_has_bool_value() {
  _oneof_case_[0] = kBoolValue;
}
inline void Parameter::clear_bool_value() {
  if (_internal_has_bool_value()) {
    values_.bool_value_ = false;
    clear_has_values();
  }
}
inline bool Parameter::_internal_bool_value() const {
  if (_internal_has_bool_value()) {
    return values_.bool_value_;
  }
  return false;
}
inline void Parameter::_internal_set_bool_value(bool value) {
  if (!_internal_has_bool_value()) {
    clear_values();
    set_has_bool_value();
  }
  values_.bool_value_ = value;
}
inline bool Parameter::bool_value() const {
  // @@protoc_insertion_point(field_get:bosdyn.api.Parameter.bool_value)
  return _internal_bool_value();
}
inline void Parameter::set_bool_value(bool value) {
  _internal_set_bool_value(value);
  // @@protoc_insertion_point(field_set:bosdyn.api.Parameter.bool_value)
}

// string notes = 9;
inline void Parameter::clear_notes() {
  notes_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Parameter::notes() const {
  // @@protoc_insertion_point(field_get:bosdyn.api.Parameter.notes)
  return _internal_notes();
}
inline void Parameter::set_notes(const std::string& value) {
  _internal_set_notes(value);
  // @@protoc_insertion_point(field_set:bosdyn.api.Parameter.notes)
}
inline std::string* Parameter::mutable_notes() {
  // @@protoc_insertion_point(field_mutable:bosdyn.api.Parameter.notes)
  return _internal_mutable_notes();
}
inline const std::string& Parameter::_internal_notes() const {
  return notes_.Get();
}
inline void Parameter::_internal_set_notes(const std::string& value) {
  
  notes_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Parameter::set_notes(std::string&& value) {
  
  notes_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:bosdyn.api.Parameter.notes)
}
inline void Parameter::set_notes(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  notes_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:bosdyn.api.Parameter.notes)
}
inline void Parameter::set_notes(const char* value,
    size_t size) {
  
  notes_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:bosdyn.api.Parameter.notes)
}
inline std::string* Parameter::_internal_mutable_notes() {
  
  return notes_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Parameter::release_notes() {
  // @@protoc_insertion_point(field_release:bosdyn.api.Parameter.notes)
  return notes_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Parameter::set_allocated_notes(std::string* notes) {
  if (notes != nullptr) {
    
  } else {
    
  }
  notes_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), notes,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:bosdyn.api.Parameter.notes)
}

inline bool Parameter::has_values() const {
  return values_case() != VALUES_NOT_SET;
}
inline void Parameter::clear_has_values() {
  _oneof_case_[0] = VALUES_NOT_SET;
}
inline Parameter::ValuesCase Parameter::values_case() const {
  return Parameter::ValuesCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace bosdyn

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_bosdyn_2fapi_2fparameter_2eproto
