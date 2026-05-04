/*
Author: Kirteekumar
Date:03.05.2026

Chapter11: Drill01:
Deﬁne a class B1 with a virtual function vf() and a non-virtual function f(). Deﬁne both of
these functions within class B1. Implement each function to output its name (e.g., B1::vf()).
Make the functions public. Make a B1 object and call each function.
*/

#include "PPP/Simple_window.h"

using namespace Graph_lib;

class B1 {
public:
    virtual void vf(){cout<<"B1::vf()"<<endl;}
    void f(){cout<<"B1::f()"<<endl;}
};

int main()
{
    B1 b1;

    b1.vf();
    b1.f();

	return 0;
}
