#include <iostream>

using namespace std;

void acceptRecord(string msg, int &number)
{
	cout <<msg;
	cin>>number;
}

class ArithmaticException
{
	private:
	string message;
	public:
	ArithmaticException(string message)
	{
		this->message = message;
	}
	string getMessage()
	{
		return this->message;
	}
};

		 

void printRecord(int result)
{
	cout<<"Result : "<<result<<endl;
}

int calculate(int num, int den)
{
	if (den==0)
	{
		throw ArithmaticException("divide by 0");
	}
	else
	{
		int result=num/den;
		return result;
	}
}

int main()
{
			
	int num1;
	int num2;
	::acceptRecord("num1: ",num1);
	::acceptRecord("num2: ",num2);

	try
	{
		int result; 
		result = ::calculate(num1, num2);	
		cout << "res : " << result << endl ;
	}

	catch(int x)
	{
		cout << "divide by 0!!" << endl;
	}

	catch(double x)
	{
		cout << "divide by float" << endl;
	}


	catch(ArithmaticException &ex)
	{
		cout << ex.getMessage() << endl;
		
	}


	cout << "connection closed" <<endl;
	return 0;
	
     




}

