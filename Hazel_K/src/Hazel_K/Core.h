#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_K_API __declspec(dllexport)
	#else
		#define HAZEL_K_API __declspec(dllimport)
	#endif
#else
	#error Hazel_K only supports Windows!
#endif
