/*
Author: Kirteekumar
Date:02.05.2026

Excercise08:
Draw the Olympic ﬁve rings. If you can’t remember the colors, look them up.
*/

#include "string"
#include "PPP/Simple_window.h"


int main()
{
    Application app;


    Simple_window win = {{0,0},1500,1500,"my window"};
    Point bp = {200,200}; //begining point
    int r = 50;
    Circle c1 = { bp,r};
    Circle c2 = { bp,r};
    c2.move(100,0);
    Circle c3 = { bp,r};
    c3.move(200,0);
    Circle c4 = { bp,r};
    c4.move(50,50);
    Circle c5 = { bp,r};
    c5.move(150,50);
    c5.set_color(Color::green);
    c5.color();

    //TODO: Correct dimensions and all colors.

    win.attach(c1);
    win.attach(c2);
    win.attach(c3);
    win.attach(c4);
    win.attach(c5);

    win.wait_for_button();



	return 0;
}
