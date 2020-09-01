#include <textstyle.h>

namespace easee {

TextStyle TextStyle::NORMAL = TextStyle();

TextStyle::TextStyle(int fontSize, Color color, Color bgColor)
    : d_fontSize(fontSize), d_color(color), d_bgColor(bgColor) {}

}  // namespace easee
