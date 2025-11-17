#pragma once

#include "UI/UIElement/ImageView.h"
#include "Player/Direction.h"

namespace Player
{
	using namespace UI::UIElement;
	using namespace sf;

	class BodyPart
	{
		protected:
			ImageView* bodypart_image;

			Vector2i grid_position;
			Direction direction;

			float bodypart_width;
			float bodypart_height;

			void createBodyPartImage();
			void initializeBodyPartImage();
			void destroy();

			Vector2f getBodyPartScreenPosition();
			float getRotationAngle();

			Vector2i getNextPositionUp();
			Vector2i getNextPositionDown();
			Vector2i getNextPositionLeft();
			Vector2i getNextPositionRight();

		public:
			BodyPart();
			~BodyPart();

			void initialize(float width, float height, Vector2i pos, Direction dir);
			void render();
			void update();

			void setDirection(Direction direction);
			void updatePosition();

			Direction getDirection();
			void setPosition(Vector2i position);
			Vector2i getPosition();
			Vector2i getNextPosition();
	};
}