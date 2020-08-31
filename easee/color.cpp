#include "color.h"

namespace easee {

Color Color::BLACK = Color(0, 0, 0);
Color Color::WHITE = Color(255, 255, 255);
Color Color::RED = Color(255, 0, 0);
Color Color::GREEN = Color(0, 255, 0);
Color Color::BLUE = Color(0, 0, 255);

Color::Color(int r, int g, int b, float a) : d_r(r), d_g(g), d_b(b), d_a(a) {}

}  // namespace easee
