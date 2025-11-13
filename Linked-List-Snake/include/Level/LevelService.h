#pragma once

namespace Level
{
    class LevelController;
    enum class LevelNumber;

    class LevelService 
    {
        private:
            LevelController* level_controller;
            LevelNumber current_level;

            void createLevelController();
            void destroy();

        public:
            LevelService();  // Default constructor
            ~LevelService(); // Destructor

            void initialize(); // To be called when the object is created
            void update();     // To be called on every frame
            void render();     // To be called on every frame

            void createLevel(LevelNumber level_to_load);
    };
}