
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

struct AlertManagerSpec_Args {
    std::optional<std::string> title;
    std::optional<std::string> message;
    std::optional<std::vector<::React::JSValue>> buttons;
    std::optional<std::string> type;
    std::optional<std::string> defaultValue;
    std::optional<std::string> cancelButtonKey;
    std::optional<std::string> destructiveButtonKey;
    std::optional<std::string> preferredButtonKey;
    std::optional<std::string> keyboardType;
    std::optional<std::string> userInterfaceStyle;
};

} // namespace RichEditCodegen
