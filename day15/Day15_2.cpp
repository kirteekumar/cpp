#include<iostream>

using namespace std;

class Rectangle
{
	private:
		float length;
		float breadth;
		float area;

	public:
	void acceptRecord(void)
	{
		cout<<"Length : "<<endl;
		cin>>length;
		cout<<"Breadth : "<<endl;
		cin>>breadth;
	}

}
