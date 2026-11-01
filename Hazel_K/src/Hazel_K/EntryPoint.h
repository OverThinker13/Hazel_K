#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel_K::Application* Hazel_K::CreateApplication();
int main(int argc, char** argv)
{

	auto app = Hazel_K::CreateApplication();
	app->Run();
	delete app;

}

#endif