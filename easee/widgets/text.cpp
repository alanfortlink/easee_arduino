#include <text.h>

namespace easee {

Text::Text(int x, int y, int width, int height, const String& text,
           const TextStyle& style)
    : Component(x, y, width, height), d_text(text), d_style(style) {}

Text::~Text() {}

void Text::setText(const String& text) {
    if (d_text != text) {
        d_text = text;
        invalidate();
    }
}

void Text::draw(Display& display) {
    display.fillRect(d_x, d_y, d_width, d_height, d_style.bgColor());
    display.drawText(d_text, d_x, d_y, d_style);
}

}  // namespace easee
