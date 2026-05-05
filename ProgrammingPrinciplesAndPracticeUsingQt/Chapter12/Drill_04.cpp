/*
Author: Kirteekumar
Date:04.05.2026

Chapter11: Drill04:
Now deﬁne a function called f() for D1 and repeat 1–3. Explain the results.
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

    //f() for D1 can be defined. It compiles without error.
    //Becuase it is not virutal -> b1.f() prints B1::f().

	return 0;
}
