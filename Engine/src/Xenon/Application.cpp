
#include "Application.hpp"
#include "Core.hpp"
#include "Events/ApplicationEvent.hpp"
#include "Logger.hpp"
#include "Platform/MacOS/MacWindow.hpp"

namespace Xenon {
Application::Application() {
  m_Window = std::unique_ptr<Window>(Window::Create());
}

Application::~Application() {}

void Application::Run() {
  while (m_Running) {
    glClearColor(1, 0.9, 0.4, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    m_Window->OnUpdate();
  }
}
} // namespace Xenon
