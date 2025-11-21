#pragma once

#include <SFML/Graphics.hpp>
#include "UI/UIElement/ImageView.h"

namespace Food
{
    enum class FoodType;

	using namespace sf;
	using namespace UI::UIElement;

    class FoodItem
    {
        private:
            ImageView* food_image;

            Vector2i grid_position;

            float cell_width;
            float cell_height;

            FoodType food_type;

            void initializeFoodImage();
            String getFoodTexturePath();
            Vector2f getFoodImagePosition();

        public:
            static const int number_of_foods = 8;
            static const int number_of_healthy_foods = 4;

            FoodItem();
            ~FoodItem();

            void initialize(Vector2i grid_pos, float width, float height, FoodType type);
            void update();
            void render();

            FoodType getFoodType();
            Vector2i getFoodPosition();
    };
}