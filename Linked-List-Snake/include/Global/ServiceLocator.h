#pragma once

#include "Graphics/GraphicService.h"
#include "Event/EventService.h"
#include "UI/UIService.h"
#include "Sound/SoundService.h"
#include "Level/LevelService.h"
#include "Element/ElementService.h"
#include "Time/TimeService.h"
#include "Player/PlayerService.h"
#include "Food/FoodService.h"

namespace Global
{
	using namespace Events;
	using namespace Graphics;
	using namespace Sounds;
	using namespace Level;
	using namespace Element;
	using namespace Player;
	using namespace Food;
	using namespace UI;
	using namespace Time;

    class ServiceLocator
    {
        private:
            EventService* event_service;
            GraphicService* graphic_service;
            SoundService* sound_service;
            LevelService* level_service;
            ElementService* element_service;
            PlayerService* player_service;
            FoodService* food_service;
            UIService* ui_service;
            TimeService* time_service;

            ServiceLocator();
            ~ServiceLocator();

            void createServices();
            void clearAllServices();

        public:
            static ServiceLocator* getInstance();

            void initialize();
            void update();
            void render();

            EventService* getEventService();
            GraphicService* getGraphicService();
            SoundService* getSoundService();
            LevelService* getLevelService();
            ElementService* getElementService();
            PlayerService* getPlayerService();
            UIService* getUIService();
            FoodService* getFoodService();
            TimeService* getTimeService();

            void deleteServiceLocator();
    };
}