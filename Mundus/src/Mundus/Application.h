#pragma once

#include "Core.h"

namespace Mundus {

	class MUNDUS_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Mundus::Application* CreateApplication();

}