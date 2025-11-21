#pragma once

#include <SFML/Graphics.hpp>

namespace Global
{
	using namespace sf;

	class Config
	{
		public:
			static const String outscal_logo_texture_path;
			static const String background_texture_path;
			static const String obstacle_texture_path;
			static const String snake_body_texture_path;

			static const String apple_texture_path;
			static const String mango_texture_path;
			static const String orange_texture_path;
			static const String pizza_texture_path;
			static const String burger_texture_path;
			static const String cheese_texture_path;
			static const String poision_texture_path;
			static const String alcohol_texture_path;

			static const String play_button_texture_path;
			static const String instructions_button_texture_path;
			static const String quit_button_texture_path;
			static const String menu_button_texture_path;
			static const String level_one_button_texture_path;
			static const String level_two_button_texture_path;
			static const String single_linked_list_button_texture_path;
			static const String double_linked_list_button_texture_path;

			static const String bubble_bobble_font_path;
			static const String DS_DIGIB_font_path;

			static const String background_music_path;
			static const String button_click_sound_path;
			static const String pickup_sound_path;
			static const String death_sound_path;
	};
}