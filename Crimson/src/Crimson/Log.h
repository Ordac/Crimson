#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Crimson {
	class CRIMSON_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
	};
}

// Core log macros
#define CR_CORE_TRACE(...)	::Crimson::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CR_CORE_INFO(...)	::Crimson::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CR_CORE_WARN(...)	::Crimson::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CR_CORE_ERROR(...)	::Crimson::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CR_CORE_FATAL(...)	::Crimson::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros 
#define CR_TRACE(...)		::Crimson::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CR_INFO(...)		::Crimson::Log::GetClientLogger()->info(__VA_ARGS__)
#define CR_WARN(...)		::Crimson::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CR_ERROR(...)		::Crimson::Log::GetClientLogger()->error(__VA_ARGS__)
#define CR_FATAL(...)		::Crimson::Log::GetClientLogger()->fatal(__VA_ARGS__)