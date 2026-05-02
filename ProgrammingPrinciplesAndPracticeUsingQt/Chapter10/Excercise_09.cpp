/*
Author: Kirteekumar
Date:02.05.2026

Excercise09:
Display an image on the screen, e.g., a photo of a friend. Label the image both with a
title on the window and with a caption in the window.
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
