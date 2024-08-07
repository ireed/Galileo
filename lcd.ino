
#include <Wire.h>
#include "rgb_lcd.h"

// using this code requires installing the rgb_lcd library:
//    https://github.com/Seeed-Studio/Grove_LCD_RGB_Backlight/archive/master.zip

rgb_lcd lcd;

const int colorR = 255;
const int colorG = 0;
const int colorB = 0;

// LCD device can be connected to any port labelled I2C

void setup() {
  // set # rows, # cols, and # dots per char
  lcd.begin(16, 2, LCD_5x8DOTS); // these values come from the lcd device specs

  lcd.setRGB(colorR, colorG, colorB); //red background
  lcd.clear();
  lcd.print("Starting ...."); // print message to lcd

  delay(1000); // wait 1 sec
}

void loop() {

  lcd.clear();
  delay(500); // clear any text that was previously on the lcd

  lcd.setCursor(0, 0); //position cursor at column0, row0
  lcd.setRGB(colorR, 100, colorB); // red + a bit of green = yellow
  lcd.print("Hello,");
  delay(1000);

  lcd.setCursor(7, 1); // position cursor at col7, row1
  lcd.setRGB(colorR, colorG, 100); // red + blue = purple background
  lcd.print("world!");
  delay(1000);
}
