
#include <Xenon.hpp>

class ExampleLayer : public Xenon::Layer {
public:
  ExampleLayer() : Layer("Example") {}

  void OnUpdate() override { XN_INFO("ExampleLayer::Update"); }

  void OnEvent(Xenon::Event &event) override { XN_TRACE("{0}", event); }
};

class Sandbox : public Xenon::Application {
public:
  Sandbox() {
    PushLayer(new ExampleLayer);
    PushOverlay(new Xenon::ImguiLayer());
  }

  ~Sandbox() {}
};

Xenon::Application *Xenon::CreateApplication() { return new Sandbox(); }
