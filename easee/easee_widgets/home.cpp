#include <card.h>
#include <home.h>
#include <rect.h>
#include <touch_display.h>

namespace {
const int CARD_SIZE = easee::TouchDisplay::WIDTH / 2;
}

namespace easee {

Home::Home(int x, int y, int width, int height)
    : Widget(x, y, width, height),
      d_temperatureCard(x, y, CARD_SIZE, CARD_SIZE),
      d_humidityCard(x + CARD_SIZE, y, CARD_SIZE, CARD_SIZE),
      d_luminosityCard(x, y + CARD_SIZE, CARD_SIZE, CARD_SIZE) {}

void Home::drawBackground(Display& display) {
    if (d_isFirstTime)
        display.fillRect(d_x, d_y, d_width, d_height, Color::BLACK);
    d_temperatureCard.render(display);
    d_humidityCard.render(display);
    d_luminosityCard.render(display);
}

void Home::drawForeground(Display& display) {
    d_temperatureCard.render(display);
    d_humidityCard.render(display);
    d_luminosityCard.render(display);
}

void Home::loop(int t) {
    Widget::loop(t);
    d_temperatureCard.loop(t);
    d_humidityCard.loop(t);
    d_luminosityCard.loop(t);
}

}  // namespace easee
