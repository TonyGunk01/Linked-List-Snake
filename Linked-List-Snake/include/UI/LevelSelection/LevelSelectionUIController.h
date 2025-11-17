#pragma once

#include <SFML/Graphics.hpp>
#include "../Interface/IUIController.h"
#include "../UIElement/ButtonView.h"
#include "../UIElement/ImageView.h"

namespace UI
{
	namespace LevelSelection
	{
		using namespace UIElement;
		using namespace Interface;

		class LevelSelectionUIController : public IUIController
		{
			private:
				const float button_width = 400.0f;
				const float button_height = 140.0f;

				const float level_one_button_y_position = 500.0f;
				const float level_two_button_y_position = 700.0f;
				const float menu_button_y_position = 900.0f;

				const float background_alpha = 85.0f;

				ImageView* background_image;

				ButtonView* level_one_button;
				ButtonView* level_two_button;
				ButtonView* menu_button;

				void createImage();
				void createButtons();
				void initializeBackgroundImage();
				void initializeButtons();
				void registerButtonCallback();
				float calculateLeftOffsetForButton();

				void levelOneButtonCallback();
				void levelTwoButtonCallback();
				void menuButtonCallback();

				void destroy();

			public:
				LevelSelectionUIController();
				~LevelSelectionUIController();

				void initialize() override;
				void update() override;
				void render() override;
				void show() override;
		};
	}
}