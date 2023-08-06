

#pragma once

//to be defined in client
#include "Application.hpp"


extern Xenon::Application* Xenon::CreateApplication();

int main(int argc, char** argv) {

  Xenon::Logger::Init();
  auto app = Xenon::CreateApplication();
  app->Run();
  delete app;


}
