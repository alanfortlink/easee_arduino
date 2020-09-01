#include <lcd_display.h>

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
}

void LCDDisplay::setup() {
    d_liquidCrystal.begin(16, 2);
}

void LCDDisplay::setText(const String& buf1, const String& buf2){
    const int s1 = buf1.length();
    const int s2 = buf2.length();

    buf1.toCharArray(d_buffer1, s1);
    buf2.toCharArray(d_buffer2, s2);

    for(int i = s1-1; i < 16; i++) d_buffer1[i] = ' ';
    for(int i = s2-1; i < 16; i++) d_buffer2[i] = ' ';
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
