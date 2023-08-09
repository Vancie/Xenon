#pragma once

#include "Xenon/Core.hpp"



namespace Xenon {

  /*
   *
   * Events are currently blocking, will implement Event queue to enable non-blocking events
   *
   */

  enum class EventType {
    None = 0,
    WindowClose, WindowResize, WindowFocus, WindowLostFocus, WindowMoved,
    AppTick, AppUpdate, AppRender,
    KeyPressed, KeyReleased,
    MouseButtonPressed, MouseButtonReleased, MouseMoved, MouseScrolled
  };

  //This is to enable filtering for events
  enum EventCatagory {
    None = 0,
    EventCatagoryApplication = BIT(0),
    EventCatagoryInput = BIT(1),
    EventCatagoryKeyboard = BIT(2),
    EventCatagoryMouse = BIT(3),
    EventCatagoryMouseButton = BIT(4)

  };

#define EVENT_CLASS_TYPE(type) static EventType GetStaticType() { return EventType::type; }\
								virtual EventType GetEventType() const override { return GetStaticType(); }\
								virtual const char* GetName() const override { return #type; }

#define EVENT_CLASS_CATAGORY(catagory) virtual int GetCatagoryFlags() const override { return catagory; }


  class XENON_API Event {
    
    friend class EventDispatcher;

    public:
      virtual EventType GetEventType() const = 0;
      virtual const char* GetName() const = 0;
      virtual int GetCatagoryFlags() const = 0;
      virtual std::string ToString() const { return GetName(); }

      inline bool IsInCatagory(EventCatagory catagory) {
        //checks if current event is in event catagory
        return GetCatagoryFlags() & catagory;
      }

    protected:
      bool m_Handled = false; //flag for if event has been handled
      
  };

  class EventDispatcher {

    template<typename T> 
    using EventFn = std::function<bool(T&)>;

    public:
      EventDispatcher(Event& event) : m_Event(event) {}

      template<typename T>
        bool Dispatch(EventFn<T> func) {
          if (m_Event.GetEventType() == T::GetStaticType()) {
            m_Event.m_Handled = func(*(T*)&m_Event);
            return true;
          }
          return false;
        }

    private:
      Event& m_Event;

  };

  inline std::ostream& operator<<(std::ostream& os, const Event& e)
	{
		return os << e.ToString();
	}

}
