#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main()
{
    uLCD.reset();
    uLCD.background_color(0xFFFFFF);
    uLCD.color(BLUE);
    uLCD.text_width(2);
    uLCD.text_height(2);
    uLCD.printf("\n106061123\n");
    uLCD.text_width(4);
    uLCD.text_height(4);
    uLCD.color(GREEN);
    for (int i = 30; i >= 0; i--) {
        uLCD.locate(1, 2);
        if (i >= 10)
            uLCD.printf("%2D", i);
        else if (i == 9) {
            uLCD.cls();
            uLCD.color(BLUE);
            uLCD.text_width(2);
            uLCD.text_height(2);
            uLCD.printf("\n106061123\n");
            uLCD.text_width(4);
            uLCD.text_height(4);
            uLCD.color(GREEN);
        }
        if (i < 10)
        {
            uLCD.locate(1, 2);
            uLCD.printf("%D", i);
        }
        wait(1);
    }

}