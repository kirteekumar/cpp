#include <iostream>
using namespace std;

class Outer //top level class
{
	private:
		int num1;
		static int num2;
	public:
		class Inner
		{
			private:
				int num3;
				static int num4;
			public:
				Inner(void) : num3(30) {}

				friend class Outer;
		};
	Outer(void) : num1(10) {}
	void printRecord()
	{
		cout << this->num1 << endl;
		cout << Outer::num2 << endl;
		Inner in;
		cout<<"Num3 : "<<in.num3<<endl;
	}
};

int Outer :: num2 = 20;
int Outer :: Inner :: num4 = 40;


int main()
{
	Outer o;
	o.printRecord();
	return 0;
}
