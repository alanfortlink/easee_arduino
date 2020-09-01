#include <luminosity.h>
#include <luminosity_card.h>
#include <provider.h>
#include <rect.h>
#include <text.h>

namespace easee {

const int PADDING = 10;

LuminosityCard::LuminosityCard(int x, int y, int width, int height)
    : Component(x, y, width, height) {}

void LuminosityCard::draw(Display& display) {
    Rect(d_x + PADDING, d_y + PADDING, d_width - PADDING, d_height - PADDING,
         Color::PURPLE)
        .render(display);

    String temperatureTxt;
    temperatureTxt +=
        (int)Provider<Luminosity::LuminosityData>::instance()->get().luminosity;

    Text(d_x + 2 * PADDING, d_y + 2 * PADDING, d_width - 2 * PADDING,
         d_height - 2 * PADDING, temperatureTxt,
         TextStyle(5, Color::WHITE, Color::PURPLE))
        .render(display);

    Text(d_x + 2 * PADDING, d_y + d_height - 2 * PADDING, d_width - 2 * PADDING,
         d_height - 2 * PADDING, "Luminosity",
         TextStyle(2, Color::WHITE, Color::PURPLE))
        .render(display);
}

void LuminosityCard::loop(int t) { invalidate(); }

}  // namespace easee
