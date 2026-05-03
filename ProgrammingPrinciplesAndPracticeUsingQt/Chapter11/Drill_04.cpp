/*
Author: Kirteekumar
Date:03.05.2026

Chapter11: Drill04:
Find a 200-by-200-pixel image (JPEG or GIF) and place three copies of it on the grid (each
image covering four squares). If you can’t ﬁnd an image that is exactly 200 by 200, use
set_mask() to pick a 200-by-200 section of a larger image. Don’t obscure the red squares.
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
    for(i=0;i<4;i++)
    {
        rect.push_back(make_unique<Rectangle>(Point{i * sq, i * sq},Point{(i+1) * sq, (i+1) * sq }));
        rect[i].set_fill_color(Color::red);
        win.attach(rect[i]);
    }

    Image img(Point{i * sq, i * sq}, "/home/kirteekumar/cpp/ProgrammingPrinciplesAndPracticeUsingQt/Chapter10/mars_copter.jpg");
    //img.set_mask(Point{i * sq, i * sq},100,100); //Not working

    win.attach(img);

    win.wait_for_button();

	return 0;
}
