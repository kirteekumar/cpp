#include <iostream>
#include <vector>

using namespace std;



int main()
{
	vector<int> v;
	cout<<"size : "<<v.size()<<endl;

	v.push_back(11);
	v.push_back(21);
	v.push_back(31);
	v.push_back(41);
	v.push_back(51);

	vector<int> :: iterator itr;
	itr = v.begin();
	
	do {
		cout<<*itr<<endl;
	}
	while(++itr!=v.end());



	return 0;
}
