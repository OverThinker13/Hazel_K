#pragma once
#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Hazel_K
{
	class HAZEL_K_API Log
	{
		public:
			static void Init();

			inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
			inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

		private:
			static std::shared_ptr<spdlog::logger> s_CoreLogger;
			static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//-------------------日志宏定义-----------------------
//引擎日志宏定义
#define HZ_CORE_TRACE(...)    ::Hazel_K::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)     ::Hazel_K::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)     ::Hazel_K::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)    ::Hazel_K::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...)    ::Hazel_K::Log::GetCoreLogger()->fatal(__VA_ARGS__)
//客户端日志宏定义
#define HZ_TRACE(...)		  ::Hazel_K::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...)          ::Hazel_K::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)		  ::Hazel_K::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)		  ::Hazel_K::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_FATAL(...)		  ::Hazel_K::Log::GetClientLogger()->fatal(__VA_ARGS__)