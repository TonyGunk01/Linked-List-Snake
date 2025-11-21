#include "UI/UIElement/RectangleShapeView.h"

namespace UI
{
	namespace UIElement
	{
		RectangleShapeView::RectangleShapeView() = default;

		RectangleShapeView::~RectangleShapeView() = default;

		void RectangleShapeView::initialize(Vector2f rectangle_size, Vector2f rectangle_position, int outline_thickness, Color fill_color, Color outline_color)
		{
			UIView::initialize();

			setSize(rectangle_size);
			setPosition(rectangle_position);
			setOutlineThickness(outline_thickness);
			setFillColor(fill_color);
			setOutlineColor(outline_color);
		}

		void RectangleShapeView::update()
		{
			UIView::update();
		}

		void RectangleShapeView::render()
		{
			UIView::render();

			if (ui_state == UIState::VISIBLE)
				game_window->draw(rectangle_shape);
		}

		void RectangleShapeView::setSize(Vector2f rectangle_size)
		{
			rectangle_shape.setSize(rectangle_size);
		}

		void RectangleShapeView::setPosition(Vector2f rectangle_position)
		{
			rectangle_shape.setPosition(rectangle_position);
		}

		void RectangleShapeView::setFillColor(Color fill_color)
		{
			rectangle_shape.setFillColor(fill_color);
		}

		void RectangleShapeView::setOutlineColor(Color outline_color)
		{
			rectangle_shape.setOutlineColor(outline_color);
		}

		void RectangleShapeView::setOutlineThickness(int outline_thickness)
		{
			rectangle_shape.setOutlineThickness(outline_thickness);
		}
	}
}