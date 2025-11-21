#pragma once

#include <SFML/Graphics.hpp>
#include "UI/UIElement/RectangleShapeView.h"

namespace Level
{
	using namespace sf;
	using namespace UI::UIElement;

    class LevelView
    {
        private:
            const Color background_color = Color(180, 200, 160);
            const Color border_color = Color::Black;

            RectangleShapeView* background_rectangle;
            RectangleShapeView* border_rectangle;

            float grid_width;
            float grid_height;

            void createViews();
            void initializeBackground();
            void initializeBorder();
            void calculateGridExtents();
            void destroy();

        public:
            static const int border_thickness = 10;
            static const int border_offset_left = 40;
            static const int border_offset_top = 100;
            static const int border_offset_bottom = 40;

            LevelView();
            ~LevelView();

            void initialize();
            void update();
            void render();

            float getGridWidth();
            float getGridHeight();
    };
}