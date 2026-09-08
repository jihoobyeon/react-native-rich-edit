
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

struct PlatformConstantsIOSSpec_PlatformConstantsIOS_reactNativeVersion {
    double major;
    double minor;
    double patch;
    std::optional<std::string> prerelease;
};

struct PlatformConstantsIOSSpec_PlatformConstantsIOS {
    bool isTesting;
    std::optional<bool> isDisableAnimations;
    PlatformConstantsIOSSpec_PlatformConstantsIOS_reactNativeVersion reactNativeVersion;
    bool forceTouchAvailable;
    std::string osVersion;
    std::string systemName;
    std::string interfaceIdiom;
    std::optional<bool> isMacCatalyst;
};

} // namespace RichEditCodegen
