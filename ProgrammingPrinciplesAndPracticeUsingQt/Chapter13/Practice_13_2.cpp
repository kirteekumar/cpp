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

    constexpr int xmax = 600;   //window size
    constexpr int ymax = 400; //window size

    constexpr int x_orig = xmax/2; //origin
    constexpr int y_orig = ymax/2; //origin

    constexpr Point orig {x_orig,y_orig}; //origin

    constexpr int r_min = -10; //Range:
    constexpr int r_max = 11; //Range:

    constexpr int n_points = 400; //number of points used in range :

    constexpr int x_scale = 30; //Not understood
    constexpr int y_scale = 30; //Not understood

    Simple_window win {Point{100,100},xmax,ymax,"Three function"};

    Function s(one      ,r_min,r_max,orig,n_points,x_scale,y_scale);
    Function s2(slope   ,r_min,r_max,orig,n_points,x_scale,y_scale);
    Function s3(square  ,r_min,r_max,orig,n_points,x_scale,y_scale);

    Text ts {Point{100,y_orig-40},"one"};
    Text ts2 {Point{100,y_orig+y_orig/2-20},"0.5∗x"};
    Text ts3 {Point{x_orig-100,20},"x∗x"};

    win.set_label("Function graphing: label functions");

    constexpr int xlength = xmax-40;
    constexpr int ylength = ymax-40;

    Axis x {Axis::x, orig , xlength, xlength/x_scale, "one notch = 1" };
    Axis y {Axis::y, orig , ylength, ylength/y_scale, "one notch = 1" };
    x.set_color(Color::red);
    y.set_color(Color::red);

    win.attach(s);
    win.attach(s2);
    win.attach(s3);
    win.attach(ts);
    win.attach(ts2);
    win.attach(ts3);
    win.attach(x);
    win.attach(y);

    win.wait_for_button();

    return 0;
}
