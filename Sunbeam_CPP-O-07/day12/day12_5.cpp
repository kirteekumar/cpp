#include <iostream>

using namespace std;

class IllegalArgumentException{
	private: 
		string message;
	public:
	IllegalArgumentException(string message)
	{
		this -> message = message;
	}
	string getMessage(void)
	{
		return this-> message;
	}
};

class Complex
{

	private:
		int real;
		int imag;
	public:
	Complex(void) : real(0), imag(0)
	{}
	void setReal(int real)
	{
		if (real<0)
			throw IllegalArgumentException("Invalid real");
		this->real=real;
	}
	void setImag(int imag)
	{
		if(imag<0)
			throw IllegalArgumentException("Invalid Imag");
		this->imag = imag;
	}
	int getReal()
	{

		return 	this->real;
	}
	int getImag()
	{
		return this->imag;
	}

};


void acceptRecord(Complex &complex)
{
	int real , imag;
	cout << "real : ";
	try{
	cin >> real;
	complex.setReal(real);
	}
	catch(IllegalArgumentException &ex)
	{
		cout<<ex.getMessage()<<endl;
	}

	cout << "imag : ";
	try{
		cin >> imag;
		complex.setImag(imag);
	}
	catch(IllegalArgumentException &ex)
	{
		cout<<ex.getMessage()<<endl;
	}
}

void printRecord(Complex &complex)
{
 cout << "Real : "<< 	complex.getReal() << endl;
 cout << "Imag : "<< 	complex.getImag() << endl;

}

int main()
{			
	Complex complex;
	::acceptRecord(complex);



	return 0;
}

