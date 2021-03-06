#ifndef EASEE_TOUCH_DISPLAY_H
#define EASEE_TOUCH_DISPLAY_H

#include <UTFTGLUE.h>
#include <display.h>

namespace easee {

class TouchDisplay : public Display {
   public:
    static int WIDTH;
    static int HEIGHT;

    TouchDisplay();
    virtual ~TouchDisplay();

    void setup();
    void loop(int t);

    virtual void fillRect(int x, int y, int w, int h, const Color& color);
    virtual void drawText(const String& text, int x, int y,
                          const TextStyle& style);

   protected:
    UTFTGLUE d_display;
};

}  // namespace easee

#endif
