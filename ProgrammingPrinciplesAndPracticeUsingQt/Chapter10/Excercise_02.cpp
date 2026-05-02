/*
Author: Kirteekumar
Date:02.05.2026

Excercise02:
Draw a 100-by-30 Rectangle and place the text ‘‘Howdy!’’ inside it.
*/

#include "PPP/Simple_window.h"


int main()
{
    Application app;

    Simple_window win = {{0,0},500,500,"my window"};

    Rectangle rec = {Point{0,0},100,30};
    win.attach(rec);

    Text txt = {Point{0,0},"Howdy!"};
    win.attach(txt);

    win.wait_for_button();

	return 0;
}
