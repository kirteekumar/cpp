/*
Author: Kirteekumar
Date:03.05.2026

Chapter11: Drill03:
Make the eight squares on the diagonal starting from the top left corner red (use Rectangle).
*/

#include "PPP/Simple_window.h"

//make_unique
#include <memory>


using namespace Graph_lib;

int main()
{
    Application app;

    //for a diagonal with square, a square window is needed. if slope of diagonal is not 1, we cant draw squares on it.
    Simple_window win ({0,0},1000,1000,"Simple_window");

    //draw a diagonal
    Line diagonal({0,0},{win.x_max(),win.y_max()});

    int sq = 100;

    Vector_ref<Rectangle> rect;

    for(int i=0;i<8;i++)
    {
        rect.push_back(make_unique<Rectangle>(Point{i * sq, i * sq},Point{(i+1) * sq, (i+1) * sq }));
        win.attach(rect[i]);
    }

    win.attach(diagonal);

    win.wait_for_button();

	return 0;
}
