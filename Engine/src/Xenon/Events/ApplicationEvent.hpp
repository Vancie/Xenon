
#pragma once

#include "Event.hpp"


namespace Xenon {

  class XENON_API WindowResizedEvent : public Event {
    public:
      WindowResizedEvent(unsigned int width, unsigned int height) : m_Width(width), m_Height(height) {}

      inline unsigned int GetWidth() const { return m_Width; }
      inline unsigned int GetHeight() const { return m_Height; }

      std::string ToString() const override {
        std::stringstream ss;
        ss << "WindowResizedEvent: " << m_Width << ", " << m_Height;
        return ss.str();
      }

      EVENT_CLASS_TYPE(WindowResize)
      EVENT_CLASS_CATAGORY(EventCatagoryApplication)

    private:
      unsigned int m_Width;
      unsigned int m_Height;

  };

  class WindowCloseEvent : public Event {
    public:
      WindowCloseEvent() {}
      EVENT_CLASS_TYPE(WindowClose)
      EVENT_CLASS_CATAGORY(EventCatagoryApplication)
  };

  class AppTickEvent : public Event {
    public:

      AppTickEvent() {}

      EVENT_CLASS_TYPE(AppTick)
      EVENT_CLASS_CATAGORY(EventCatagoryApplication)
  };

  class AppRenderEvent : public Event {
    public:
      AppRenderEvent() {}

      EVENT_CLASS_TYPE(AppRender)
      EVENT_CLASS_CATAGORY(EventCatagoryApplication)
  };

  class AppUpdateEvent : public Event {
    public:
      AppUpdateEvent() {}

      EVENT_CLASS_TYPE(AppUpdate)
      EVENT_CLASS_CATAGORY(EventCatagoryApplication)
  };
}
