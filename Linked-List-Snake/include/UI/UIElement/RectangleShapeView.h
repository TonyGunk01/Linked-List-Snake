#pragma once

#include "UIView.h"

namespace UI
{
	using namespace sf;

	namespace UIElement
	{
		class RectangleShapeView : public UIView
		{
			protected:
				RectangleShape rectangle_shape;

			public:
				RectangleShapeView();
				virtual ~RectangleShapeView();

				virtual void initialize(Vector2f rectangle_size, Vector2f rectangle_position, int outline_thikness = 0, Color fill_color = Color::Transparent, Color outline_color = Color::Transparent);
				virtual void update() override;
				virtual void render() override;

				virtual void setSize(Vector2f rectangle_size);
				virtual void setPosition(Vector2f rectangle_position);
				virtual void setFillColor(Color fill_color);
				virtual void setOutlineColor(Color outline_color);
				virtual void setOutlineThickness(int outline_thikness);
		};
	}
}