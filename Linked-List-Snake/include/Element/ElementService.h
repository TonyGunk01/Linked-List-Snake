#pragma once

#include <vector>
#include "Element/Obstacle.h"

namespace Element
{
	class Obstacle;
	struct ElementData;

	using namespace std;

	class ElementService
	{
		private:
			vector<Obstacle*> obstacle_list;

			void spawnObstacle(Vector2i position, float cell_width, float cell_height);

		public:
			ElementService();
			~ElementService();

			void initialize();
			void update();
			void render();

			const void spawnElements(vector<ElementData>& element_data, float cell_width, float cell_height);
	};
}