
#include <string>
#include <functional>

using namespace std;
using Callback = std::function<void()>;

struct Point {

};

struct Shape {

};


class Widget {
    Widget(Point xy, int w, int h, const string& s, Callback cb);
};


class Window {
public:
    Window(int w, int h, const string& title );			// let the system pick the location
    Window(Point xy, int w, int h, const string& title );	// top left corner in xy
    virtual ~Window();

    int x_max() const { return w; }
    int y_max() const { return h; }

    void resize(int ww, int hh);

    void set_label(const string& s);

    void attach(Shape& s);
    void attach(Widget& w);

    void detach(Shape& s);	// remove s from shapes
    void detach(Widget& w);	// remove w from window (deactivate callbacks)

    void put_on_top(Shape& s);	// put p on top of other shapes

    WindowPrivate& get_impl() const;
    void draw();
    void close();
    void wait_for_button(Button* button);
    void end_button_wait();
    void timer_wait(int milliseconds);
    void timer_wait(int milliseconds, std::function<void()> cb);
private:
    Point p;
    int w,h;					// window size
    unique_ptr<WindowPrivate> impl;
    void init();
};

int gui_main();	// invoke GUI library's main event loop

inline int x_max() { return 1024; }	// width of screen in pixels
inline int y_max() { return 768; }	// height of screen in pixels

}

struct Simple_window : Window {

};



int main(){

	return 0;
}


