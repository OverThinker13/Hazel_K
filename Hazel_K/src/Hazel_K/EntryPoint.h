#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel_K::Application* Hazel_K::CreateApplication();
int main(int argc, char** argv)
{
	Hazel_K::Log::Init();
	HZ_WARN("Initialized Log!");
	int a = 5;
	HZ_INFO("Hello! Var={0}", a);

	auto app = Hazel_K::CreateApplication();
	app->Run();
	delete app;

}

#endif