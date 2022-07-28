#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int Clicks = 0;

void setup() {
    lcd.begin(16, 2);
    pinMode(switchPin, INPUT);

    lcd.print("CPS Counter");
}

void loop() {
    switchState = digitalRead(switchPin);
    if (switchState != prevSwitchState) {
        if (switchState == LOW) {
            lcd.clear();

            lcd.print("Clicks: ");
            lcd.print(Clicks);

            Clicks++;
        }
    }
    prevSwitchState = switchState;
}