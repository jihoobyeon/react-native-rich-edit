
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

struct ActionSheetManagerSpec_showActionSheetWithOptions_options {
    std::optional<std::string> title;
    std::optional<std::string> message;
    std::optional<std::vector<std::string>> options;
    std::optional<std::vector<double>> destructiveButtonIndices;
    std::optional<double> cancelButtonIndex;
    std::optional<double> anchor;
    std::optional<double> tintColor;
    std::optional<double> cancelButtonTintColor;
    std::optional<double> disabledButtonTintColor;
    std::optional<std::string> userInterfaceStyle;
    std::optional<std::vector<double>> disabledButtonIndices;
};

struct ActionSheetManagerSpec_showShareActionSheetWithOptions_options {
    std::optional<std::string> message;
    std::optional<std::string> url;
    std::optional<std::string> subject;
    std::optional<double> anchor;
    std::optional<double> tintColor;
    std::optional<double> cancelButtonTintColor;
    std::optional<double> disabledButtonTintColor;
    std::optional<std::vector<std::string>> excludedActivityTypes;
    std::optional<std::string> userInterfaceStyle;
};

struct ActionSheetManagerSpec_showShareActionSheetWithOptions_failureCallback_error {
    std::string domain;
    std::string code;
    std::optional<::React::JSValue> userInfo;
    std::string message;
};

} // namespace RichEditCodegen
