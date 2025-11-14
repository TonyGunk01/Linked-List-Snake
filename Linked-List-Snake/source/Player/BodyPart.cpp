#include "Player/BodyPart.h"

namespace Player
{
	BodyPart::BodyPart()
	{
		grid_position = Vector2i(0, 0);
		createBodyPartImage();
	}

	BodyPart::~BodyPart()
	{
		destroy();
	}

	void BodyPart::initialize(float width, float height, Vector2i pos, Direction dir)
	{
		bodypart_width = width;
		bodypart_height = height;
		direction = dir;
		grid_position = pos;

		initializeBodyPartImage();
	}

	void BodyPart::render()
	{
		bodypart_image->render();
	}

	void BodyPart::update()
	{

	}

	void BodyPart::createBodyPartImage()
	{
		bodypart_image = new ImageView();
	}

	void initializeBodyPartImage()
	{
		bodypart_image->initialize(Config::snake_body_texture_path, bodypart_width, bodypart_height, getGetBodyPartScreenPosition());
		bodypart_image->setOriginAtCentre();
	}

	void BodyPart::destroy()
	{
		delete bodypart_image;
	}
}