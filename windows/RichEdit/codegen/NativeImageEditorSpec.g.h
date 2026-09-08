
/*
 * This file is auto-generated from a NativeModule spec file in js.
 *
 * This is a C++ Spec class that should be used with MakeTurboModuleProvider to register native modules
 * in a way that also verifies at compile time that the native module matches the interface required
 * by the TurboModule JS spec.
 */
#pragma once
// clang-format off

// #include "NativeImageEditorDataTypes.g.h" before this file to use the generated type definition
#include <NativeModules.h>
#include <tuple>

namespace RichEditCodegen {

inline winrt::Microsoft::ReactNative::FieldMap GetStructInfo(ImageEditorSpec_Options_offset*) noexcept {
    winrt::Microsoft::ReactNative::FieldMap fieldMap {
        {L"x", &ImageEditorSpec_Options_offset::x},
        {L"y", &ImageEditorSpec_Options_offset::y},
    };
    return fieldMap;
}

inline winrt::Microsoft::ReactNative::FieldMap GetStructInfo(ImageEditorSpec_Options_size*) noexcept {
    winrt::Microsoft::ReactNative::FieldMap fieldMap {
        {L"width", &ImageEditorSpec_Options_size::width},
        {L"height", &ImageEditorSpec_Options_size::height},
    };
    return fieldMap;
}

inline winrt::Microsoft::ReactNative::FieldMap GetStructInfo(ImageEditorSpec_Options_displaySize*) noexcept {
    winrt::Microsoft::ReactNative::FieldMap fieldMap {
        {L"width", &ImageEditorSpec_Options_displaySize::width},
        {L"height", &ImageEditorSpec_Options_displaySize::height},
    };
    return fieldMap;
}

inline winrt::Microsoft::ReactNative::FieldMap GetStructInfo(ImageEditorSpec_Options*) noexcept {
    winrt::Microsoft::ReactNative::FieldMap fieldMap {
        {L"offset", &ImageEditorSpec_Options::offset},
        {L"size", &ImageEditorSpec_Options::size},
        {L"displaySize", &ImageEditorSpec_Options::displaySize},
        {L"resizeMode", &ImageEditorSpec_Options::resizeMode},
        {L"allowExternalStorage", &ImageEditorSpec_Options::allowExternalStorage},
    };
    return fieldMap;
}

struct ImageEditorSpec : winrt::Microsoft::ReactNative::TurboModuleSpec {
  static constexpr auto methods = std::tuple{
      Method<void(std::string, ImageEditorSpec_Options, Callback<std::string>, Callback<std::string>) noexcept>{0, L"cropImage"},
  };

  template <class TModule>
  static constexpr void ValidateModule() noexcept {
    constexpr auto methodCheckResults = CheckMethods<TModule, ImageEditorSpec>();

    REACT_SHOW_METHOD_SPEC_ERRORS(
          0,
          "cropImage",
          "    REACT_METHOD(cropImage) void cropImage(std::string uri, ImageEditorSpec_Options && cropData, std::function<void(std::string)> const & successCallback, std::function<void(std::string)> const & errorCallback) noexcept { /* implementation */ }\n"
          "    REACT_METHOD(cropImage) static void cropImage(std::string uri, ImageEditorSpec_Options && cropData, std::function<void(std::string)> const & successCallback, std::function<void(std::string)> const & errorCallback) noexcept { /* implementation */ }\n");
  }
};

} // namespace RichEditCodegen
