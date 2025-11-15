#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

namespace Event
{
	using namespace sf;

	enum class ButtonState
	{
		PRESSED,
		HELD,
		RELEASED,
	};

	class EventService
	{
		private:
			Event game_event;
			RenderWindow* game_window;

			ButtonState left_mouse_button_state;
			ButtonState right_mouse_button_state;

			bool isGameWindowOpen();
			bool gameWindowWasClosed();
			bool hasQuitGame();
			bool isKeyboardEvent();
			void updateMouseButtonsState(ButtonState& current_button_state, Mouse::Button mouse_button);

		public:
			EventService();
			~EventService();

			void initialize();
			void update();
			void processEvents();

			bool pressedEscapeKey();
			bool pressedLeftArrowKey();
			bool pressedRightArrowKey();
			bool pressedUpArrowKey();
			bool pressedDownArrowKey();
			bool pressedLeftMouseButton();
			bool pressedRightMouseButton();
	};
}