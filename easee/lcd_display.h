#ifndef EASEE_LCD_DISPLAY_H
#define EASEE_LCD_DISPLAY_H

#include <LiquidCrystal.h>

namespace easee {

class LCDDisplay {
   public:
    LCDDisplay(int rs = 1, int en = 2, int d4 = 4, int d5 = 5, int d6 = 6,
               int d7 = 7);
    ~LCDDisplay();

    void setup();
    void loop(int t);
    void update(int t);
    void setText(char* buf1, char* buf2);

   protected:
    int d_rs;
    int d_en;
    int d_d4;
    int d_d5;
    int d_d6;
    int d_d7;
    LiquidCrystal d_liquidCrystal;

    char* d_buffer1;
    char* d_buffer2;
};

}  // namespace easee

#endif
