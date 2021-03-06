#ifndef EASEE_TEXTSTYLE_H
#define EASEE_TEXTSTYLE_H

#include <color.h>

namespace easee {

class TextStyle {
   public:
    static TextStyle NORMAL;

    TextStyle(int fontSize = 10, Color color = Color::WHITE,
              Color bgColor = Color::BLACK);

    inline const Color& color() const { return d_color; };
    inline const Color& bgColor() const { return d_bgColor; };
    inline int fontSize() const { return d_fontSize; };

   protected:
    int d_fontSize;
    Color d_color;
    Color d_bgColor;
};

}  // namespace easee

#endif
