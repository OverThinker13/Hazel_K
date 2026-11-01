#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"
namespace Hazel_K
{

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	//初始化日志系统
	void Log::Init() 
	{
		//设置日志模式
		spdlog::set_pattern("%^[%T] %n: %v%$");
		//创建核心日志器
		s_CoreLogger = spdlog::stdout_color_mt("HAZEL_K");
		//设置日志等级
		s_CoreLogger->set_level(spdlog::level::trace);

		//创建客户端日志器
		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);

	}
}