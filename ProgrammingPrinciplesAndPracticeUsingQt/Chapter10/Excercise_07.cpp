/*
Author: Kirteekumar
Date:02.05.2026

Excercise07:
Draw a two-dimensional house seen from the front, the way a child would: with a door,
two windows, and a roof with a chimney. Feel free to add details; maybe have ‘‘smoke’’
come out of the chimney.
*/

#include "string"
#include "PPP/Simple_window.h"


int main()
{
    Application app;

    Simple_window win = {{0,0},1500,1500,"my window"};

    int hw = 1200; //house width
    int hh = 300;  //house height

    Point bp = {200,200}; //begining point
    Rectangle rct = {bp, hw, hh }; //inside window

    //A triangle above rectangle
    Closed_polyline cp = {bp};
    cp.add({200 + hw/3, 200} );
    cp.add({(200 + ((hw/3)/2)), 100} ); //middle

    //frame of roof
    Open_polyline op = {{(200 + ((hw/3)/2)), 100}};
    op.add({200 + hw - ((hw/3)/2), 100});
    op.add({200 + hw , 200});

    //door - vertical line
    Open_polyline opd = {{200 + hw/3, 200}};
    opd.add({200 + hw/3 , 200 + hh});

    win.attach(rct);
    win.attach(cp);
    win.attach(op);
    win.attach(opd);

    win.wait_for_button();

	return 0;
}
