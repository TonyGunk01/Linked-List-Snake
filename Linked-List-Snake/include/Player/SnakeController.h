#pragma once

#include "SFML/System/Vector2.hpp"
#include "Direction.h"
#include "LinkedList/Node.h"
#include "LinkedList/SingleLinkedList.h"

namespace Player
{
	using namespace sf;
	using namespace LinkedList;
	
	enum class SnakeState
	{
		ALIVE,
		DEAD,
	};

	enum class InputState
	{
		WAITING,
		PROCESSING
	};

	class SnakeController
	{
		private:
			const int initial_snake_length = 10;
			const float movement_frame_duration = 0.1f;
			const float restart_duration = 2.0f;

			const Vector2i default_position = Vector2i(25, 13);
			const Direction default_direction = Direction::RIGHT;

			float elapsed_duration;
			float restart_counter;

			SnakeState current_snake_state;
			Direction current_snake_direction;
			InputState current_input_state;

			SingleLinkedList* single_linked_list;

			void processPlayerInput();
			void updateSnakeDirection();
			void moveSnake();
			void processSnakeCollision();
			void handleRestart();
			void reset();
			void destroy();
			void createLinkedList();
			void delayedUpdate();

		public:
			SnakeController();
			~SnakeController();

			void initialize();
			void update();
			void render();

			void spawnSnake();
			void respawnSnake();
			void setSnakeState(SnakeState state);

			SnakeState getSnakeState();
	};
}