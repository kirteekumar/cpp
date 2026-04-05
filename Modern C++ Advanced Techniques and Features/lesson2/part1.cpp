#include <iostream>
#include <vector>

using namespace std;

//rvalue

class Out
{

};

Out calculate()
{
	Out o;
	return o;
}

void someFunc(Out &&o_rv)
{

}


int main()
{
	someFunc(calculate()); //OK
	
	return 0;

}

