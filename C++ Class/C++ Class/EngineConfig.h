#pragma once
#include <string>

struct EngineConfig 
{
	int windowWidth = 1280;
	int windowHeight = 720;
	int targetFPS = 60;
	float version = 0.1f;
	bool fullscreen = false;
	std::string windowTitle = "Mini2D Engine";

	bool vsync : true;
	int maxObjectCount = 1000;
};