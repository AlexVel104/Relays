/*
  Test_Relays1: Multiple relays activation using assignment operator

  Device: ESP32 Pico Kit

  Pins:
   GPIO 12-13 --> ULN2003N --> 5v Relay

  AP 3.5 8/11/21
*/

#define _TEST

#include "winet.h"

RelayBk2 relays(PINS(12,13)); // 3.5

auto on_off = false; // 3.5 Inverted logic: relay ON is false

void setup()
{
  Serial.begin(115200);
  PL("** Testing Bank of Relays **");
  delay(800);
}

void loop()
{
  relays = BuiltinLED = on_off;
  // relays.cmd(0, on_off);
  delay(500);
  on_off = !on_off; // toggle state
}
