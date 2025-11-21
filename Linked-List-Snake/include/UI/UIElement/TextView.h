#pragma once

#include "UI/UIElement/UIView.h"

namespace UI
{
	using namespace sf;

	namespace UIElement
	{
		enum class FontType
		{
			BUBBLE_BOBBLE,
			DS_DIGIB,
		};

		class TextView : public UIView
		{
			private:
				static const int default_font_size = 55;

				static Font font_bubble_bobble;
				static Font font_DS_DIGIB;

				Text text;

				static void loadFont();

				void setFont(FontType font_type);
				void setFontSize(int font_size);
				void setTextPosition(Vector2f position);
				void setTextColor(Color color);

			public:
				TextView();
				virtual ~TextView();

				static void initializeTextView();

				virtual void initialize(String text_value, Vector2f position, FontType font_type = FontType::BUBBLE_BOBBLE, int font_size = default_font_size, Color color = Color::White);
				virtual void update() override;
				virtual void render() override;

				void setText(String text_value);
				void setTextCentreAligned();
		};
	}
}