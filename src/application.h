#pragma once

#include "mcu.h"

class Application {
 public:
  Application();
  void loop();

 private:
  hal::Mcu* _mcu;
};
