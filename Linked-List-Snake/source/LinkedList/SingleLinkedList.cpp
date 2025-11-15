#include "LinkedList/SingleLinkedList.h"
#include "Player/BodyPart.h"
#include "Level/LevelView.h"

namespace LinkedList
{
	SingleLinkedList::SingleLinkedList()
	{

	}

	SingleLinkedList::~SingleLinkedList()
	{

	}

	void SingleLinkedList::initialize(float width, float height, Vector2i position, Direction direction)
	{
		node_width = width;
		node_height = height;
		default_position = position;
		default_direction = direction;
	}

	void SingleLinkedList::render()
	{

	}

	Node* SingleLinkedList::createNode()
	{
		return new Node();
	}
}