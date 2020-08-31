#ifndef EASEE_TEXT_H
#define EASEE_TEXT_H

#include <Arduino.h>
#include <component.h>

namespace easee {

class Text : public Component {
   public:
    Text(int x, int y, int width, int height, const String& text,
         const TextStyle& style = TextStyle::NORMAL);
    ~Text();

    virtual void draw(Display& display);

    void setText(const String& text);

   protected:
    TextStyle d_style;
    String d_text;
};

}  // namespace easee

#endif
