#pragma once

#include "Node.h"
#include "SFML/System/Vector2.hpp"

namespace LinkedList
{
	class SingleLinkedList
	{
		private:
			Node* head_node;

			float node_width;
			float node_height;

			Vector2i default_position;
			Direction default_direction;

			Node* createNode();

		public:
			SingleLinkedList();
			~SingleLinkedList();

			void initialize(float width, float height, Vector2i position, Direction direction);
			void render();

			void insertNodeAtTail();

			void updateNodeDirection(Direction direction_to_set);
			void updateNodePosition();
			void removeNodeAtHead();
			void removeAllNodes();

			bool processNodeCollision();
	};
}