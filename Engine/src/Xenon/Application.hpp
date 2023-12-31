#pragma once
#include "XenonPCH.hpp"

#include "Core.hpp"
#include "Events/ApplicationEvent.hpp"
#include "Events/Event.hpp"
#include "LayerStack.hpp"
#include "Window.hpp"

namespace Xenon {
class XENON_API Application {
public:
  Application();
  virtual ~Application();
  void Run();

  void OnEvent(Event &e);

  void PushLayer(Layer *layer);
  void PushOverlay(Layer *overlay);
  inline static Application &Get() { return *s_Instance; }
  inline Window &GetWindow() { return *m_Window; }

private:
  static Application *s_Instance;
  bool OnWindowClose(WindowCloseEvent &e);
  std::unique_ptr<Window> m_Window;
  bool m_Running = true;
  LayerStack m_LayerStack;
};

// To be defined in client

Application *CreateApplication();
} // namespace Xenon
