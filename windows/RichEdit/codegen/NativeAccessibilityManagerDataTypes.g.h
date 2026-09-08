
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

struct AccessibilityManagerSpec_setAccessibilityContentSizeMultipliers_JSMultipliers {
    std::optional<double> extraSmall;
    std::optional<double> small;
    std::optional<double> medium;
    std::optional<double> large;
    std::optional<double> extraLarge;
    std::optional<double> extraExtraLarge;
    std::optional<double> extraExtraExtraLarge;
    std::optional<double> accessibilityMedium;
    std::optional<double> accessibilityLarge;
    std::optional<double> accessibilityExtraLarge;
    std::optional<double> accessibilityExtraExtraLarge;
    std::optional<double> accessibilityExtraExtraExtraLarge;
};

struct AccessibilityManagerSpec_announceForAccessibilityWithOptions_options {
    std::optional<bool> queue;
};

} // namespace RichEditCodegen
