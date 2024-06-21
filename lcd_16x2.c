/*
    Project name : ESP8266 LCD 16x2 Display
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-lcd-16x2-display
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize the LCD
  lcd.begin();
  lcd.backlight(); // Turn on the backlight

  // Print a message to the LCD
  lcd.setCursor(0, 0); // Set cursor to the first column, first row
  lcd.print("Hello, World!"); // Print text

  lcd.setCursor(0, 1); // Set cursor to the first column, second row
  lcd.print("ESP8266 LCD"); // Print text
}

void loop() {
  // You can update the LCD in the loop if needed
  // For now, we'll just keep the initial message
}
