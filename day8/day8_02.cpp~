
#include<stdio.h>
#include <iostream>

using namespace std;

typedef int INT;

void swap (int &a, int &b)
{
}

class A 
{
	public:
		int a1;
		int a2;
		int a3;
	A(void):a1(0),a2(2),a3(0)
	{

	}
};

void input(A &obj1)
{
//	cin>>obj1.a1>>obj1.a2>>obj1.a3;
}


class Test 
{
	private:
		char &ref;
	public:
	Test(char &ch) : ref(ch)
	{
	}

	
	void incr(){ref++;}
	void disp(){cout<<ref<<endl;}
};

int main()
{
	int num1 = 10;	
	int &num2 = num1;
	
	int *p1 = &num1;
	int *& p2 = p1;
	
	int arr1[3] = {10,20,30};
	int (&arr2)[3] = arr1;
		
	class A obj1;
	char ch1 = 'a', ch2='b', ch3='c' ;

	Test arr[3] = {ch1, ch2, ch3};
	for(int i=0;i<3;i++)
		arr[i].disp();

	for(int i=0;i<3;i++)
		arr[i].incr();
	
	for(int i=0;i<3;i++)
		arr[i].disp();
	

	return 0;
}


