/*
Author: Kirteekumar
Date:02.05.2026

Excercise10:
Draw the source ﬁle diagram from §10.8.1.
*/

#include "string"
#include "PPP/Simple_window.h"


int main()
{
    Application app;


    Simple_window win = {{0,0},500,500,"my window"};
    Point bp = {200,200}; //begining point

    string s = "Mars copter";

    Image img = {bp, "/home/kirteekumar/cpp/ProgrammingPrinciplesAndPracticeUsingQt/Chapter10/mars_copter.jpg"};
    Text txt = {{200,150}, s};
    win.set_label(s);

    win.attach(img);
    win.attach(txt);

    win.wait_for_button();

	return 0;
}
