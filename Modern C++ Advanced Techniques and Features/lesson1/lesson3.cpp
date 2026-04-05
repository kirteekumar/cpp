#include <iostream>
#include <string>
#include <vector>

using namespace std;

//constrexpr can be function or variables. c++11
constexpr int multiply (int x, int y)
{
	return x*y;
}


//consteval are only functions and not variables c++20
consteval int getNumPlayers(int numTeams)
{
	return 11*numTeams;
}

//
constinit int myFlobal = 42;

string players[getNumPlayers(20)];

int main()
{	int a=0;
	a = multiply(3,4);
	cout << a << endl; 
	cout <<  players[0] << endl; 

	return 0;

}

