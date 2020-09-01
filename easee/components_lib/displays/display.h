#ifndef EASEE_DISPLAY_H
#define EASEE_DISPLAY_H

#include <textstyle.h>
#include <Arduino.h>

namespace easee {

class Display {
   public:
    Display();
    virtual ~Display() = 0;

    virtual void fillRect(int x, int y, int w, int h, const Color& color) = 0;
    virtual void drawText(const String& text, int x, int y,
                          const TextStyle& style = TextStyle::NORMAL) = 0;
};

}  // namespace easee

#endif
