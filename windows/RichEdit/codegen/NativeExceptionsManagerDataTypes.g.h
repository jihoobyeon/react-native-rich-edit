
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

struct ExceptionsManagerSpec_StackFrame {
    std::optional<double> column;
    std::optional<std::string> file;
    std::optional<double> lineNumber;
    std::string methodName;
    std::optional<bool> collapse;
};

struct ExceptionsManagerSpec_ExceptionData {
    std::string message;
    std::optional<std::string> originalMessage;
    std::optional<std::string> name;
    std::optional<std::string> componentStack;
    std::vector<ExceptionsManagerSpec_StackFrame> stack;
    double id;
    bool isFatal;
    std::optional<::React::JSValue> extraData;
};

} // namespace RichEditCodegen
