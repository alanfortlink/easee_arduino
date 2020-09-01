#include <text.h>

namespace easee {

Text::Text(int x, int y, int width, int height, const String& text,
           const TextStyle& style)
    : Widget(x, y, width, height), d_text(text), d_style(style) {}

Text::~Text() {}

void Text::setText(const String& text) {
    if (d_text != text) {
        d_text = text;
        invalidate();
    }
}

void Text::drawBackground(Display& display) {}

void Text::drawForeground(Display& display) {
    display.drawText(d_text, d_x, d_y, d_style);
}

}  // namespace easee
