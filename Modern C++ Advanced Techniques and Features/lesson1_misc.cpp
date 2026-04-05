#include <iostream>
#include <vector>

using namespace std;

vector<int> vec;
auto iter = vec.begin();

class MySuperclass
{
	virtual void someFunc(int);
}

class MySubclass : public MySuperclass
{
	void someFunc(int) override; //sanity check
};


int main()
{
	
	return 0;

}

