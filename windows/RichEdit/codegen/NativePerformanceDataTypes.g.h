
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

struct PerformanceSpec_NativeMemoryInfo {

};

struct PerformanceSpec_PerformanceObserverInit {
    std::optional<std::vector<double>> entryTypes;
    std::optional<double> type;
    std::optional<bool> buffered;
    std::optional<double> durationThreshold;
};

struct PerformanceSpec_RawPerformanceEntry {
    std::string name;
    double entryType;
    double startTime;
    double duration;
    std::optional<double> processingStart;
    std::optional<double> processingEnd;
    std::optional<double> interactionId;
    std::optional<double> fetchStart;
    std::optional<double> requestStart;
    std::optional<double> connectStart;
    std::optional<double> connectEnd;
    std::optional<double> responseStart;
    std::optional<double> responseEnd;
    std::optional<double> responseStatus;
};

struct PerformanceSpec_ReactNativeStartupTiming {

};

} // namespace RichEditCodegen
