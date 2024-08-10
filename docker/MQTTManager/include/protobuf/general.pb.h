// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: general.proto
// Protobuf C++ Version: 5.27.0

#ifndef GOOGLE_PROTOBUF_INCLUDED_general_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_general_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027000
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
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

#define PROTOBUF_INTERNAL_EXPORT_general_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_general_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_general_2eproto;
class HomeAssistantEntity;
struct HomeAssistantEntityDefaultTypeInternal;
extern HomeAssistantEntityDefaultTypeInternal _HomeAssistantEntity_default_instance_;
class OpenhabLight;
struct OpenhabLightDefaultTypeInternal;
extern OpenhabLightDefaultTypeInternal _OpenhabLight_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class OpenhabLight final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:OpenhabLight) */ {
 public:
  inline OpenhabLight() : OpenhabLight(nullptr) {}
  ~OpenhabLight() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR OpenhabLight(
      ::google::protobuf::internal::ConstantInitialized);

  inline OpenhabLight(const OpenhabLight& from) : OpenhabLight(nullptr, from) {}
  inline OpenhabLight(OpenhabLight&& from) noexcept
      : OpenhabLight(nullptr, std::move(from)) {}
  inline OpenhabLight& operator=(const OpenhabLight& from) {
    CopyFrom(from);
    return *this;
  }
  inline OpenhabLight& operator=(OpenhabLight&& from) noexcept {
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
  static const OpenhabLight& default_instance() {
    return *internal_default_instance();
  }
  static inline const OpenhabLight* internal_default_instance() {
    return reinterpret_cast<const OpenhabLight*>(
        &_OpenhabLight_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(OpenhabLight& a, OpenhabLight& b) { a.Swap(&b); }
  inline void Swap(OpenhabLight* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(OpenhabLight* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  OpenhabLight* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<OpenhabLight>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const OpenhabLight& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const OpenhabLight& from) { OpenhabLight::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(OpenhabLight* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "OpenhabLight"; }

 protected:
  explicit OpenhabLight(::google::protobuf::Arena* arena);
  OpenhabLight(::google::protobuf::Arena* arena, const OpenhabLight& from);
  OpenhabLight(::google::protobuf::Arena* arena, OpenhabLight&& from) noexcept
      : OpenhabLight(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kOpenhabIdFieldNumber = 1,
    kOpenhabDimChannelFieldNumber = 2,
    kOpenhabColorTemperatureChannelFieldNumber = 3,
    kOpenhabRgbChannelFieldNumber = 4,
    kCanDimFieldNumber = 5,
    kCanColorTemperatureFieldNumber = 6,
    kCanRgbFieldNumber = 7,
  };
  // string openhab_id = 1;
  void clear_openhab_id() ;
  const std::string& openhab_id() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_openhab_id(Arg_&& arg, Args_... args);
  std::string* mutable_openhab_id();
  PROTOBUF_NODISCARD std::string* release_openhab_id();
  void set_allocated_openhab_id(std::string* value);

  private:
  const std::string& _internal_openhab_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_openhab_id(
      const std::string& value);
  std::string* _internal_mutable_openhab_id();

  public:
  // string openhab_dim_channel = 2;
  void clear_openhab_dim_channel() ;
  const std::string& openhab_dim_channel() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_openhab_dim_channel(Arg_&& arg, Args_... args);
  std::string* mutable_openhab_dim_channel();
  PROTOBUF_NODISCARD std::string* release_openhab_dim_channel();
  void set_allocated_openhab_dim_channel(std::string* value);

  private:
  const std::string& _internal_openhab_dim_channel() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_openhab_dim_channel(
      const std::string& value);
  std::string* _internal_mutable_openhab_dim_channel();

  public:
  // string openhab_color_temperature_channel = 3;
  void clear_openhab_color_temperature_channel() ;
  const std::string& openhab_color_temperature_channel() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_openhab_color_temperature_channel(Arg_&& arg, Args_... args);
  std::string* mutable_openhab_color_temperature_channel();
  PROTOBUF_NODISCARD std::string* release_openhab_color_temperature_channel();
  void set_allocated_openhab_color_temperature_channel(std::string* value);

  private:
  const std::string& _internal_openhab_color_temperature_channel() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_openhab_color_temperature_channel(
      const std::string& value);
  std::string* _internal_mutable_openhab_color_temperature_channel();

  public:
  // string openhab_rgb_channel = 4;
  void clear_openhab_rgb_channel() ;
  const std::string& openhab_rgb_channel() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_openhab_rgb_channel(Arg_&& arg, Args_... args);
  std::string* mutable_openhab_rgb_channel();
  PROTOBUF_NODISCARD std::string* release_openhab_rgb_channel();
  void set_allocated_openhab_rgb_channel(std::string* value);

  private:
  const std::string& _internal_openhab_rgb_channel() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_openhab_rgb_channel(
      const std::string& value);
  std::string* _internal_mutable_openhab_rgb_channel();

  public:
  // bool can_dim = 5;
  void clear_can_dim() ;
  bool can_dim() const;
  void set_can_dim(bool value);

  private:
  bool _internal_can_dim() const;
  void _internal_set_can_dim(bool value);

  public:
  // bool can_color_temperature = 6;
  void clear_can_color_temperature() ;
  bool can_color_temperature() const;
  void set_can_color_temperature(bool value);

  private:
  bool _internal_can_color_temperature() const;
  void _internal_set_can_color_temperature(bool value);

  public:
  // bool can_rgb = 7;
  void clear_can_rgb() ;
  bool can_rgb() const;
  void set_can_rgb(bool value);

  private:
  bool _internal_can_rgb() const;
  void _internal_set_can_rgb(bool value);

  public:
  // @@protoc_insertion_point(class_scope:OpenhabLight)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 7, 0,
      102, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_OpenhabLight_default_instance_;

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
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const OpenhabLight& from_msg);
    ::google::protobuf::internal::ArenaStringPtr openhab_id_;
    ::google::protobuf::internal::ArenaStringPtr openhab_dim_channel_;
    ::google::protobuf::internal::ArenaStringPtr openhab_color_temperature_channel_;
    ::google::protobuf::internal::ArenaStringPtr openhab_rgb_channel_;
    bool can_dim_;
    bool can_color_temperature_;
    bool can_rgb_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_general_2eproto;
};
// -------------------------------------------------------------------

class HomeAssistantEntity final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:HomeAssistantEntity) */ {
 public:
  inline HomeAssistantEntity() : HomeAssistantEntity(nullptr) {}
  ~HomeAssistantEntity() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR HomeAssistantEntity(
      ::google::protobuf::internal::ConstantInitialized);

  inline HomeAssistantEntity(const HomeAssistantEntity& from) : HomeAssistantEntity(nullptr, from) {}
  inline HomeAssistantEntity(HomeAssistantEntity&& from) noexcept
      : HomeAssistantEntity(nullptr, std::move(from)) {}
  inline HomeAssistantEntity& operator=(const HomeAssistantEntity& from) {
    CopyFrom(from);
    return *this;
  }
  inline HomeAssistantEntity& operator=(HomeAssistantEntity&& from) noexcept {
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
  static const HomeAssistantEntity& default_instance() {
    return *internal_default_instance();
  }
  static inline const HomeAssistantEntity* internal_default_instance() {
    return reinterpret_cast<const HomeAssistantEntity*>(
        &_HomeAssistantEntity_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(HomeAssistantEntity& a, HomeAssistantEntity& b) { a.Swap(&b); }
  inline void Swap(HomeAssistantEntity* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HomeAssistantEntity* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HomeAssistantEntity* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<HomeAssistantEntity>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const HomeAssistantEntity& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const HomeAssistantEntity& from) { HomeAssistantEntity::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(HomeAssistantEntity* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "HomeAssistantEntity"; }

 protected:
  explicit HomeAssistantEntity(::google::protobuf::Arena* arena);
  HomeAssistantEntity(::google::protobuf::Arena* arena, const HomeAssistantEntity& from);
  HomeAssistantEntity(::google::protobuf::Arena* arena, HomeAssistantEntity&& from) noexcept
      : HomeAssistantEntity(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kHomeAssistantEntityIdFieldNumber = 2,
    kCanDimFieldNumber = 3,
    kCanColorTemperatureFieldNumber = 4,
    kCanRgbFieldNumber = 5,
  };
  // string home_assistant_entity_id = 2;
  void clear_home_assistant_entity_id() ;
  const std::string& home_assistant_entity_id() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_home_assistant_entity_id(Arg_&& arg, Args_... args);
  std::string* mutable_home_assistant_entity_id();
  PROTOBUF_NODISCARD std::string* release_home_assistant_entity_id();
  void set_allocated_home_assistant_entity_id(std::string* value);

  private:
  const std::string& _internal_home_assistant_entity_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_home_assistant_entity_id(
      const std::string& value);
  std::string* _internal_mutable_home_assistant_entity_id();

  public:
  // bool can_dim = 3;
  void clear_can_dim() ;
  bool can_dim() const;
  void set_can_dim(bool value);

  private:
  bool _internal_can_dim() const;
  void _internal_set_can_dim(bool value);

  public:
  // bool can_color_temperature = 4;
  void clear_can_color_temperature() ;
  bool can_color_temperature() const;
  void set_can_color_temperature(bool value);

  private:
  bool _internal_can_color_temperature() const;
  void _internal_set_can_color_temperature(bool value);

  public:
  // bool can_rgb = 5;
  void clear_can_rgb() ;
  bool can_rgb() const;
  void set_can_rgb(bool value);

  private:
  bool _internal_can_rgb() const;
  void _internal_set_can_rgb(bool value);

  public:
  // @@protoc_insertion_point(class_scope:HomeAssistantEntity)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 4, 0,
      52, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_HomeAssistantEntity_default_instance_;

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
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const HomeAssistantEntity& from_msg);
    ::google::protobuf::internal::ArenaStringPtr home_assistant_entity_id_;
    bool can_dim_;
    bool can_color_temperature_;
    bool can_rgb_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_general_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// HomeAssistantEntity

// string home_assistant_entity_id = 2;
inline void HomeAssistantEntity::clear_home_assistant_entity_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.home_assistant_entity_id_.ClearToEmpty();
}
inline const std::string& HomeAssistantEntity::home_assistant_entity_id() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:HomeAssistantEntity.home_assistant_entity_id)
  return _internal_home_assistant_entity_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void HomeAssistantEntity::set_home_assistant_entity_id(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.home_assistant_entity_id_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:HomeAssistantEntity.home_assistant_entity_id)
}
inline std::string* HomeAssistantEntity::mutable_home_assistant_entity_id() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_home_assistant_entity_id();
  // @@protoc_insertion_point(field_mutable:HomeAssistantEntity.home_assistant_entity_id)
  return _s;
}
inline const std::string& HomeAssistantEntity::_internal_home_assistant_entity_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.home_assistant_entity_id_.Get();
}
inline void HomeAssistantEntity::_internal_set_home_assistant_entity_id(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.home_assistant_entity_id_.Set(value, GetArena());
}
inline std::string* HomeAssistantEntity::_internal_mutable_home_assistant_entity_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.home_assistant_entity_id_.Mutable( GetArena());
}
inline std::string* HomeAssistantEntity::release_home_assistant_entity_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:HomeAssistantEntity.home_assistant_entity_id)
  return _impl_.home_assistant_entity_id_.Release();
}
inline void HomeAssistantEntity::set_allocated_home_assistant_entity_id(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.home_assistant_entity_id_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.home_assistant_entity_id_.IsDefault()) {
          _impl_.home_assistant_entity_id_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:HomeAssistantEntity.home_assistant_entity_id)
}

// bool can_dim = 3;
inline void HomeAssistantEntity::clear_can_dim() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_dim_ = false;
}
inline bool HomeAssistantEntity::can_dim() const {
  // @@protoc_insertion_point(field_get:HomeAssistantEntity.can_dim)
  return _internal_can_dim();
}
inline void HomeAssistantEntity::set_can_dim(bool value) {
  _internal_set_can_dim(value);
  // @@protoc_insertion_point(field_set:HomeAssistantEntity.can_dim)
}
inline bool HomeAssistantEntity::_internal_can_dim() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.can_dim_;
}
inline void HomeAssistantEntity::_internal_set_can_dim(bool value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_dim_ = value;
}

// bool can_color_temperature = 4;
inline void HomeAssistantEntity::clear_can_color_temperature() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_color_temperature_ = false;
}
inline bool HomeAssistantEntity::can_color_temperature() const {
  // @@protoc_insertion_point(field_get:HomeAssistantEntity.can_color_temperature)
  return _internal_can_color_temperature();
}
inline void HomeAssistantEntity::set_can_color_temperature(bool value) {
  _internal_set_can_color_temperature(value);
  // @@protoc_insertion_point(field_set:HomeAssistantEntity.can_color_temperature)
}
inline bool HomeAssistantEntity::_internal_can_color_temperature() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.can_color_temperature_;
}
inline void HomeAssistantEntity::_internal_set_can_color_temperature(bool value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_color_temperature_ = value;
}

// bool can_rgb = 5;
inline void HomeAssistantEntity::clear_can_rgb() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_rgb_ = false;
}
inline bool HomeAssistantEntity::can_rgb() const {
  // @@protoc_insertion_point(field_get:HomeAssistantEntity.can_rgb)
  return _internal_can_rgb();
}
inline void HomeAssistantEntity::set_can_rgb(bool value) {
  _internal_set_can_rgb(value);
  // @@protoc_insertion_point(field_set:HomeAssistantEntity.can_rgb)
}
inline bool HomeAssistantEntity::_internal_can_rgb() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.can_rgb_;
}
inline void HomeAssistantEntity::_internal_set_can_rgb(bool value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_rgb_ = value;
}

// -------------------------------------------------------------------

// OpenhabLight

// string openhab_id = 1;
inline void OpenhabLight::clear_openhab_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_id_.ClearToEmpty();
}
inline const std::string& OpenhabLight::openhab_id() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:OpenhabLight.openhab_id)
  return _internal_openhab_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void OpenhabLight::set_openhab_id(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_id_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:OpenhabLight.openhab_id)
}
inline std::string* OpenhabLight::mutable_openhab_id() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_openhab_id();
  // @@protoc_insertion_point(field_mutable:OpenhabLight.openhab_id)
  return _s;
}
inline const std::string& OpenhabLight::_internal_openhab_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.openhab_id_.Get();
}
inline void OpenhabLight::_internal_set_openhab_id(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_id_.Set(value, GetArena());
}
inline std::string* OpenhabLight::_internal_mutable_openhab_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.openhab_id_.Mutable( GetArena());
}
inline std::string* OpenhabLight::release_openhab_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:OpenhabLight.openhab_id)
  return _impl_.openhab_id_.Release();
}
inline void OpenhabLight::set_allocated_openhab_id(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_id_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.openhab_id_.IsDefault()) {
          _impl_.openhab_id_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:OpenhabLight.openhab_id)
}

// string openhab_dim_channel = 2;
inline void OpenhabLight::clear_openhab_dim_channel() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_dim_channel_.ClearToEmpty();
}
inline const std::string& OpenhabLight::openhab_dim_channel() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:OpenhabLight.openhab_dim_channel)
  return _internal_openhab_dim_channel();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void OpenhabLight::set_openhab_dim_channel(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_dim_channel_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:OpenhabLight.openhab_dim_channel)
}
inline std::string* OpenhabLight::mutable_openhab_dim_channel() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_openhab_dim_channel();
  // @@protoc_insertion_point(field_mutable:OpenhabLight.openhab_dim_channel)
  return _s;
}
inline const std::string& OpenhabLight::_internal_openhab_dim_channel() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.openhab_dim_channel_.Get();
}
inline void OpenhabLight::_internal_set_openhab_dim_channel(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_dim_channel_.Set(value, GetArena());
}
inline std::string* OpenhabLight::_internal_mutable_openhab_dim_channel() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.openhab_dim_channel_.Mutable( GetArena());
}
inline std::string* OpenhabLight::release_openhab_dim_channel() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:OpenhabLight.openhab_dim_channel)
  return _impl_.openhab_dim_channel_.Release();
}
inline void OpenhabLight::set_allocated_openhab_dim_channel(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_dim_channel_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.openhab_dim_channel_.IsDefault()) {
          _impl_.openhab_dim_channel_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:OpenhabLight.openhab_dim_channel)
}

// string openhab_color_temperature_channel = 3;
inline void OpenhabLight::clear_openhab_color_temperature_channel() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_color_temperature_channel_.ClearToEmpty();
}
inline const std::string& OpenhabLight::openhab_color_temperature_channel() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:OpenhabLight.openhab_color_temperature_channel)
  return _internal_openhab_color_temperature_channel();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void OpenhabLight::set_openhab_color_temperature_channel(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_color_temperature_channel_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:OpenhabLight.openhab_color_temperature_channel)
}
inline std::string* OpenhabLight::mutable_openhab_color_temperature_channel() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_openhab_color_temperature_channel();
  // @@protoc_insertion_point(field_mutable:OpenhabLight.openhab_color_temperature_channel)
  return _s;
}
inline const std::string& OpenhabLight::_internal_openhab_color_temperature_channel() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.openhab_color_temperature_channel_.Get();
}
inline void OpenhabLight::_internal_set_openhab_color_temperature_channel(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_color_temperature_channel_.Set(value, GetArena());
}
inline std::string* OpenhabLight::_internal_mutable_openhab_color_temperature_channel() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.openhab_color_temperature_channel_.Mutable( GetArena());
}
inline std::string* OpenhabLight::release_openhab_color_temperature_channel() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:OpenhabLight.openhab_color_temperature_channel)
  return _impl_.openhab_color_temperature_channel_.Release();
}
inline void OpenhabLight::set_allocated_openhab_color_temperature_channel(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_color_temperature_channel_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.openhab_color_temperature_channel_.IsDefault()) {
          _impl_.openhab_color_temperature_channel_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:OpenhabLight.openhab_color_temperature_channel)
}

// string openhab_rgb_channel = 4;
inline void OpenhabLight::clear_openhab_rgb_channel() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_rgb_channel_.ClearToEmpty();
}
inline const std::string& OpenhabLight::openhab_rgb_channel() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:OpenhabLight.openhab_rgb_channel)
  return _internal_openhab_rgb_channel();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void OpenhabLight::set_openhab_rgb_channel(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_rgb_channel_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:OpenhabLight.openhab_rgb_channel)
}
inline std::string* OpenhabLight::mutable_openhab_rgb_channel() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_openhab_rgb_channel();
  // @@protoc_insertion_point(field_mutable:OpenhabLight.openhab_rgb_channel)
  return _s;
}
inline const std::string& OpenhabLight::_internal_openhab_rgb_channel() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.openhab_rgb_channel_.Get();
}
inline void OpenhabLight::_internal_set_openhab_rgb_channel(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_rgb_channel_.Set(value, GetArena());
}
inline std::string* OpenhabLight::_internal_mutable_openhab_rgb_channel() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.openhab_rgb_channel_.Mutable( GetArena());
}
inline std::string* OpenhabLight::release_openhab_rgb_channel() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:OpenhabLight.openhab_rgb_channel)
  return _impl_.openhab_rgb_channel_.Release();
}
inline void OpenhabLight::set_allocated_openhab_rgb_channel(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.openhab_rgb_channel_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.openhab_rgb_channel_.IsDefault()) {
          _impl_.openhab_rgb_channel_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:OpenhabLight.openhab_rgb_channel)
}

// bool can_dim = 5;
inline void OpenhabLight::clear_can_dim() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_dim_ = false;
}
inline bool OpenhabLight::can_dim() const {
  // @@protoc_insertion_point(field_get:OpenhabLight.can_dim)
  return _internal_can_dim();
}
inline void OpenhabLight::set_can_dim(bool value) {
  _internal_set_can_dim(value);
  // @@protoc_insertion_point(field_set:OpenhabLight.can_dim)
}
inline bool OpenhabLight::_internal_can_dim() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.can_dim_;
}
inline void OpenhabLight::_internal_set_can_dim(bool value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_dim_ = value;
}

// bool can_color_temperature = 6;
inline void OpenhabLight::clear_can_color_temperature() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_color_temperature_ = false;
}
inline bool OpenhabLight::can_color_temperature() const {
  // @@protoc_insertion_point(field_get:OpenhabLight.can_color_temperature)
  return _internal_can_color_temperature();
}
inline void OpenhabLight::set_can_color_temperature(bool value) {
  _internal_set_can_color_temperature(value);
  // @@protoc_insertion_point(field_set:OpenhabLight.can_color_temperature)
}
inline bool OpenhabLight::_internal_can_color_temperature() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.can_color_temperature_;
}
inline void OpenhabLight::_internal_set_can_color_temperature(bool value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_color_temperature_ = value;
}

// bool can_rgb = 7;
inline void OpenhabLight::clear_can_rgb() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_rgb_ = false;
}
inline bool OpenhabLight::can_rgb() const {
  // @@protoc_insertion_point(field_get:OpenhabLight.can_rgb)
  return _internal_can_rgb();
}
inline void OpenhabLight::set_can_rgb(bool value) {
  _internal_set_can_rgb(value);
  // @@protoc_insertion_point(field_set:OpenhabLight.can_rgb)
}
inline bool OpenhabLight::_internal_can_rgb() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.can_rgb_;
}
inline void OpenhabLight::_internal_set_can_rgb(bool value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_rgb_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_general_2eproto_2epb_2eh
