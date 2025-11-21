#pragma once

#include "SFML/Audio.hpp"

namespace Sounds
{
	using namespace sf;

	enum class SoundType
	{
		BUTTON_CLICK,
		PICKUP,
		DEATH,
	};

	class SoundService
	{
		private:
			const int background_music_volume = 30;

			Music background_music;
			Sound sound_effect;
			SoundBuffer buffer_button_click;
			SoundBuffer buffer_pickup;
			SoundBuffer buffer_death;

			void loadBackgroundMusicFromFile();
			void loadSoundFromFile();

		public:
			SoundService();

			void initialize();

			void playSound(SoundType soundType);
			void playBackgroundMusic();
	};
}