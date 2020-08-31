#include "easee.h"

namespace easee {

Easee::Easee() : d_lcdDisplay_p(nullptr) {}

Easee::~Easee() {
    if (d_lcdDisplay_p) delete d_lcdDisplay_p;
}

void Easee::setup() {
    d_lcdDisplay_p = new LCDDisplay();
    d_lcdDisplay_p->setup();

    d_lcdDisplay_p->setText("Natanael", "Ramos");
}

void Easee::loop(int t) { 
    if(t > 10000) {
        d_lcdDisplay_p->setText("Alan", "Martins");
    }else if(t > 5000){
        d_lcdDisplay_p->setText("Temp", "Person");
    }
    d_lcdDisplay_p->loop(t); 
}

}  // namespace easee
