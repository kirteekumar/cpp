/*
Author: Kirteekumar
Date:02.05.2026

Excercise04:
Draw a 3-by-3 tic-tac-toe board of alternating white and red squares.*/

#include "string"
#include "PPP/Simple_window.h"


int main()
{
    Application app;

    Simple_window win = {{0,0},1500,500,"my window"};

    Rectangle rec1 = {{0,0}, 100,100};
    rec1.set_fill_color(Color::white);
    Rectangle rec2 = {{100,0}, 100,100};
    rec2.set_fill_color(Color::red);
    Rectangle rec3 = {{200,0}, 100,100};
    rec3.set_fill_color(Color::white);
    Rectangle rec4 = {{0,100}, 100,100};
    rec4.set_fill_color(Color::red);
    Rectangle rec5 = {{100,100}, 100,100};
    rec5.set_fill_color(Color::white);
    Rectangle rec6 = {{200,100}, 100,100};
    rec6.set_fill_color(Color::red);
    Rectangle rec7 = {{0,200}, 100,100};
    rec7.set_fill_color(Color::white);
    Rectangle rec8 = {{100,200}, 100,100};
    rec8.set_fill_color(Color::red);
    Rectangle rec9 = {{200,200}, 100,100};
    rec9.set_fill_color(Color::white);

    win.attach(rec1);
    win.attach(rec2);
    win.attach(rec3);
    win.attach(rec4);
    win.attach(rec5);
    win.attach(rec6);
    win.attach(rec7);
    win.attach(rec8);
    win.attach(rec9);
    win.wait_for_button();

	return 0;
}
