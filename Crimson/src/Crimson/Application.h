#pragma once

#include "Core.h"

namespace Crimson {
	class CRIMSON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}