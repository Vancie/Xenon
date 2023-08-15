#pragma once

#include "Xenon/Layer.hpp"

namespace Xenon {

class XENON_API ImguiLayer : public Layer {
public:
  ImguiLayer();
  ~ImguiLayer();

  void OnAttach();
  void OnDetach();

  void OnUpdate();
  void OnEvent(Event &event);

private:
  float m_Time;
};

}; // namespace Xenon
