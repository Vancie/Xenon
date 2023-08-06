#pragma once

#include "Core.hpp"

namespace Xenon {
  class XENON_API Application {
    public:
      Application();
      virtual ~Application();
      void Run();
  };

  // To be defined in client

  Application* CreateApplication();
}
