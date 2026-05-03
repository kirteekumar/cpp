/*
Author: Kirteekumar
Date:03.05.2026

Chapter11: Drill01:
Make an 800-by-1000 Simple_window.
*/

#include "PPP/Simple_window.h"

using namespace Graph_lib;

int main()
{
    Application app;
    Simple_window win ({0,0},800,1000,"Simple_window");

    win.wait_for_button();

	return 0;
}
