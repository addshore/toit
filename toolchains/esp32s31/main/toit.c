// Copyright (C) 2024 Toitware ApS.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; version
// 2.1 only.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// The license can be found in the file `LICENSE` in the top level
// directory of this repository.

// Toit ESP32 top level, derived from ESP-IDF Hello World example.

#include "sdkconfig.h"

extern void toit_start();
#if CONFIG_TOIT_USB_CONSOLE
extern void usb_console_start(void);
#endif

void app_main() {
#if CONFIG_TOIT_USB_CONSOLE
  usb_console_start();
#endif
  toit_start();
}
