#pragma once

#include "Level/LevelService.h"
#include "Element/ElementData.h"

namespace Level
{
	using namespace Element;
    using namespace std;

    struct LevelData
    {
        LevelData(LevelNumber ind, vector<ElementData>* data_list)
        {
            level_index = ind;
            element_data_list = data_list;
        }

        LevelNumber level_index;
        vector<ElementData>* element_data_list;
    };
}