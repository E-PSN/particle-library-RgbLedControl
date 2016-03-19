#include <application.h>

class RgbLedControl {
    public:
      enum Color 
      {
        OFF,     // 0
        YELLOW,  // 1
        ORANGE,  // 2
        BLUE,    // 3
        RED,     // 4
        GREEN,   // 5
        WHITE,   // 6
        INTERNAL
      };
      RgbLedControl(int red_pin, int green_pin, int blue_pin) {
          pinMode(red_pin, OUTPUT);
          pinMode(green_pin, OUTPUT);
          pinMode(blue_pin, OUTPUT);
          _red_pin = red_pin;
          _green_pin = green_pin;
          _blue_pin = blue_pin;
      }
      void setLedColor(int delay_ms, int led_ms_on, int led_ms_off, Color color);
    private:
      RgbLedControl() { }
      int _red_pin;
      int _green_pin;
      int _blue_pin;
      bool led_state=false;
      int current_ms=0;
};
