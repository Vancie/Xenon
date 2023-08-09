
#include "Application.hpp"
#include "Events/ApplicationEvent.hpp"
#include "Logger.hpp"


namespace Xenon {
  Application::Application() {

  }

  Application::~Application() {

  }

  void Application::Run() {
    WindowResizedEvent e(1280, 780);
    XN_TRACE(e);
  }
}
