
#include <Xenon.hpp>


class Sandbox : public Xenon::Application {
  public:
    Sandbox() {

    }

    ~Sandbox() {

    }
};


Xenon::Application* Xenon::CreateApplication() {
  return new Sandbox();
}




