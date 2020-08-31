#ifndef EASEE_LCD_DISPLAY_H
#define EASEE_LCD_DISPLAY_H

#include <LiquidCrystal.h>

namespace easee {

/**
 * @brief Wrapper over the 16x2 LCD Display.
 *
 * This uses the LiquidCrystal library to communicate with
 * the LCD Display.
 */
class LCDDisplay {
   public:
    LCDDisplay(int rs = 1, int en = 2, int d4 = 4, int d5 = 5, int d6 = 6,
               int d7 = 7);
    ~LCDDisplay();

    /**
     * @brief Setup the LCDDisplay size.
     */
    void setup();

    /**
     * @brief As of now, calls the update function.
     */
    void loop(int t);

    /**
     * @brief Updates the text in the display according to d_buffer1 and
     * d_buffer2.
     */
    void update(int t);

    /**
     * @brief Updates the text buffers.
     *
     * @param buf1 Text to show in the first line of the display.
     * @param buf2 Text to show in the second line of the display.
     */
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
