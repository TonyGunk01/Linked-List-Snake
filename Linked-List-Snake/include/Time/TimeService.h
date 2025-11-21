#pragma once

#include <chrono>

namespace Time
{
	using namespace std::chrono;

	class TimeService
	{
		private:
			time_point<steady_clock> previous_time;

			float delta_time;

			void updateDeltaTime();
			float calculateDeltaTime();
			void updatePreviousTime();

		public:
			void initialize();
			void update();

			float getDeltaTime();
	};
}