#pragma once

#include "pch.h"
#include "codegen/react/components/RichEditComponent/RichEdit.g.h"
#include <winrt/Microsoft.UI.Xaml.Controls.h>

namespace winrt::RichEdit::implementation {
	void RegisterRichEditComponentView(winrt::Microsoft::ReactNative::IReactPackageBuilder const &packageBuilder) noexcept;
}