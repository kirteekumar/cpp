/*
Author: Kirteekumar
Date:04.05.2026

Chapter11: Drill06:
Deﬁne a class B2 with a pure virtual function pvf(). Deﬁne a class D21 with a string data
member and a member function that overrides pvf(); D21::pvf() should output the value of the
string. Deﬁne a class D22 that is just like D21 except that its data member is an int. Deﬁne a
function f() that takes a B2& argument and calls pvf() for its argument. Call f() with a D21 and
a D22.
*/

#include "PPP/Simple_window.h"
#include "string"
using namespace Graph_lib;

class B2 {
public:
    virtual void pvf()=0;
};

class D21 :public B2{
public:
    void pvf () override { cout << "D21 : str : " << str << endl;}
    string str = "string";
};

class D22 :public B2{
public:
    void pvf () override { cout << "D22 : int : " << a << endl;}
    int a=1234;
};

void f(B2& b2)
{
    b2.pvf();
}

int main()
{
    D21 d21;
    D22 d22;

    f(d21);
    f(d22);

	return 0;
}
