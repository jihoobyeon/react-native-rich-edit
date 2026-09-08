
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

struct NetworkingIOSSpec_sendRequest_query {
    std::string method;
    std::string url;
    ::React::JSValue data;
    ::React::JSValue headers;
    std::string responseType;
    bool incrementalUpdates;
    double timeout;
    bool withCredentials;
};

} // namespace RichEditCodegen
