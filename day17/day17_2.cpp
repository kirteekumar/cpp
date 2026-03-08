#include <iostream>

using namespace std;

class Product
{
	private:
	string title;
	double price;


	public:
	Product()
	{
		this->title="";
		this->price=0.0;
	}

	Product(const string &title, double price)
	{
		this->title = title;
		this->price = price;
	}

	string getTitle() const
	{
		return this->title;
	}

	double getPrice() const
	{
		return this->price;
	}

	void setTitle(const string &title)
	{
		this->title=title;
	}

	void setPrice(double price)
	{
		this->price=price;
	}

	virtual void input()
	{
		cout<<"Enter the title : ";
		cin>>this->title;
		cout<<"Enter the price : ";
		cin>>this->price;
	}
		
	virtual void display()
	{
		cout<<" Title : "<<this->title<<endl;
	}
};

int main()
{
	return 0;
}
