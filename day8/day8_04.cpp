
#include<stdio.h>
#include <iostream>

using namespace std;


class Test 
{
	private:
	int num1; //instance variable.
	int num2; //iv
	static int num3; //iv

	public:
	Test(int num1, int num2)
	{
		this->num1=num1;
		this->num2=num2;
	}

	void printRecord(void)
	{
		cout<<"num1: "<<num1<<endl;
		cout<<"num2: "<<num2<<endl;
		cout<<"num3: "<<num3<<endl;
	}
	
};

int Test::num3 = 500;

int main()
{
	Test t1(10,20);
	Test t2(30,40);
	
	t1.printRecord();
	t2.printRecord();

	return 0;
}


