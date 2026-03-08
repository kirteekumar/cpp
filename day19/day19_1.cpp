#include <iostream>
#include <list>


using namespace std;


int main()
{
	list<int> l1;
	l1.push_back(11);
	l1.push_back(22);
	l1.push_back(33);
	l1.push_back(44);
	l1.push_back(55);

	list<int> :: reverse_iterator ritr = l1.rbegin();
	do {
		cout<<*ritr<<endl;
	}while(++ritr!=l1.rend());

	return 0;

}
