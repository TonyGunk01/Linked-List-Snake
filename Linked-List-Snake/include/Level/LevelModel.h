#pragma once

#include "SFML/System/Vector2.hpp"
#include "Level/LevelData.h"
#include "Element/ElementData.h"
#include "Element/ElementService.h"
#include <vector>

namespace Level
{
	using namespace std;
	using namespace Element;
    using namespace sf;

	class LevelModel
	{
		private:
            vector<ElementData> level_one_element_list = {};

            vector<ElementData> level_two_element_list =
            {
                ElementData(ElementType::OBSTACLE, Vector2i(1, 1)),
                ElementData(ElementType::OBSTACLE, Vector2i(2, 1)),
                ElementData(ElementType::OBSTACLE, Vector2i(3, 1)),
                ElementData(ElementType::OBSTACLE, Vector2i(1, 2)),
                ElementData(ElementType::OBSTACLE, Vector2i(1, 3)),

                ElementData(ElementType::OBSTACLE, Vector2i(48, 1)),
                ElementData(ElementType::OBSTACLE, Vector2i(48, 2)),
                ElementData(ElementType::OBSTACLE, Vector2i(48, 3)),
                ElementData(ElementType::OBSTACLE, Vector2i(47, 1)),
                ElementData(ElementType::OBSTACLE, Vector2i(46, 1)),

                ElementData(ElementType::OBSTACLE, Vector2i(1, 26)),
                ElementData(ElementType::OBSTACLE, Vector2i(1, 25)),
                ElementData(ElementType::OBSTACLE, Vector2i(1, 24)),
                ElementData(ElementType::OBSTACLE, Vector2i(2, 26)),
                ElementData(ElementType::OBSTACLE, Vector2i(3, 26)),

                ElementData(ElementType::OBSTACLE, Vector2i(48, 26)),
                ElementData(ElementType::OBSTACLE, Vector2i(48, 25)),
                ElementData(ElementType::OBSTACLE, Vector2i(48, 24)),
                ElementData(ElementType::OBSTACLE, Vector2i(47, 26)),
                ElementData(ElementType::OBSTACLE, Vector2i(46, 26)),

                ElementData(ElementType::OBSTACLE, Vector2i(21, 11)),
                ElementData(ElementType::OBSTACLE, Vector2i(22, 11)),
                ElementData(ElementType::OBSTACLE, Vector2i(23, 11)),
                ElementData(ElementType::OBSTACLE, Vector2i(24, 11)),
                ElementData(ElementType::OBSTACLE, Vector2i(25, 11)),
                ElementData(ElementType::OBSTACLE, Vector2i(26, 11)),
                ElementData(ElementType::OBSTACLE, Vector2i(27, 11)),
                ElementData(ElementType::OBSTACLE, Vector2i(28, 11)),
                ElementData(ElementType::OBSTACLE, Vector2i(29, 11)),

                ElementData(ElementType::OBSTACLE, Vector2i(21, 15)),
                ElementData(ElementType::OBSTACLE, Vector2i(22, 15)),
                ElementData(ElementType::OBSTACLE, Vector2i(23, 15)),
                ElementData(ElementType::OBSTACLE, Vector2i(24, 15)),
                ElementData(ElementType::OBSTACLE, Vector2i(25, 15)),
                ElementData(ElementType::OBSTACLE, Vector2i(26, 15)),
                ElementData(ElementType::OBSTACLE, Vector2i(27, 15)),
                ElementData(ElementType::OBSTACLE, Vector2i(28, 15)),
                ElementData(ElementType::OBSTACLE, Vector2i(29, 15)),
            };

			vector<LevelData> level_configurations;

			float cell_width;
			float cell_height;

			void initializeLevelData();
	
		public:
			static const int number_of_rows = 28;
			static const int number_of_columns = 50;

			LevelModel();
			~LevelModel();

			void initialize(int width, int height);

            vector<ElementData>& getElementDataList(int level_to_load);
			float getCellWidth();
			float getCellHeight();
	};
}