#include "easee.h"

namespace easee {

Easee::Easee() : d_lcdDisplay_p(nullptr) {}

Easee::~Easee() {
    if (d_lcdDisplay_p) delete d_lcdDisplay_p;
}

void Easee::setup() {
    d_lcdDisplay_p = new LCDDisplay();
    d_lcdDisplay_p->setup();
}

void Easee::loop(int t) { d_lcdDisplay_p->loop(t); }

}  // namespace easee
