#include "헤더.h"
#include "EngineConfig.h"
#include <iostream>
#include <string>

void Engine::Run()
{
    PrintEngineInfo();
	Initialize();
	Update();
	Render();
	Shutdown();
}

void Engine::PrintEngineInfo()
{
    EngineConfig config;

    std::cout << "==========================" << std::endl;
    std::cout << config.windowTitle << std::endl;
    std::cout << "Version : " << config.version << std::endl;
    std::cout << "==========================" << std::endl;
}

void Engine::Initialize()
{
    EngineConfig config;

    std::cout << "[Engine] Initialize" << std::endl;

    std::cout << std::boolalpha;
    std::cout << "Window Width : " << config.windowWidth << std::endl;
    std::cout << "Window Height : " << config.windowHeight << std::endl;
    std::cout << "Target FPS : " << config.targetFPS << std::endl;
    std::cout << "Fullscreen : " << config.fullscreen << std::endl;
    std::cout << "VSync : " << config.vsync << std::endl;
    std::cout << "Max Object Count : " << config.maxObjectCount << std::endl;
}

void Engine::Update()
{
    std::cout << "[Engine] Update" << std::endl;
}

void Engine::Render()
{
    std::cout << "[Engine] Render" << std::endl;
}

void Engine::Shutdown()
{
    std::cout << "[Engine] Shutdown" << std::endl;
}
