
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

struct DialogManagerWindowsSpec_DialogOptions {
    std::optional<std::string> title;
    std::optional<std::string> message;
    std::optional<std::string> buttonPositive;
    std::optional<std::string> buttonNegative;
    std::optional<std::string> buttonNeutral;
    std::optional<std::vector<std::string>> items;
    std::optional<bool> cancelable;
    std::optional<int> defaultButton;
    std::optional<int> rootTag;
};

struct DialogManagerWindowsSpec_Constants {
    std::string buttonClicked;
    std::string dismissed;
    int buttonPositive;
    int buttonNegative;
    int buttonNeutral;
};

} // namespace RichEditCodegen
