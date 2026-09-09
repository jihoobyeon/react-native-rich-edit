#include "pch.h"
#include "RichEdit.h"

namespace winrt::RichEdit::implementation
{
	struct RichEditComponentView : public winrt::implements<RichEditComponentView, winrt::IInspectable>, RichEditCodegen::BaseRichEdit<RichEditComponentView> {
		void InitializeContentIsland(const winrt::Microsoft::ReactNative::Composition::ContentIslandComponentView &islandView) noexcept {
			m_xamlIsland = winrt::Microsoft::UI::Xaml::XamlIsland{};
			m_richEditBox = winrt::Microsoft::UI::Xaml::Controls::RichEditBox{};

			auto tb = winrt::Microsoft::UI::Xaml::Controls::TextBlock{};
			tb.Text(L"다람쥐 헌 쳇바퀴에 타고파.");
			m_xamlIsland.Content(tb);
			islandView.Connect(m_xamlIsland.ContentIsland());
		}

	private:
		winrt::Microsoft::UI::Xaml::XamlIsland m_xamlIsland{ nullptr };
		winrt::Microsoft::UI::Xaml::Controls::RichEditBox m_richEditBox{ nullptr };
	};

	void RegisterRichEditComponentView(winrt::Microsoft::ReactNative::IReactPackageBuilder const &packageBuilder) noexcept {
		RichEditCodegen::RegisterRichEditNativeComponent<RichEditComponentView>(
			packageBuilder,
			[](const winrt::Microsoft::ReactNative::Composition::IReactCompositionViewComponentBuilder &builder){
				builder.SetContentIslandComponentViewInitializer([](const winrt::Microsoft::ReactNative::Composition::ContentIslandComponentView& islandView) noexcept {
						auto userData = winrt::make_self<RichEditComponentView>();
						userData->InitializeContentIsland(islandView);
						islandView.UserData(*userData);
					});
			}
		);
	}
} // namespace winrt::RichEdit::implementation