#pragma once

#include <GLFW/glfw3.h>
#include "Xenon/Window.hpp"


namespace Xenon {
  class MacOSWindow : public Window {
    public:
      MacOSWindow(const WindowProps& props);
      virtual ~MacOSWindow();

      void OnUpdate() override;

      inline unsigned int GetWidth() const override { return m_Data.Width; }
      inline unsigned int GetHeight() const override { return m_Data.Height; }

      //Attributes
      inline void SetEventCallback(const EventCallbackFn& callback) override { m_Data.EventCallback = callback; }
      void SetVSync(bool enabled) override;
      bool IsVSync() const override;
    private:
      virtual void Init(const WindowProps& props);
      virtual void Shutdown();
    private:
      GLFWwindow* m_Window;

      struct WindowData {
        std::string Title;
        unsigned int Width;
        unsigned int Height;
        bool VSync;

        EventCallbackFn EventCallback;
      };

      WindowData m_Data;

  };
}
