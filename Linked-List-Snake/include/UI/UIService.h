#pragma once

#include "UI/MainMenu/MainMenuUIController.h"
#include "UI/SplashScreen/SplashScreenUIController.h"
#include "UI/LevelSelection/LevelSelectionUIController.h"
#include "UI/GameplayUI/GameplayUIController.h"
#include "Instructions/InstructionsScreenUIController.h"
#include "UI/Credits/CreditsScreenUIController.h"
#include "UI/Interface/IUIController.h"

namespace UI
{
	using namespace SplashScreen;
	using namespace MainMenu;
	using namespace LevelSelection;
	using namespace GameplayUI;
	using namespace Instructions;
	using namespace Credits;
	using namespace Interface;

	class UIService
	{
		private:
			SplashScreenUIController* splash_screen_controller;
			MainMenuUIController* main_menu_controller;
			LevelSelectionUIController* level_selection_ui_controller;
			GameplayUIController* gameplay_ui_controller;
			InstructionsScreenUIController* instructions_screen_ui_controller;
			CreditsScreenUIController* credits_screen_ui_controller;


			void createControllers();
			void initializeControllers();
			IUIController* getCurrentUIController();
			void destroy();

		public:
			UIService();
			~UIService();

			void initialize();
			void update();
			void render();
			void showScreen();
	};
}