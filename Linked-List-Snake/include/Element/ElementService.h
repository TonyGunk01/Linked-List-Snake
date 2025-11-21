#pragma once

#include <vector>
#include <SFML/System/Vector2.hpp>
#include "LinkedList/Node.h"

namespace Element
{
	class Obstacle;
	struct ElementData;

	using namespace sf;
	using namespace std;
	using namespace LinkedList;

	class ElementService
	{
		private:
			vector<Obstacle*> obstacle_list;

			void spawnObstacle(Vector2i position, float cell_width, float cell_height);
			void destroy();

		public:
			ElementService();
			~ElementService();

			void initialize();
			void update();
			void render();

			void reset();
			const void spawnElements(vector<ElementData>& element_data_list, float cell_width, float cell_height);
			vector<Vector2i> getElementsPositionList();

			bool processElementsCollision(Node* head_node);
	};
}