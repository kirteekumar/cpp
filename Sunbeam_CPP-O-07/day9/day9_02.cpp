#include<iostream>
using namespace std;

#define SIZE 3

class Complex
{

	private:
		int real;
		int imag;
	public:
		Complex(void): real(0), imag(0)
		{
		}
		Complex(int real, int imag): real(real), imag(imag)
		{
		}

		void printRecord(void)
		{
			cout << "Real "<<  real << endl;
			cout << "Imag "<<  imag << endl;
		}
};


class Array
{
	private:
		int *arr;
		int size;
	
	public:
		~Array()
		{
			cout << "distructor " << this << endl ;
			if(this->arr!=NULL)
			{
				delete[] this->arr; 
				this->arr = NULL;
			}
		}


		
		Array(int size)
		{
			this->size = size;
			this->arr = new int[this->size];

		}
		void acceptRecord(void)
		{

				cout<<"Ele : " ;
			for (int i=0;i<size;i++)
			{
				cin>>arr[i];
			}

		}
		void printRecord(void)
		{
			for (int i=0;i<size;i++)
				cout<<arr[i]<<endl;
		}

};


int main()
{
	Complex c1(10,20);
	Complex c2 = c1;

	c2.printRecord();

	return 0;
}


