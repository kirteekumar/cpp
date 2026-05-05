/*
Author: Kirteekumar
Date:03.05.2026

Chapter11: Drill02:
Derive a class D1 from B1 and override vf(). Make a D1 object and call vf() and f() for it.
*/

#include "PPP/Simple_window.h"

using namespace Graph_lib;

class B1 {
public:
    virtual void vf(){cout<<"B1::vf()"<<endl;}
    void f(){cout<<"B1::f()"<<endl;}
};

class D1:B1 {
public:
    void vf()override {cout<<"D1::vf()"<<endl;}
    void f(){cout<<"D1::f()"<<endl;}
};

int main()
{
    D1 d1;

    d1.vf();
    d1.f();

	return 0;
}
