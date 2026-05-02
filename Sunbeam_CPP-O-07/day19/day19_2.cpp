#include <iostream>

#include <fstream>
#include <string>


using namespace std;

int main()
{
	ifstream f1("file.txt");
	int ch;
	string str;

	if(!f1)
	{
		cout<<"failed to open"<<endl;
	}
	while((getline(f1,str)))
	{
		cout<<str;
	}
	return 0;
}
