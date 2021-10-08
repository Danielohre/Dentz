#pragma once

#include "Core.h"

namespace Dentz {


	class DENTZ_API Application
	{
	public:

		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in Client
	Application* CreateApplication();
}