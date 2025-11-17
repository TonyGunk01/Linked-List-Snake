#pragma once

#include "Level/LevelService.h"
#include "Element/ElementData.h"
#include <vector>

namespace Level
{
	using namespace std;

    struct LevelData
    {
        LevelData(LevelNumber ind, vector<Element::ElementData>* data_list)
        {
            level_index = ind;
            element_data_list = data_list;
        }

        LevelNumber level_index;

        vector<Element::ElementData>* element_data_list;
    };
}