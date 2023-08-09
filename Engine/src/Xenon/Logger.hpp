#pragma once

#include "Core.hpp"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Xenon {
  class XENON_API Logger {
    public:
      static void Init();

      inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
      inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

    private: 
      static std::shared_ptr<spdlog::logger> s_CoreLogger;
      static std::shared_ptr<spdlog::logger> s_ClientLogger;
  };
}


//CORE LOGGING MACROS
#define XN_CORE_TRACE(...)   ::Xenon::Logger::GetCoreLogger()->trace(__VA_ARGS__)
#define XN_CORE_INFO(...)    ::Xenon::Logger::GetCoreLogger()->info(__VA_ARGS__)
#define XN_CORE_WARN(...)    ::Xenon::Logger::GetCoreLogger()->warn(__VA_ARGS__)
#define XN_CORE_ERROR(...)   ::Xenon::Logger::GetCoreLogger()->error(__VA_ARGS__)
#define XN_CORE_FATAL(...)   ::Xenon::Logger::GetCoreLogger()->fatal(__VA_ARGS__)


//CLIENT LOGGING MACROS
#define XN_TRACE(...)   ::Xenon::Logger::GetClientLogger()->trace(__VA_ARGS__)
#define XN_INFO(...)    ::Xenon::Logger::GetClientLogger()->info(__VA_ARGS__)
#define XN_WARN(...)    ::Xenon::Logger::GetClientLogger()->warn(__VA_ARGS__)
#define XN_ERROR(...)   ::Xenon::Logger::GetClientLogger()->error(__VA_ARGS__)
#define XN_FATAL(...)   ::Xenon::Logger::GetClientLogger()->fatal(__VA_ARGS__)

