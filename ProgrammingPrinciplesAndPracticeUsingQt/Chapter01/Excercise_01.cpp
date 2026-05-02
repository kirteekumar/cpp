/*
Author: Kirteekumar
Date:02.05.2026

Excercise01:
Draw a rectangle as a Rectangle and as a Polygon. Make the lines of the Polygon red and
the lines of the Rectangle blue.
*/

#include "PPP/Simple_window.h"


int main()
{
    Application app;

    Simple_window win = {{0,0},500,500,"my window"};

    Closed_polyline rec_poly;
    rec_poly.add(Point{0,0});
    rec_poly.add(Point{200,0});
    rec_poly.add(Point{200,400});
    rec_poly.add(Point{0,400});
    win.attach(rec_poly);

    Rectangle rec = {Point{0,0},200,400};
    win.attach(rec);

    win.wait_for_button();

	return 0;
}
