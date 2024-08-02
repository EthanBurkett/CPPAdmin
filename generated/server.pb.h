// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server.proto
// Protobuf C++ Version: 4.25.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_server_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_server_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_server_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_server_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_server_2eproto;
namespace server {
class CreateCommandRequest;
struct CreateCommandRequestDefaultTypeInternal;
extern CreateCommandRequestDefaultTypeInternal _CreateCommandRequest_default_instance_;
class CreateCommandResponse;
struct CreateCommandResponseDefaultTypeInternal;
extern CreateCommandResponseDefaultTypeInternal _CreateCommandResponse_default_instance_;
}  // namespace server
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace server {

// ===================================================================


// -------------------------------------------------------------------

class CreateCommandResponse final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:server.CreateCommandResponse) */ {
 public:
  inline CreateCommandResponse() : CreateCommandResponse(nullptr) {}
  ~CreateCommandResponse() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR CreateCommandResponse(::google::protobuf::internal::ConstantInitialized);

  inline CreateCommandResponse(const CreateCommandResponse& from)
      : CreateCommandResponse(nullptr, from) {}
  CreateCommandResponse(CreateCommandResponse&& from) noexcept
    : CreateCommandResponse() {
    *this = ::std::move(from);
  }

  inline CreateCommandResponse& operator=(const CreateCommandResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline CreateCommandResponse& operator=(CreateCommandResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CreateCommandResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const CreateCommandResponse* internal_default_instance() {
    return reinterpret_cast<const CreateCommandResponse*>(
               &_CreateCommandResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CreateCommandResponse& a, CreateCommandResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(CreateCommandResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CreateCommandResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CreateCommandResponse* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CreateCommandResponse>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const CreateCommandResponse& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const CreateCommandResponse& from) {
    CreateCommandResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(CreateCommandResponse* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "server.CreateCommandResponse";
  }
  protected:
  explicit CreateCommandResponse(::google::protobuf::Arena* arena);
  CreateCommandResponse(::google::protobuf::Arena* arena, const CreateCommandResponse& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSuccessFieldNumber = 1,
  };
  // bool success = 1;
  void clear_success() ;
  bool success() const;
  void set_success(bool value);

  private:
  bool _internal_success() const;
  void _internal_set_success(bool value);

  public:
  // @@protoc_insertion_point(class_scope:server.CreateCommandResponse)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    bool success_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_server_2eproto;
};// -------------------------------------------------------------------

class CreateCommandRequest final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:server.CreateCommandRequest) */ {
 public:
  inline CreateCommandRequest() : CreateCommandRequest(nullptr) {}
  ~CreateCommandRequest() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR CreateCommandRequest(::google::protobuf::internal::ConstantInitialized);

  inline CreateCommandRequest(const CreateCommandRequest& from)
      : CreateCommandRequest(nullptr, from) {}
  CreateCommandRequest(CreateCommandRequest&& from) noexcept
    : CreateCommandRequest() {
    *this = ::std::move(from);
  }

  inline CreateCommandRequest& operator=(const CreateCommandRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline CreateCommandRequest& operator=(CreateCommandRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CreateCommandRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const CreateCommandRequest* internal_default_instance() {
    return reinterpret_cast<const CreateCommandRequest*>(
               &_CreateCommandRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CreateCommandRequest& a, CreateCommandRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(CreateCommandRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CreateCommandRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CreateCommandRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CreateCommandRequest>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const CreateCommandRequest& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const CreateCommandRequest& from) {
    CreateCommandRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(CreateCommandRequest* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "server.CreateCommandRequest";
  }
  protected:
  explicit CreateCommandRequest(::google::protobuf::Arena* arena);
  CreateCommandRequest(::google::protobuf::Arena* arena, const CreateCommandRequest& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCommandFieldNumber = 1,
    kPlayerGuidFieldNumber = 2,
    kPlayerIdFieldNumber = 3,
    kPlayerNameFieldNumber = 4,
    kMessageFieldNumber = 5,
  };
  // string command = 1;
  void clear_command() ;
  const std::string& command() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_command(Arg_&& arg, Args_... args);
  std::string* mutable_command();
  PROTOBUF_NODISCARD std::string* release_command();
  void set_allocated_command(std::string* value);

  private:
  const std::string& _internal_command() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_command(
      const std::string& value);
  std::string* _internal_mutable_command();

  public:
  // string PlayerGuid = 2;
  void clear_playerguid() ;
  const std::string& playerguid() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_playerguid(Arg_&& arg, Args_... args);
  std::string* mutable_playerguid();
  PROTOBUF_NODISCARD std::string* release_playerguid();
  void set_allocated_playerguid(std::string* value);

  private:
  const std::string& _internal_playerguid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_playerguid(
      const std::string& value);
  std::string* _internal_mutable_playerguid();

  public:
  // string PlayerId = 3;
  void clear_playerid() ;
  const std::string& playerid() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_playerid(Arg_&& arg, Args_... args);
  std::string* mutable_playerid();
  PROTOBUF_NODISCARD std::string* release_playerid();
  void set_allocated_playerid(std::string* value);

  private:
  const std::string& _internal_playerid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_playerid(
      const std::string& value);
  std::string* _internal_mutable_playerid();

  public:
  // string PlayerName = 4;
  void clear_playername() ;
  const std::string& playername() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_playername(Arg_&& arg, Args_... args);
  std::string* mutable_playername();
  PROTOBUF_NODISCARD std::string* release_playername();
  void set_allocated_playername(std::string* value);

  private:
  const std::string& _internal_playername() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_playername(
      const std::string& value);
  std::string* _internal_mutable_playername();

  public:
  // string Message = 5;
  void clear_message() ;
  const std::string& message() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_message(Arg_&& arg, Args_... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* value);

  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(
      const std::string& value);
  std::string* _internal_mutable_message();

  public:
  // @@protoc_insertion_point(class_scope:server.CreateCommandRequest)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 5, 0,
      78, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr command_;
    ::google::protobuf::internal::ArenaStringPtr playerguid_;
    ::google::protobuf::internal::ArenaStringPtr playerid_;
    ::google::protobuf::internal::ArenaStringPtr playername_;
    ::google::protobuf::internal::ArenaStringPtr message_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_server_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// CreateCommandRequest

// string command = 1;
inline void CreateCommandRequest::clear_command() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.command_.ClearToEmpty();
}
inline const std::string& CreateCommandRequest::command() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:server.CreateCommandRequest.command)
  return _internal_command();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CreateCommandRequest::set_command(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.command_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:server.CreateCommandRequest.command)
}
inline std::string* CreateCommandRequest::mutable_command() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_command();
  // @@protoc_insertion_point(field_mutable:server.CreateCommandRequest.command)
  return _s;
}
inline const std::string& CreateCommandRequest::_internal_command() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.command_.Get();
}
inline void CreateCommandRequest::_internal_set_command(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.command_.Set(value, GetArena());
}
inline std::string* CreateCommandRequest::_internal_mutable_command() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.command_.Mutable( GetArena());
}
inline std::string* CreateCommandRequest::release_command() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:server.CreateCommandRequest.command)
  return _impl_.command_.Release();
}
inline void CreateCommandRequest::set_allocated_command(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.command_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.command_.IsDefault()) {
          _impl_.command_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:server.CreateCommandRequest.command)
}

// string PlayerGuid = 2;
inline void CreateCommandRequest::clear_playerguid() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.playerguid_.ClearToEmpty();
}
inline const std::string& CreateCommandRequest::playerguid() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:server.CreateCommandRequest.PlayerGuid)
  return _internal_playerguid();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CreateCommandRequest::set_playerguid(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.playerguid_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:server.CreateCommandRequest.PlayerGuid)
}
inline std::string* CreateCommandRequest::mutable_playerguid() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_playerguid();
  // @@protoc_insertion_point(field_mutable:server.CreateCommandRequest.PlayerGuid)
  return _s;
}
inline const std::string& CreateCommandRequest::_internal_playerguid() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.playerguid_.Get();
}
inline void CreateCommandRequest::_internal_set_playerguid(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.playerguid_.Set(value, GetArena());
}
inline std::string* CreateCommandRequest::_internal_mutable_playerguid() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.playerguid_.Mutable( GetArena());
}
inline std::string* CreateCommandRequest::release_playerguid() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:server.CreateCommandRequest.PlayerGuid)
  return _impl_.playerguid_.Release();
}
inline void CreateCommandRequest::set_allocated_playerguid(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.playerguid_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.playerguid_.IsDefault()) {
          _impl_.playerguid_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:server.CreateCommandRequest.PlayerGuid)
}

// string PlayerId = 3;
inline void CreateCommandRequest::clear_playerid() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.playerid_.ClearToEmpty();
}
inline const std::string& CreateCommandRequest::playerid() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:server.CreateCommandRequest.PlayerId)
  return _internal_playerid();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CreateCommandRequest::set_playerid(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.playerid_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:server.CreateCommandRequest.PlayerId)
}
inline std::string* CreateCommandRequest::mutable_playerid() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_playerid();
  // @@protoc_insertion_point(field_mutable:server.CreateCommandRequest.PlayerId)
  return _s;
}
inline const std::string& CreateCommandRequest::_internal_playerid() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.playerid_.Get();
}
inline void CreateCommandRequest::_internal_set_playerid(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.playerid_.Set(value, GetArena());
}
inline std::string* CreateCommandRequest::_internal_mutable_playerid() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.playerid_.Mutable( GetArena());
}
inline std::string* CreateCommandRequest::release_playerid() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:server.CreateCommandRequest.PlayerId)
  return _impl_.playerid_.Release();
}
inline void CreateCommandRequest::set_allocated_playerid(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.playerid_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.playerid_.IsDefault()) {
          _impl_.playerid_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:server.CreateCommandRequest.PlayerId)
}

// string PlayerName = 4;
inline void CreateCommandRequest::clear_playername() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.playername_.ClearToEmpty();
}
inline const std::string& CreateCommandRequest::playername() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:server.CreateCommandRequest.PlayerName)
  return _internal_playername();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CreateCommandRequest::set_playername(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.playername_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:server.CreateCommandRequest.PlayerName)
}
inline std::string* CreateCommandRequest::mutable_playername() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_playername();
  // @@protoc_insertion_point(field_mutable:server.CreateCommandRequest.PlayerName)
  return _s;
}
inline const std::string& CreateCommandRequest::_internal_playername() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.playername_.Get();
}
inline void CreateCommandRequest::_internal_set_playername(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.playername_.Set(value, GetArena());
}
inline std::string* CreateCommandRequest::_internal_mutable_playername() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.playername_.Mutable( GetArena());
}
inline std::string* CreateCommandRequest::release_playername() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:server.CreateCommandRequest.PlayerName)
  return _impl_.playername_.Release();
}
inline void CreateCommandRequest::set_allocated_playername(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.playername_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.playername_.IsDefault()) {
          _impl_.playername_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:server.CreateCommandRequest.PlayerName)
}

// string Message = 5;
inline void CreateCommandRequest::clear_message() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.message_.ClearToEmpty();
}
inline const std::string& CreateCommandRequest::message() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:server.CreateCommandRequest.Message)
  return _internal_message();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CreateCommandRequest::set_message(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.message_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:server.CreateCommandRequest.Message)
}
inline std::string* CreateCommandRequest::mutable_message() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:server.CreateCommandRequest.Message)
  return _s;
}
inline const std::string& CreateCommandRequest::_internal_message() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.message_.Get();
}
inline void CreateCommandRequest::_internal_set_message(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.message_.Set(value, GetArena());
}
inline std::string* CreateCommandRequest::_internal_mutable_message() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.message_.Mutable( GetArena());
}
inline std::string* CreateCommandRequest::release_message() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:server.CreateCommandRequest.Message)
  return _impl_.message_.Release();
}
inline void CreateCommandRequest::set_allocated_message(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.message_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.message_.IsDefault()) {
          _impl_.message_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:server.CreateCommandRequest.Message)
}

// -------------------------------------------------------------------

// CreateCommandResponse

// bool success = 1;
inline void CreateCommandResponse::clear_success() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.success_ = false;
}
inline bool CreateCommandResponse::success() const {
  // @@protoc_insertion_point(field_get:server.CreateCommandResponse.success)
  return _internal_success();
}
inline void CreateCommandResponse::set_success(bool value) {
  _internal_set_success(value);
  // @@protoc_insertion_point(field_set:server.CreateCommandResponse.success)
}
inline bool CreateCommandResponse::_internal_success() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.success_;
}
inline void CreateCommandResponse::_internal_set_success(bool value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.success_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace server


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_server_2eproto_2epb_2eh
