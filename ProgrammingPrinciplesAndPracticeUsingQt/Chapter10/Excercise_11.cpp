/*
Author: Kirteekumar
Date:02.05.2026

Excercise11:
Draw a series of regular polygons, one inside the other. The innermost should be an equi-
lateral triangle, enclosed by a square, enclosed by a pentagon, etc. For the mathemati-
cally adept only: let all the points of each N-polygon touch sides of the (N+1)-polygon.
Hint: The trigonometric functions are found in <cmath> and module std (PPP2.§24.8).
*/

#include "string"
#include "PPP/Simple_window.h"


int main()
{
    Application app;


    Simple_window win = {{0,0},500,500,"my window"};
    //Point bp = {200,200}; //begining point

    //TODO: Too much mathematical

    //win.attach(txt);

    win.wait_for_button();

	return 0;
}
