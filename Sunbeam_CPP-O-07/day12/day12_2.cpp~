#include <iostream>

using namespace std;

void acceptRecord(string msg, int &number)
{
	cout <<msg;
	cin>>number;
}


void printRecord(int result)
{
	cout<<"Result : "<<result<<endl;
}

int main()
{

	cout << "connection open" << endl;
	int num1;
	int num2;
	::acceptRecord("num1 : ",num1);
	::acceptRecord("num2: ",num2);

	int result = num1/num2;
	cout << result << endl;
	cout << "connection closed" <<endl;
	return 0;

}

