#pragma once

#include <SFML/System/Vector2.hpp>
#include <random>
#include <vector>
#include "LinkedList/Node.h"

namespace Food
{
	enum class FoodType;
	class FoodItem;

	using namespace sf;
	using namespace LinkedList;
	using namespace std;

	enum FoodSpawningStatus
	{
		ACTIVE,
		IN_ACTIVE,
	};

	class FoodService
	{
		private:
			const float spawn_duration = 4.f;

			float elapsed_duration;

			FoodSpawningStatus current_spawning_status;
			FoodItem* current_food_item;

			float cell_width;
			float cell_height;

			default_random_engine random_engine;

			random_device random_device;

			FoodItem* createFood(Vector2i position, FoodType type);
			void spawnFood();

			Vector2i getValidSpawnPosition();
			Vector2i getRandomPosition();
			FoodType getRandomFoodType();

			bool isValidPosition(vector<Vector2i> position_data, Vector2i food_position);

			void updateElapsedDuration();
			void handleFoodSpawning();
			void reset();

		public:
			FoodService();
			~FoodService();

			void initialize();
			void update();
			void render();

			void startFoodSpawning();
			void stopFoodSpawning();

			bool processFoodCollision(Node* head_node, FoodType& out_food_type);
			void destroyFood();
	};
}