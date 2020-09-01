#ifndef EASEE_TEXT_H
#define EASEE_TEXT_H

#include <Arduino.h>
#include <widget.h>

namespace easee {

class Text : public Widget {
   public:
    Text(int x, int y, int width, int height, const String& text,
         const TextStyle& style = TextStyle::NORMAL);
    ~Text();

    virtual void drawBackground(Display& display);
    virtual void drawForeground(Display& display);

    void setText(const String& text);

   protected:
    TextStyle d_style;
    String d_text;
};

}  // namespace easee

#endif
