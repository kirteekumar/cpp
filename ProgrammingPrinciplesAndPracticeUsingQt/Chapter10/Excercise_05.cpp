/*
Author: Kirteekumar
Date:02.05.2026

Excercise04:
Draw a red 1/4-inch frame around a rectangle that is three-quarters the height of your
screen and two-thirds the width.
*/

#include "string"
#include "PPP/Simple_window.h"


int main()
{
    Application app;

    Simple_window win = {{0,0},1500,1500,"my window"};

    //3/4 = height


    int w = x_max() * 2 / 3 ; //2/3 = width
    int h = y_max() * 3 / 4 ; //3/4 = height

    Rectangle rec1 = {{0,0}, w,h};

    //Do conversion from 1/4 inch to pixel.
    //For simplicity, I will consider 1/4 inch of frame as a 25 pixels.

    //First I will move rectangle randomly somewhere inside so that frame would be visible.
    rec1.move(100,100);

    //100-25 = 75 (clearing 25 pixels of margin for the first point)
    Closed_polyline pl = {{75,75}};

    pl.add({100 + w + 25        , 75            }); //right side point
    pl.add({100 + w + 25        , 100 + h + 25  }); //come down
    pl.add({75                  , 100 + h + 25  }); //left side point

    win.attach(rec1);
    win.attach(pl);

    win.wait_for_button();

	return 0;
}
