#pragma once

#include "UI/UIElement/ImageView.h"
#include <functional>

namespace UI
{
	using namespace sf;
	using namespace std;

	namespace UIElement
	{
		class ButtonView : public ImageView
		{
			private:
				using CallbackFunction = function<void()>;

				CallbackFunction callback_function = nullptr;

				void printButtonClicked();

			protected:
				String button_title;

				virtual void handleButtonInteraction();
				virtual bool clickedButton(Sprite* button_sprite, Vector2f mouse_position);

			public:
				ButtonView();
				virtual ~ButtonView();

				virtual void initialize(String title, String texture_path, float button_width, float button_height, Vector2f position);
				virtual void update() override;
				virtual void render() override;

				void registerCallbackFuntion(CallbackFunction button_callback);
		};
	}
}