#include "lcd_display.h"

namespace easee {

void set(char* buf, const char* w, int n) {}

LCDDisplay::LCDDisplay(int rs, int en, int d4, int d5, int d6, int d7)
    : d_rs(rs),
      d_en(en),
      d_d4(d4),
      d_d5(d5),
      d_d6(d6),
      d_d7(d7),
      d_liquidCrystal(rs, en, d4, d5, d6, d7) {}

LCDDisplay::~LCDDisplay() {
    delete d_buffer1;
    delete d_buffer2;
}

void LCDDisplay::setup() {
    d_liquidCrystal.begin(16, 2);

    d_buffer1 = new char[16];
    d_buffer2 = new char[16];

    setText("ALAN", "MARTINS");
}

void LCDDisplay::setText(char* buf1, char* buf2){
    memset(d_buffer1, ' ', 16);
    memset(d_buffer2, ' ', 16);

    strncpy(d_buffer1, buf1, strlen(buf1));
    strncpy(d_buffer2, buf2, strlen(buf2));
}

void LCDDisplay::loop(int t) {
    update(t);
}

void LCDDisplay::update(int t) {
    d_liquidCrystal.setCursor(0, 0);
    for(int i = 0; i < 16; i++){
        d_liquidCrystal.write(d_buffer1[i]);
    }
    d_liquidCrystal.setCursor(0, 1);
    for(int i = 0; i < 16; i++){
        d_liquidCrystal.write(d_buffer2[i]);
    }
}

}  // namespace easee
