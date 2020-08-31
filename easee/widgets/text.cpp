#include <text.h>

namespace easee {

Text::Text(int x, int y, int width, int height, const String& text,
           Color bgColor, Color textColor)
    : Component(x, y, width, height),
      d_text(text),
      d_bgColor(bgColor),
      d_textColor(textColor) {}

Text::~Text() {}

void Text::draw(Display& display) {
    display.fillRect(d_x, d_y, d_width, d_height, d_bgColor);
    display.drawText(d_text, d_x, d_y, d_textColor);
}

}  // namespace easee
