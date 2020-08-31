#ifndef EASEE_COLOR_H
#define EASEE_COLOR_H

namespace easee {

class Color {
   public:
    static Color BLACK;
    static Color WHITE;
    static Color RED;
    static Color GREEN;
    static Color BLUE;

    Color(int r, int g, int b, float a = 1);

    inline int r() { return d_r; };
    inline int g() { return d_g; };
    inline int b() { return d_b; };
    inline float a() { return d_a; };

   protected:
    int d_r;
    int d_g;
    int d_b;
    float d_a;
};

}  // namespace easee

#endif
