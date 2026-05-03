/*
Author: Kirteekumar
Date:03.05.2026

Chapter11: Drill03:
Make the eight squares on the diagonal starting from the top left corner red (use Rectangle).*/

#include "PPP/Simple_window.h"

using namespace Graph_lib;

int main()
{
    Application app;
    Simple_window win ({0,0},800,1000,"Simple_window");

    int pixel = 100;

    int rc=8; //row = column = 8

    Lines lns;

    for(int i=0; i<rc; i++)
            lns.add({ 0 , i * pixel},{ rc * pixel , i * pixel});

    for(int i=0; i<rc; i++)
        lns.add({ pixel * i , 0},{ i * pixel , rc * pixel });


    win.attach(lns);

    win.wait_for_button();

	return 0;
}
