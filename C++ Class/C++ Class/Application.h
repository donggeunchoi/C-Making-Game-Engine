#pragma once

#include "EngineConfig.h"
#include "Window.h"

namespace Engine 
{
	class Application
	{
	public : 
		Application();
		~Application();

		void Run();

	private:
		void PrintEngineInfo();
		bool Initialize();
		void Update(double deltaTime);
		void Render();
		void Shutdown();

		EngineConfig config;
		Window window;
		double positionX = 0.0;
		bool running = false;
	};
}
