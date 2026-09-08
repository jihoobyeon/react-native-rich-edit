
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

struct DeviceInfoSpec_DisplayMetrics {
    double width;
    double height;
    double scale;
    double fontScale;
};

struct DeviceInfoSpec_DisplayMetricsAndroid {
    double width;
    double height;
    double scale;
    double fontScale;
    double densityDpi;
};

struct DeviceInfoSpec_DimensionsPayload {
    std::optional<DeviceInfoSpec_DisplayMetrics> window;
    std::optional<DeviceInfoSpec_DisplayMetrics> screen;
    std::optional<DeviceInfoSpec_DisplayMetricsAndroid> windowPhysicalPixels;
    std::optional<DeviceInfoSpec_DisplayMetricsAndroid> screenPhysicalPixels;
};

struct DeviceInfoSpec_DeviceInfoConstants {
    DeviceInfoSpec_DimensionsPayload Dimensions;
    std::optional<bool> isEdgeToEdge;
    std::optional<bool> isIPhoneX_deprecated;
};

} // namespace RichEditCodegen
