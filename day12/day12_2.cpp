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

int main()
{
			
	int num1;
	int num2;
	::acceptRecord("num1 : ",num1);
	::acceptRecord("num2: ",num2);

	try
	{
	
	if (num2==0)
	{
		ArithmaticException ex("divide by zero");
		throw ex;
	}
	else
	{	
	int result = num1/num2;
	::printRecord(result);
	}
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

