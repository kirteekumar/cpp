/*
Author: Kirteekumar
Date:02.05.2026

Excercise06:
What happens when you draw a Shape that doesn’t ﬁt inside its window? What happens
when you draw a Window that doesn’t ﬁt on your screen? Write two programs that illus-
trate these two phenomena.
*/

#include "string"
#include "PPP/Simple_window.h"


int main()
{
    Application app;

    //Simple_window win = {{0,0},500,500,"my window"};

    //Rectangle rct{{0,0}, 100, 100}; //inside window
    //Rectangle rct{{0,0}, 100 + 500 , 100 + 500}; //outside window
    //result:On the upper and left side, line is visible but right and down side is not.

    //win.attach(rct);


    int w = x_max()  ;  //width
    int h = y_max() ;   //height
    Simple_window win = {{0,0},w + 500,h + 500,"my window"};
    //Result: Program runs.
    //max window can not be seen?? TODO


    win.wait_for_button();

	return 0;
}
