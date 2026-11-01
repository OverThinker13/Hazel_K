#pragma once

#include "Core.h"

namespace Hazel_K {
	class HAZEL_K_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//要在客户端应用程序中定义这个函数
	Application* CreateApplication();
}

