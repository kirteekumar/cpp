#include <iostream>

using namespace std;


class Complex
{

	private:
		int real;
		int imag;
	public:
		Complex(void){}
		Complex(int real, int imag) : real(real), imag(imag){}
		void showRecord() 
		{

		}

		//const Complex *const this = &obj;
		void printRecord() const
		{
			//Complex * const ptr = (Complex *)this;
			Complex * const ptr = const_cast<Complex*>(this);
			ptr->showRecord();
		}
};

int main()
{
	const Complex obj;
	obj.printRecord(); //OK
			   //
	return 0;
}
