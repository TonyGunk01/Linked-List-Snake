#pragma once

#include <SFML/Graphics.hpp>
#include "UI/Interface/IUIController.h"
#include "UI//UIElement/ButtonView.h"
#include "UI//UIElement/TextView.h"
#include "UI//UIElement/ImageView.h"

namespace UI
{
	using namespace sf;
	using namespace UI::UIElement;
	using namespace Interface;
	
	namespace Credits
	{
		class CreditsScreenUIController : public IUIController
		{
			private:
				const String game_title = "Outscal Presents - Snake Game";

				const float text_top_offset = 240.f;
				const int font_size = 100;

				const float button_width = 400.f;
				const float button_height = 140.f;

				const float menu_button_y_position = 500.f;
				const float quit_button_y_position = 700.f;

				const float background_alpha = 85.f;

				const Color text_color = Color(0, 200, 0);

				ImageView* background_image;
				TextView* title_text;

				ButtonView* menu_button;
				ButtonView* quit_button;

				void createText();
				void createImage();
				void createButtons();

				void initializeText();
				void initializeBackgroundImage();
				void initializeButtons();

				void registerButtonCallback();
				float calculateLeftOffsetForButton();

				float calculateTextWidth(String text_value);

				void menuButtonCallback();
				void quitButtonCallback();

				void destroy();

			public:
				CreditsScreenUIController();
				~CreditsScreenUIController();

				void initialize() override;
				void update() override;
				void render() override;
				void show() override;
		};
	}
}