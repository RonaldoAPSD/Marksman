#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Marksman {
	
	class MARKSMAN_API Log
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

// CORE LOG MACROS
#define MK_CORE_TRACE(...)	::Marksman::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MK_CORE_INFO(...)	::Marksman::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MK_CORE_WARN(...)	::Marksman::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MK_CORE_ERROR(...)	::Marksman::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MK_CORE_FATAL(...)	::Marksman::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// CLIENT LOG MACROS
#define MK_TRACE(...)	::Marksman::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MK_INFO(...)	::Marksman::Log::GetClientLogger()->info(__VA_ARGS__)
#define MK_WARN(...)	::Marksman::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MK_ERROR(...)	::Marksman::Log::GetClientLogger()->error(__VA_ARGS__)
#define MK_FATAL(...)	::Marksman::Log::GetClientLogger()->fatal(__VA_ARGS__)