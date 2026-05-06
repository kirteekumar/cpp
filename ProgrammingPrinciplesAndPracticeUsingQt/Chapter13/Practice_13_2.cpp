/*
Author: Kirteekumar
Date:03.05.2026

Chapter11: Drill01:
Deﬁne a class B1 with a virtual function vf() and a non-virtual function f(). Deﬁne both of
these functions within class B1. Implement each function to output its name (e.g., B1::vf()).
Make the functions public. Make a B1 object and call each function.
*/

#include "PPP/Simple_window.h"

using namespace Graph_lib;

double one(double) {return 1;}
double slope(double x) {return 0.5 *x;}
double square(double x) {return x*x;}

int main()
{
    Application app;

    constexpr int xmax = 600;
    constexpr int ymax = 600;

    constexpr int x_orig = xmax/2;
    constexpr int y_orig = ymax/2;

    constexpr Point orig {x_orig,y_orig};

    constexpr int r_min = -10;
    constexpr int r_max = 11;

    constexpr int n_points = 400;

    constexpr int x_scale = 30;
    constexpr int y_scale = 30;

    Simple_window win {Point{100,100},xmax,ymax,"Three function"};

    Function s(one,r_min,r_max,orig,n_points,x_scale,y_scale);
    Function s2(slope,r_min,r_max,orig,n_points,x_scale,y_scale);
    Function s3(square,r_min,r_max,orig,n_points,x_scale,y_scale);

    win.attach(s);
    win.attach(s2);
    win.attach(s3);

    win.wait_for_button();

    return 0;
}
