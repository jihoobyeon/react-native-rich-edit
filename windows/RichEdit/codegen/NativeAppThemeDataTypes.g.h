
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

struct AppThemeSpec_HighContrastColors {
    std::string ButtonFaceColor;
    std::string ButtonTextColor;
    std::string GrayTextColor;
    std::string HighlightColor;
    std::string HighlightTextColor;
    std::string HotlightColor;
    std::string WindowColor;
    std::string WindowTextColor;
};

struct AppThemeSpec_AppThemeData {
    bool isHighContrast;
    AppThemeSpec_HighContrastColors highContrastColors;
};

} // namespace RichEditCodegen
