#include<iostream>
using namespace std;

#define SIZE 3

class Complex
{

	private:
		int real;
		int imag;
	public:
		Complex(const Complex &other)
		{
			//shallow copy
			cout<<"copy constructor" <<endl; 
			this->real=other.real;
			this->imag=other.imag;
		}
		
		Complex(void): real(0), imag(0)
		{

			cout << "parameter less constructor" << endl ;
		}
		Complex(int real, int imag): real(real), imag(imag)
		{

			cout << "2 parameterized constructor" << endl ;
		}

		
		void printRecord(void)
		{
			cout << "Real "<<  real << endl;
			cout << "Imag "<<  imag << endl;
		}

		Complex sum(Complex &other)
		{
			cout << "parameterized constructor" << endl ;
			Complex temp;
			temp.real=this->real + other.real;
			temp.imag=this->imag + other.imag;
			return temp;
		}
};



int main()
{
	Complex c1(10,20);
	Complex c2(30,40);  //parameterized
	Complex c3; //parameter less cnstrctr
	cout << endl;
	c3 = c1.sum(c2); 
	
	cout << endl;
	c3=c2;
	c3.printRecord();

	try{
		Complex c1;
		throw c1;
	}
	catch(Complex ex)
	{
		
	}

	return 0;
}


