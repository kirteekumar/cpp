#include <iostream>

using namespace std;

class Outer //top level
{
	int num1;
	static int num2;
	public:
	Outer(void) : num1(10) {}
	class Inner
	{
		private:
			int num3;
			static int num4;
		public:
			Inner(void) : num3(30) {}
			void printRecord(void)
			{
				Outer out;
				cout<<"num1 : "<<out.num1<<endl;
				cout<<"num2 : "<<Outer::num2<<endl;
				cout<<"num3 : "<<this->num3<<endl;
				cout<<"num4 : "<<this->num4<<endl;

			}
	};
};

int Outer :: num2 = 20;
int Outer :: Inner :: num4 = 40;


int main()
{
	Outer :: Inner   in;
	in.printRecord();

	class Complex 
	{
		private:
			int real;
			int imag;
		public:
			Complex(void) : real(10), imag(20) {}
			void printRecord(void)
			{
				cout<<this->real<<" "<<this->imag<<endl;
			}

	};

	Complex c1;
	c1.printRecord();


}
