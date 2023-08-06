

#pragma once

//to be defined in client
#include "Application.hpp"
#include <cstdio>
extern Xenon::Application* Xenon::CreateApplication();

int main(int argc, char** argv) {

  auto app = Xenon::CreateApplication();
  app->Run();
  delete app;


}
