#include "Graphics/GraphicService.h"

namespace Graphics
{
	GraphicService::GraphicService()
	{
		game_window = nullptr;
	}

	GraphicService::~GraphicService()
	{
		onDestroy();
	}

	void GraphicService::initialize()
	{
		game_window = createGameWindow();
		setFrameRate(frame_rate);
	}

	RenderWindow* GraphicService::createGameWindow()
	{
		configureVideoMode();
		return new RenderWindow(video_mode, game_window_title, Style::Fullscreen);
	}

	void GraphicService::configureVideoMode()
	{
		video_mode = *(new VideoMode(game_window_width, game_window_height, VideoMode::getDesktopMode().bitsPerPixel));
	}

	void GraphicService::onDestroy()
	{
		delete game_window;
	}

	void GraphicService::setFrameRate(int frame_rate_to_set)
	{
		game_window->setFramerateLimit(frame_rate_to_set);
	}

	void GraphicService::update() { }

	void GraphicService::render() { }

	bool GraphicService::isGameWindowOpen()
	{
		return game_window->isOpen();
	}

	RenderWindow* GraphicService::getGameWindow()
	{
		return game_window;
	}
}