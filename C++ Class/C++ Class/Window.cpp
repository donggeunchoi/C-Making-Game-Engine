#include "Window.h"
#include <iostream>

Engine::Window::Window()
{
	std::cout << "[Window] Created" << std::endl;
}

Engine::Window::~Window()
{
	std::cout << "[Window] Destroyed" << std::endl;
}

bool Engine::Window::Create(const EngineConfig& config)
{
	if (!SDL_Init(SDL_INIT_VIDEO))
	{
		std::cout << "[Window]SDL Init Failed: " << SDL_GetError() << std::endl;
		return false;
	}

	sdlInitialized = true;

	nativeWindow = SDL_CreateWindow(config.windowTitle.c_str(), config.windowWidth, config.windowHeight, 0);
	
	if (nativeWindow == nullptr)
	{
		std::cout << "[Window] Create Failed:" << SDL_GetError() << std::endl;
		return false;
	}

	std::cout << "[Window] Window Created" << std::endl;
	return true;
}

void Engine::Window::WaitUntilClose()
{
	bool opened = true;
	SDL_Event event;

	while (opened)
	{
		if (!SDL_WaitEvent(&event))
		{
			std::cout << "[Window] Event Error : " << SDL_GetError() << std::endl;
		}

		if (event.type == SDL_EVENT_QUIT)
		{
			opened = false;
		}
	}
}

void Engine::Window::Destroy()
{
	if (nativeWindow != nullptr)
	{
		SDL_DestroyWindow(nativeWindow);
		nativeWindow = nullptr;
	}

	if (sdlInitialized)
	{
		SDL_Quit();
		sdlInitialized = false;
	}
}

bool Engine::Window::ShouldClose()
{
	SDL_Event event{};

	while (SDL_PollEvent(&event))
	{
		if (event.type == SDL_EVENT_QUIT ||
			event.type == SDL_EVENT_WINDOW_CLOSE_REQUESTED)
		{
			return true;
		}
	}

	return false;
}
