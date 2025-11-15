#include "LinkedList/SingleLinkedList.h"
#include "Player/BodyPart.h"
#include "Level/LevelView.h"
#include <iostream>

namespace LinkedList
{
	SingleLinkedList::SingleLinkedList()
	{
		head_node = nullptr;
	}

	SingleLinkedList::~SingleLinkedList() = default;

	void SingleLinkedList::initialize(float width, float height, Vector2i position, Direction direction)
	{
		node_width = width;
		node_height = height;
		default_position = position;
		default_direction = direction;
	}

	void SingleLinkedList::render()
	{
		Node* cur_node = head_node;

		while (cur_node != nullptr) 
		{
			cur_node->body_part.render();
			cur_node = cur_node->next;
		}
	}

	Node* SingleLinkedList::createNode()
	{
		return new Node();
	}

	void SingleLinkedList::insertNodeAtTail()
	{
		Node* new_node = createNode();
		Node* cur_node = head_node;

		if (cur_node == nullptr)
		{
			head_node = new_node;
			new_node->body_part.initialize(node_width, node_height, default_position, default_direction);
			return;
		}

		while (cur_node->next != nullptr)
			cur_node = cur_node->next;

		cur_node->next = new_node;
		new_node->body_part.initialize(node_width, node_height, default_position, default_direction);
	}
}