
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

struct PushNotificationManagerIOSSpec_Notification {
    std::optional<std::string> alertTitle;
    std::optional<std::string> alertBody;
    std::optional<::React::JSValue> userInfo;
    std::optional<std::string> category;
    std::optional<double> fireDate;
    std::optional<double> fireIntervalSeconds;
    std::optional<double> applicationIconBadgeNumber;
    std::optional<bool> isSilent;
    std::optional<std::string> soundName;
};

struct PushNotificationManagerIOSSpec_Permissions {
    bool alert;
    bool badge;
    bool sound;
};

struct PushNotificationManagerIOSSpec_requestPermissions_permission {
    bool alert;
    bool badge;
    bool sound;
};

} // namespace RichEditCodegen
