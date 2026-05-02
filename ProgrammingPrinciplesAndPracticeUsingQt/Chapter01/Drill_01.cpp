/*
Author: Kirteekumar
Date:02.05.2026

Drill01:
Get an empty Simple_window with the size 600 by 400 and a label My window compiled,
linked, and run. Note that you have to link the Qt library, #include Graph.h and Sim-
ple_window.h in your code, and compile and link Graph.cpp and Window.cpp into your
program.
*/

#include "PPP/Simple_window.h"

int main()
{
    //QWidget: Must construct a QApplication before a QWidget
    Application App;

    Point pt{0,0}; //point value has no effect: TODO:
    Simple_window win = {pt, 800,800,"My Windw"};

    win.wait_for_button();

	return 0;
}
