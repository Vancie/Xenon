#pragma once
#include "XenonPCH.hpp"

#include "Core.hpp"
#include "Events/Event.hpp"
#include "Window.hpp"

namespace Xenon {
  class XENON_API Application {
    public:
      Application();
      virtual ~Application();
      void Run();

    private:
      std::unique_ptr<Window> m_Window;
      bool m_Running = true;

  };

  // To be defined in client

  Application* CreateApplication();
}
