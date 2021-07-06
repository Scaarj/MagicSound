#include "application.h"

#include "stm32f4xx/mcu.h"

Application::Application() { _mcu = new hal::stm32f4xx::Mcu; }

void Application::loop() { _mcu->loop(); }

// Alternates blue and green LEDs quickly