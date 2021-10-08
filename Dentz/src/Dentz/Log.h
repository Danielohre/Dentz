#pragma once

#include <memory>
#include "Core.h"
#include <spdlog/spdlog.h>
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Dentz {

	class DENTZ_API Log
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


//CORE log macros
#define DZ_CORE_ERROR(...)		::Dentz::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DZ_CORE_WARN(...)		::Dentz::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define DZ_CORE_INFO(...)		::Dentz::Log::GetCoreLogger()->info(__VA_ARGS__)
#define DZ_CORE_TRACE(...)		::Dentz::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define DZ_CORE_FATAL(...)		::Dentz::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client Log Macros
#define DZ_ERROR(...)			::Dentz::Log::GetClientLogger()->error(__VA_ARGS__)
#define DZ_WARN(...)			::Dentz::Log::GetClientLogger()->warn(__VA_ARGS__)
#define DZ_INFO(...)			::Dentz::Log::GetClientLogger()->info(__VA_ARGS__)
#define DZ_TRACE(...)			::Dentz::Log::GetClientLogger()->trace(__VA_ARGS__)
#define DZ_FATAL(...)			::Dentz::Log::GetClientLogger()->fatal(__VA_ARGS__)