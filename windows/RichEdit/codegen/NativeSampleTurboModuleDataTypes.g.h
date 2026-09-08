
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

struct SampleTurboModuleSpec_ObjectStruct {
    double a;
    std::string b;
    std::optional<std::string> c;
};

struct SampleTurboModuleSpec_Constants {
    bool const1;
    double const2;
    std::string const3;
};

} // namespace RichEditCodegen
