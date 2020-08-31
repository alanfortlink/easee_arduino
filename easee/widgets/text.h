#ifndef EASEE_TEXT_H
#define EASEE_TEXT_H

#include <Arduino.h>
#include <component.h>

namespace easee {

class Text : public Component {
   public:
    Text(int x, int y, int width, int height, const String& text,
         Color bgColor = Color::WHITE, Color textColor = Color::BLACK);
    ~Text();

    virtual void draw(Display& display);

   protected:
    Color d_bgColor;
    Color d_textColor;
    String d_text;
};

}  // namespace easee

#endif
