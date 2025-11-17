#pragma once

#include <vector>
#include "LevelModel.h"

namespace Level
{
    class LevelView;

    class LevelController
    {
        private:
            LevelModel* level_model;
            LevelView* level_view;

			const vector<ElementData>& getElementDataList(int level_to_load);

        public:
            LevelController();
            ~LevelController();

            void initialize();
            void update();    
            void render(); 

            float getCellWidth();
            float getCellHeight();
    };
}