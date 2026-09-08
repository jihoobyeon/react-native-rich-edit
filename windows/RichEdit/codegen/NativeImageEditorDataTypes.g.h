
/*
 * This file is auto-generated from a NativeModule spec file in js.
 *
 * This is a C++ Spec class that should be used with MakeTurboModuleProvider to register native modules
 * in a way that also verifies at compile time that the native module matches the interface required
 * by the TurboModule JS spec.
 */
#pragma once
// clang-format off

#include <string>
#include <optional>
#include <functional>
#include <vector>

namespace RichEditCodegen {

struct ImageEditorSpec_Options_offset {
    double x;
    double y;
};

struct ImageEditorSpec_Options_size {
    double width;
    double height;
};

struct ImageEditorSpec_Options_displaySize {
    double width;
    double height;
};

struct ImageEditorSpec_Options {
    ImageEditorSpec_Options_offset offset;
    ImageEditorSpec_Options_size size;
    std::optional<ImageEditorSpec_Options_displaySize> displaySize;
    std::optional<std::string> resizeMode;
    std::optional<bool> allowExternalStorage;
};

} // namespace RichEditCodegen
