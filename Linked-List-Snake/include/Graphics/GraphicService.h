#pragma once

#include <SFML/Graphics.hpp>

namespace Graphics
{
	using namespace sf;
	using namespace std;

	class GraphicService
	{
		private:
			const int frame_rate = 60;

			const string game_window_title = "Outscal Presents - Snake Game";

			const int game_window_width = 1920;
			const int game_window_height = 1080;

			const Color window_color = Color(200, 200, 0, 255);

			VideoMode video_mode;
			RenderWindow* game_window;

			void configureVideoMode();
			void onDestroy();

		public:
			GraphicService();
			~GraphicService();

			RenderWindow* createGameWindow();

			void initialize();
			void update();
			void render();
			bool isGameWindowOpen();
			void setFrameRate(int);

			RenderWindow* getGameWindow();
	};
}