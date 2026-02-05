#include<iostream>
using namespace std;

#define SIZE 3

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

	Array a1(3);
	Array a2(3);
	Array a3(3);

	a3.~Array();
	return 0;
}


