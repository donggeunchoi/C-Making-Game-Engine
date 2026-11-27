#include "Application.h"
#include <memory>
#include <iostream>

int main() 
{
	/*Engine::Application app;
	app.Run();*/

	auto app = std::make_unique<Engine::Application>();
	auto owner = std::move(app);

	if (!app)
	{
		std::cout << "[Main] app is empty\n";
	}

	owner->Run();

	std::cout << "[Main] Returning\n";
	return 0;
}