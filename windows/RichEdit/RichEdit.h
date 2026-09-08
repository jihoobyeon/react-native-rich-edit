#pragma once

#include "pch.h"
#include "codegen/react/components/RichEditComponent/RichEdit.g.h"
#include <winrt/Microsoft.UI.Xaml.Controls.h>

namespace winrt::RichEdit {
	void RegisterRichEditComponentView(winrt::Microsoft::ReactNative::IReactPackageBuilder& packageBuilder) noexcept;
}