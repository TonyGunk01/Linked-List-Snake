#pragma once

#include "SFML/Audio.hpp"

namespace Sounds
{
	using namespace sf;

	enum class SoundType
	{
		BUTTON_CLICK,
	};

	class SoundService
	{
		private:
			const int background_music_volume = 30;

			Music background_music;
			Sound sound_effect;
			SoundBuffer buffer_button_click;

			void loadBackgroundMusicFromFile();
			void loadSoundFromFile();

		public:
			void initialize();

			void playSound(SoundType soundType);
			void playBackgroundMusic();
	};
}