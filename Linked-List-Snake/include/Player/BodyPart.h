#pragma once

#include "UI/UIElement/ImageView.h"
#include "Player/Direction.h"

namespace Player
{
	using namespace UI::UIElement;
	using namespace sf;
	class BodyPart
	{
		private:

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

		public:
			BodyPart();
			~BodyPart();

			void initialize(float width, float height, Vector2i pos, Direction dir);
			void render();
			void update();

			void setDirection(Direction direction);
			void updatePosition();
	};
}