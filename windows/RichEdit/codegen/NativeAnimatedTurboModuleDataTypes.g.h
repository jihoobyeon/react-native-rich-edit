
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

struct AnimatedTurboModuleSpec_EndResult {
    bool finished;
    std::optional<double> value;
    std::optional<double> offset;
};

struct AnimatedTurboModuleSpec_EventMapping {
    std::vector<std::string> nativeEventPath;
    std::optional<double> animatedValueTag;
};

} // namespace RichEditCodegen
