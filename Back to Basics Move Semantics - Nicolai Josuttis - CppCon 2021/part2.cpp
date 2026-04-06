#include <iostream>
#include <vector>
#include <string>

using namespace std;


string getData()
{
	string *p = new std::string("New word");
	return *p;
}

int main()
{
	std::vector <std::string> coll;
	coll.reserve(3);
	std::string s{getData()};

	coll.push_back(s);

	coll.push_back(std::move(s));

	cout<<coll[0];
	cout<<coll[1];

	return 0;
}

