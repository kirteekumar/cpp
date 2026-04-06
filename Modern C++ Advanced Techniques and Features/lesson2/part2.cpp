#include <iostream>
#include <vector>

using namespace std;

//xvalue
//temp lifespan


//&& - rvalue reference

class Out
{

};

Out calculate()
{
	Out o;
	return o;
}




class Widget
{
    private:
    string  data;

    public:
    Widget(){}
    Widget(const Widget& wl)
    {
        
    }
    Widget& operator=(const Widget& wl)
    {
        Widget w ;

        return  w;
    }

};

Widget makeWidget()
{
    Widget w;
    return w;
}

int main()
{

    Out o;
    o = makeWidget();

	return 0;

}

