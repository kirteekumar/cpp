#include "iostream"

using namespace std;

template<Element T>
void Vector<T>::resize(int newsize, T def=T{})

//Use T{} as default value unless we say otherwise

Vector <double> v1;

v1.resize(100);
v1.resize(200,0.0);
v1.resize(300,1.0);

class No_default{
	No_default(int);
}

Vector <No_default> v2(10);
Vector <No_default> v3;

v3.resize(100,No_default{2});
v3.resize(200);


int main()
{
	
	return 0;
}