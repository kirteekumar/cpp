#include <iostream>

using namespace std;

class Complex
{
	private:
		int real;
		int imag;
	public:
		Complex(void)
		{
			this->real=0;
			this->imag=0;
		}
		Complex(int real, int imag)
		{
			this->real=real;
			this->imag=imag;
		}

Complex operator+(Complex &other)
{
	Complex temp;
	temp.real=this->real+other.real;
	temp.imag=this->imag+other.imag;
	return temp;
}

};


int main(void)
{
Complex a,b,c;
c=a+b; //a.operator+(b)

	return 0;
}
