#include "Application.h"
#include <iostream>
#include <chrono>

Engine::Application::Application()
{
	std::cout << "[Application] Created" << std::endl;
}


Engine::Application::~Application()
{
	std::cout << "[Application] Destroyed" << std::endl;
}

void Engine::Application::Run()
{
    PrintEngineInfo();

    if (!Initialize())
    {
        return;
    }
    
    auto previousTime = std::chrono::steady_clock::now();
    int sampleCount = 0;

    while (running)
    {
        if (window.ShouldClose())
        {
            break;
        }

        auto currentTime = std::chrono::steady_clock::now();

        double deltaTime = std::chrono::duration<double>(currentTime - previousTime).count();

        previousTime = currentTime;

        if (sampleCount < 5)
        {
            std::cout << "[Frame] deltaTime: " << deltaTime << " seconds\n";
            ++sampleCount;
        }

        Update(deltaTime);
        //Render();
    }

    Shutdown();
}

void Engine::Application::PrintEngineInfo()
{
    std::cout << "==========================" << std::endl;
    std::cout << config.windowTitle << std::endl;
    std::cout << "Version : " << config.version << std::endl;
    std::cout << "==========================" << std::endl;
}

bool Engine::Application::Initialize()
{
    std::cout << "[Engine] Initialize" << std::endl;

    if (!window.Create(config))
    {
        return false;
    }

    running = true;

    std::cout << std::boolalpha;
    std::cout << "Running : " << running << std::endl;
    std::cout << "Window Width : " << config.windowWidth << std::endl;
    std::cout << "Window Height : " << config.windowHeight << std::endl;
    std::cout << "Target FPS : " << config.targetFPS << std::endl;
    std::cout << "Fullscreen : " << config.fullscreen << std::endl;
    std::cout << "VSync : " << config.vsync << std::endl;
    std::cout << "Max Object Count : " << config.maxObjectCount << std::endl;

    return true;
}
void Engine::Application::Update(double deltaTime)
{
    std::cout << "[Engine] Update" << std::endl;

    (void)deltaTime;

    std::cout << deltaTime << '\n';
}

void Engine::Application::Render()
{
    std::cout << "[Engine] Render" << std::endl;
}

void Engine::Application::Shutdown()
{
    running = false;

    window.Destroy();

	std::cout << "Running : " << running << std::endl;
    std::cout << "[Engine] Shutdown" << std::endl;
}
