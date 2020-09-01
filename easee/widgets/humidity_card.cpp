#include <card.h>
#include <humidity_card.h>
#include <provider.h>
#include <rect.h>
#include <temperature.h>
#include <text.h>

namespace easee {

const int PADDING = 10;

HumidityCard::HumidityCard(int x, int y, int width, int height)
    : Component(x, y, width, height) {}

void HumidityCard::draw(Display& display) {
    Rect(d_x + PADDING, d_y + PADDING, d_width - PADDING, d_height - PADDING,
         Color::DARK_GREEN)
        .render(display);

    String humidityTxt;
    humidityTxt +=
        (int)Provider<Temperature::TemperatureData>::instance()->get().humidity;

    Text(d_x + 2 * PADDING, d_y + 2 * PADDING, d_width - 2 * PADDING,
         d_height - 2 * PADDING, humidityTxt,
         TextStyle(5, Color::WHITE, Color::DARK_GREEN))
        .render(display);

    Text(d_x + 2 * PADDING, d_y + d_height - 2 * PADDING, d_width - 2 * PADDING,
         d_height - 2 * PADDING, "Humidity",
         TextStyle(2, Color::WHITE, Color::DARK_GREEN))
        .render(display);
}

void HumidityCard::loop(int t) {
    invalidate();
}

}  // namespace easee
