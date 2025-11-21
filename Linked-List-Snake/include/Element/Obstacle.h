#pragma once

#include "UI/UIElement/ImageView.h"

namespace Element
{
    using namespace sf;
	using namespace UI::UIElement;

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

            Vector2i getObstaclePosition();
    };
}