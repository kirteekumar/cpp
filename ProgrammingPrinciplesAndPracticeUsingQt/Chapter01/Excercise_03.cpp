/*
Author: Kirteekumar
Date:02.05.2026

Excercise02:
Draw your initials 150 pixels high. Use a thick line. Draw each initial in a different
color.*/

#include "string"
#include "PPP/Simple_window.h"


int main()
{
    Application app;

    Simple_window win = {{0,0},1500,500,"my window"};

    Text txt_1 = {Point{0,0},"K",};
    txt_1.set_font_size(150);
    txt_1.set_style(Line_style::solid);
    txt_1.set_color(Color::red);
    win.attach(txt_1);

    Text txt_2 = {Point{100,0},"I",};
    txt_2.set_font_size(150);
    txt_2.set_style(Line_style::solid);
    txt_2.set_color(Color::black);
    win.attach(txt_2);

    Text txt_3 = {Point{200,0},"R",};
    txt_3.set_font_size(150);
    txt_3.set_style(Line_style::solid);
    txt_3.set_color(Color::blue);
    win.attach(txt_3);

    Text txt_4 = {Point{300,0},"T",};
    txt_4.set_font_size(150);
    txt_4.set_style(Line_style::solid);
    txt_4.set_color(Color::cyan);
    win.attach(txt_4);

    Text txt_5 = {Point{400,0},"E",};
    txt_5.set_font_size(150);
    txt_5.set_style(Line_style::solid);
    txt_5.set_color(Color::green);
    win.attach(txt_5);

    Text txt_6 = {Point{500,0},"E",};
    txt_6.set_font_size(150);
    txt_6.set_style(Line_style::solid);
    txt_6.set_color(Color::visible);
    win.attach(txt_6);


    win.wait_for_button();

	return 0;
}
