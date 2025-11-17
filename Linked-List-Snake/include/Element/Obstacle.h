#pragma once

#include <SFML/Graphics.hpp>
#include "UI/UIElement/ImageView.h"

namespace Element
{
	using namespace UI::UIElement;
	using namespace sf;

	class Obstacle
	{
		private:
			ImageView* obstacle_image;
			Vector2i grid_position;

			float cell_width;
			float cell_height;

			void initializeObstacleImage();
			Vector2f getObstacleImagePosition();

		public:
			Obstacle();
			~Obstacle();
			
			void initialize(Vector2i grid_pos, float width, float height);
			void update();
			void render();
	};
}