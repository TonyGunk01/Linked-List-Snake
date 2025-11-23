#pragma once

#include <SFML/System/Vector2.hpp>
#include "LinkedListLib/Node.h"

namespace LinkedListLib
{
	using namespace sf;
	using namespace std;

	enum class Operation
	{
		HEAD,
		MID,
		TAIL,
	};

	class LinkedList
	{
		protected:
			virtual Node* createNode() = 0;
			void initializeNode(Node* new_node, Node* reference_node, Operation operation);
			Vector2i getNewNodePosition(Node* reference_node, Operation operation);
			Direction getReverseDirection(Direction reference_direction);

			void updateNodes(Direction directionToSet);
			int findMiddleNode();

			Node* head_node;
			Vector2i default_position;
			Direction default_direction;

			float node_width;
			float node_height;
			int linked_list_size;

		public:
			LinkedList();
			virtual ~LinkedList();

			void initialize(float width, float height, Vector2i position, Direction direction);
			void render();

			virtual void insertNodeAtTail() = 0;
			virtual void insertNodeAtHead() = 0;
			virtual void insertNodeAtMiddle() = 0;
			virtual void insertNodeAtIndex(int index) = 0;
			void shiftNodesAfterInsertion(Node* new_node, Node* cur_node, Node* prev_node);

			virtual void removeNodeAtTail() = 0;
			virtual void removeNodeAtHead() = 0;
			virtual void removeNodeAtMiddle() = 0;
			virtual void removeNodeAtIndex(int index) = 0;
			virtual void removeAllNodes() = 0;
			virtual void removeHalfNodes() = 0;
			void shiftNodesAfterRemoval(Node* cur_node);

			Node* findNodeAtIndex(int index);
			virtual Direction reverse() = 0;
			virtual void updateNodePosition() = 0;
			virtual void updateNodeDirection(Direction direction_to_set);

			bool processNodeCollision();
			Node* getHeadNode();
			int getLinkedListSize();
			void reverseNodeDirections();

			vector<Vector2i> getNodesPositionList();
	};
}