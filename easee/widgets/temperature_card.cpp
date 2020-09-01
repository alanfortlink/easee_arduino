#include <card.h>
#include <provider.h>
#include <rect.h>
#include <temperature.h>
#include <temperature_card.h>
#include <text.h>

namespace easee {

const int PADDING = 10;

TemperatureCard::TemperatureCard(int x, int y, int width, int height)
    : Widget(x, y, width, height) {}

void TemperatureCard::drawBackground(Display& display) {
    Rect(d_x + PADDING, d_y + PADDING, d_width - PADDING, d_height - PADDING,
         Color::BLUE)
        .render(display);

    Text(d_x + 2 * PADDING, d_y + d_height - 2 * PADDING, d_width - 2 * PADDING,
         d_height - 2 * PADDING, "Temperature",
         TextStyle(2, Color::WHITE, Color::BLUE))
        .render(display);
}

void TemperatureCard::drawForeground(Display& display) {
    String temperatureTxt;
    temperatureTxt +=
        (int)Provider<Temperature::TemperatureData>::instance()->get().celsius;
    temperatureTxt += "C";
    Text(d_x + 2 * PADDING, d_y + 2 * PADDING, d_width - 2 * PADDING,
         d_height - 2 * PADDING, temperatureTxt,
         TextStyle(5, Color::WHITE, Color::BLUE))
        .render(display);
}

void TemperatureCard::loop(int t) {}

}  // namespace easee
