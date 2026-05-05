/*
Author: Kirteekumar
Date:04.05.2026

Chapter11: Drill06:
Deﬁne a class D2 derived from D1 and override pvf() in D2. Make an object of class D2 and
invoke f(), vf(), and pvf() for it.
*/

#include "PPP/Simple_window.h"

using namespace Graph_lib;

class B1 {
public:
    virtual void vf(){cout<<"B1::vf()"<<endl;}
    virtual void pvf()=0;
    void f(){cout<<"B1::f()"<<endl;}
};

class D1:public B1 {
public:
    void vf()override {cout<<"D1::vf()"<<endl;}
    void pvf()override {cout<<"D1::pvf()"<<endl;}
    void f(){cout<<"D1::f()"<<endl;}
};

class D2: public D1{
public:
    void pvf()override {cout<<"D2::pvf()"<<endl;}
};

int main()
{
    //B1 b1; //Can not create object because B1 is an abstract class. (contains one pure virtual function)
    D1 d1;
    B1& b1 = d1;

    b1.vf();
    b1.pvf();
    b1.f();

    D2 d2;
    d2.vf();
    d2.pvf();
    d2.f();


    //f() for D1 can be defined. It compiles without error.
    //Becuase it is not virutal -> b1.f() prints B1::f().

	return 0;
}
