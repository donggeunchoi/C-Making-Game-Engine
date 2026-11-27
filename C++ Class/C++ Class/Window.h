#pragma once

#include "EngineConfig.h"
#include <SDL3/SDL.h>

namespace Engine
{
	class Window
	{
	public:
			Window();
			~Window();

			bool Create(const EngineConfig& config);
			void WaitUntilClose();
			bool ShouldClose();
			void Destroy();
	private:
		SDL_Window* nativeWindow = nullptr;
		bool sdlInitialized = false;
	};
}
