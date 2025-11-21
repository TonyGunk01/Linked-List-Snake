#pragma once

#include "UI/UIElement/UIView.h"

namespace UI
{
	using namespace sf;

	namespace UIElement
	{
		class ImageView : public UIView
		{
			protected:
				Texture image_texture;
				Sprite image_sprite;

			public:
				ImageView();
				virtual ~ImageView();

				virtual void initialize(String texture_path, float image_width, float image_height, Vector2f position);
				virtual void update() override;
				virtual void render() override;

				virtual void setTexture(String texture_path);
				virtual void setScale(float width, float height);
				virtual void setPosition(Vector2f position);
				virtual void setRotation(float rotation_angle);
				virtual void setOriginAtCentre();
				virtual void setImageAlpha(float alpha);
				virtual void setCentreAlinged();
		};
	}
}