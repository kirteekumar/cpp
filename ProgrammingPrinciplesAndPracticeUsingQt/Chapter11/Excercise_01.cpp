/*
Author: Kirteekumar
Date:03.05.2026

Chapter11: Excercise_01:
Deﬁne a class Arrow, which draws a line with an arrowhead.
*/

#include "PPP/Simple_window.h"

//make_unique
#include <memory>

using namespace Graph_lib;

struct Arrow : Shape {	// open sequence of lines
    using Shape::Shape;
    Arrow(std::initializer_list<Point> p = {}) : Shape(p)
    {
        //TODO
        //Calculate the 3 points

        //Draw the 3 points
        Point p3 = {180,80};
        Point p4 = {180,120};
        Point p5 = {200,100};

        //Add point 3
        Shape::add(p3);
        //Add point 4
        Shape::add(p4);
        //Add point 5
        Shape::add(p5);

        redraw();
    }
    void add(Point p) { Shape::add(p); redraw();}
    void draw_specifics(Painter& painter) const override;
};

void Arrow::draw_specifics(Painter &painter) const
{
    if (color().visibility() && 1 < number_of_points()) // draw sole pixel?
        for (int i = 1; i < number_of_points(); ++i)
            painter.draw_line(point(i - 1), point(i));
}


int main()
{
    Application app;

    //for a diagonal with square, a square window is needed. if slope of diagonal is not 1, we cant draw squares on it.
    Simple_window win ({0,0},1000,1000,"Simple_window");

    Arrow aro = {{100,100},{200,100}} ;

    win.attach(aro);
    win.wait_for_button();

    return 0;
}
