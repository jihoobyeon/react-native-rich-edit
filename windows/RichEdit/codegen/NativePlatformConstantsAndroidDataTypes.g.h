
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

struct PlatformConstantsAndroidSpec_ReactNativeVersionAndroid {
    double major;
    double minor;
    double patch;
    std::optional<std::string> prerelease;
};

struct PlatformConstantsAndroidSpec_PlatformConstantsAndroid {
    bool isTesting;
    std::optional<bool> isDisableAnimations;
    PlatformConstantsAndroidSpec_ReactNativeVersionAndroid reactNativeVersion;
    double Version;
    std::string Release;
    std::string Serial;
    std::string Fingerprint;
    std::string Model;
    std::optional<std::string> ServerHost;
    std::string uiMode;
    std::string Brand;
    std::string Manufacturer;
};

} // namespace RichEditCodegen
