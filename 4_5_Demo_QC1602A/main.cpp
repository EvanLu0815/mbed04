#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main()
{
    int x = 30;
    lcd.printf("106061123\n");
    while(x >= 0) {
        if (x > 9) {
            lcd.locate(4, 1);
            lcd.printf("%5i", x);
        }
        else {
            lcd.locate(4, 1);
            lcd.printf("%5i", x);
        }
        wait(1);
        x--;
    }
}