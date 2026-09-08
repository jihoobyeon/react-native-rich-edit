#include "pch.h"
#include "RichEdit.h"

namespace winrt::RichEdit
{
	struct RichEditComponentView : public winrt::implements<RichEditComponentView, winrt::IInspectable>, RichEditCodegen::BaseRichEdit<RichEditComponentView> {
		void InitializeContentIsland(const winrt::Microsoft::ReactNative::Composition::ContentIslandComponentView& islandView) noexcept {
			m_xamlIsland = winrt::Microsoft::UI::Xaml::XamlIsland{};
			m_richEditBox = winrt::Microsoft::UI::Xaml::Controls::RichEditBox{};
			m_xamlIsland.Content(m_richEditBox);
			islandView.Connect(m_xamlIsland.ContentIsland());
		}

		private:
			winrt::Microsoft::UI::Xaml::XamlIsland m_xamlIsland{ nullptr };
			winrt::Microsoft::UI::Xaml::Controls::RichEditBox m_richEditBox{ nullptr };
	};

	void RegisterRichEditComponentView(winrt::Microsoft::ReactNative::IReactPackageBuilder& packageBuilder) noexcept {
		RichEditCodegen::RegisterRichEditNativeComponent<RichEditComponentView>(
			packageBuilder,
			[](const winrt::Microsoft::ReactNative::Composition::IReactCompositionViewComponentBuilder& builder) {}
		);
	}
} // namespace winrt::RichEdit