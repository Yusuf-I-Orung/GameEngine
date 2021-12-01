#pragma once

#include "Core.h"

namespace GameEngine {

	class GameEngine_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//to be defined in client

	Application* CreateApplication();
}

