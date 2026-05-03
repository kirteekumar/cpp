/*
Author: Kirteekumar
Date:03.05.2026

Chapter11: Drill05:
Add a 100-by-100 image. Have it move around from square to square when you click the
‘‘Next’’ button. Just put wait_for_button() in a loop with some code that picks a new square
for your image.
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
    win.attach(diagonal);

    int sq = 100;
    Vector_ref<Rectangle> rect;
    int i = 0;
    Image img(Point{i * sq, i * sq}, "/home/kirteekumar/cpp/ProgrammingPrinciplesAndPracticeUsingQt/Chapter10/mars_copter.jpg");

    for(i=0;i<4;i++)
    {
        rect.push_back(make_unique<Rectangle>(Point{i * sq, i * sq},Point{(i+1) * sq, (i+1) * sq }));
        img.set_mask({i * sq, i * sq},100,100); //TODO:only working with P(0,0)
        win.attach(img);
        win.attach(rect[i]);
        win.wait_for_button();
    }

	return 0;
}
