#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace GameEngine {
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1200, 720);
		GE_TRACE(e);

		while (true);
	};

}
