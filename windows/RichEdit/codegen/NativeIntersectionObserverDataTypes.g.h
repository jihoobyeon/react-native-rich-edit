
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

struct IntersectionObserverSpec_NativeIntersectionObserverEntry {
    double intersectionObserverId;
     targetInstanceHandle;
    std::vector<double> targetRect;
    std::vector<double> rootRect;
    std::optional<std::vector<double>> intersectionRect;
    bool isIntersectingAboveThresholds;
    double time;
};

struct IntersectionObserverSpec_NativeIntersectionObserverObserveOptions {
    double intersectionObserverId;
    std::optional<> rootShadowNode;
     targetShadowNode;
    std::vector<double> thresholds;
    std::optional<std::vector<double>> rootThresholds;
};

} // namespace RichEditCodegen
