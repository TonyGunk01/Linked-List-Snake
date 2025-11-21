#pragma once

#include <SFML/Graphics.hpp>
#include "UI/UIElement/ImageView.h"
#include "Direction.h"

namespace Player
{
	using namespace sf;
	using namespace UI::UIElement;

	class BodyPart
	{
		protected:
			ImageView* bodypart_image;

			Vector2i grid_position;
			Direction direction;
			Direction previous_direction;

			float bodypart_width;
			float bodypart_height;

			void createBodyPartImage();
			void initializeBodyPartImage();
			Vector2f getBodyPartScreenPosition();
			float getRotationAngle();

			Vector2i getNextPositionUp();
			Vector2i getNextPositionDown();
			Vector2i getNextPositionLeft();
			Vector2i getNextPositionRight();

			void destroy();

		public:
			BodyPart();
			~BodyPart();

			void initialize(float width, float height, Vector2i pos, Direction dir);
			void updatePosition();
			void render();

			Direction getDirection();
			Direction getPreviousDirection();
			void setDirection(Direction direction);
			Vector2i getPosition();
			void setPosition(Vector2i position);

			Vector2i getNextPosition();
			Vector2i getPrevPosition();
	};
}