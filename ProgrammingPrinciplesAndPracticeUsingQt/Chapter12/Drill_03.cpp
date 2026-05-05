/*
Author: Kirteekumar
Date:03.05.2026

Chapter11: Drill03:
Deﬁne a reference to B1 (a B1&) and initialize that to the D1 object you just deﬁned. Call vf()
and f() for that reference.
*/

#include "PPP/Simple_window.h"

using namespace Graph_lib;

class B1 {
public:
    virtual void vf(){cout<<"B1::vf()"<<endl;}
    void f(){cout<<"B1::f()"<<endl;}
};

class D1:public B1 {
public:
    void vf()override {cout<<"D1::vf()"<<endl;}
    void f(){cout<<"D1::f()"<<endl;}
};

int main()
{
    D1 d1;
    B1& b1 = d1;

    b1.vf();
    b1.f();

	return 0;
}
