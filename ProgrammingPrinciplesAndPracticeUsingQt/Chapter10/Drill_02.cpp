/*
Author: Kirteekumar
Date:02.05.2026

Drill02:
Now add the examples from §10.7 one by one, testing between each added subsection
example.
*/

#include "PPP/Simple_window.h"

double dsin(double d) { return sin(d); } // chose the right sin() (§13.3)


int main()
{
    //QWidget: Must construct a QApplication before a QWidget
    Application App;

    Point pt{0,0}; //point value has no effect: TODO:
    Simple_window win = {pt, 800,800,"My Windw"};

    //--------------------------DRILL02---------------------------
    Axis xa {Axis::x, Point{20,300}, 280, 10, "x axis"}; // make an Axis
    win.attach(xa);
    win.set_label("X axis");

    Axis ya {Axis::y, Point{20,300}, 280, 10, "y axis"};
    ya.set_color(Color::cyan);
    ya.label.set_color(Color::dark_red);
    win.attach(ya);
    win.set_label("Y axis");

    Function sine {dsin,0,100,Point{20,150},1000,50,50};
    win.attach(sine);
    win.set_label("Sine");


    sine.set_color(Color::blue);
    Polygon poly;
    poly.add(Point{300,200});
    poly.add(Point{350,100});
    poly.add(Point{400,200});
    poly.set_color(Color::red);

    win.attach(poly);
    win.set_label("Triangle");

    Rectangle r {Point{200,200}, 100, 50};
    win.attach(r);
    win.set_label("Rectangle");

    Closed_polyline poly_rect;
    poly_rect.add(Point{100,50});
    poly_rect.add(Point{200,50});
    poly_rect.add(Point{200,100});
    poly_rect.add(Point{100,100});
    win.set_label("Polyline");
    win.attach(poly_rect);

    poly_rect.add(Point{50,75});
    win.set_label("Polyline 2");

    r.set_fill_color(Color::yellow);
    // color the inside of the rectangle
    poly.set_style(Line_style(Line_style::dash,4));
    poly_rect.set_style(Line_style(Line_style::dash,2));
    poly_rect.set_fill_color(Color::green);
    win.set_label("Fill");

    Text t {Point{150,150}, "Hello, graphical world!"};
    win.attach(t);

    t.set_font(Font::times_bold);
    t.set_font_size(20);
    win.set_label("Bold text");

    t.set_font(Font::times_bold);
    t.set_font_size(20);
    win.set_label("Bold text");

    Image copter {Point{100,50},"/home/kirteekumar/cpp/ProgrammingPrinciplesAndPracticeUsingQt/Chapter01/mars_copter.jpg"};
    win.attach(copter);
    win.set_label("Mars copter");

    copter.move(100,250);
    win.set_label("Move");

    Circle c {Point{100,200},50};
    Ellipse e {Point{100,200}, 75,25};
    e.set_color(Color::dark_red);
    Mark m {Point{100,200},'x'};
    m.set_color(Color::red);

    ostringstream oss;
    oss << "screen size: " << x_max() << "∗" << y_max()
        << "; window size: " << win.x_max() << "∗" << win.y_max();
    Text sizes {Point{100,20},oss.str()};
    Image scan{ Point{275,225},"/home/kirteekumar/cpp/ProgrammingPrinciplesAndPracticeUsingQt/Chapter01/scandinavia.jpg" };
    scan.scale(150,200);
    win.attach(c);
    win.attach(m);
    win.attach(e);
    win.attach(sizes);
    win.attach(scan);
    win.set_label("Final!");

    win.wait_for_button();

	return 0;
}
