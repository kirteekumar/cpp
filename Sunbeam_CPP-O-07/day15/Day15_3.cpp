#include<iostream>

using namespace std;


class Shape
{
	protected:
		float area;
	virtual void acceptRecord() = 0;
	
	virtual void calculateArea() = 0;
	
	void printArea()
	{
		cout<<"Area : "<<area<<endl;
	}
};

class Rectangle : public Shape
{
	private:
		float length;
		float breadth;

	public:
	void acceptRecord(void)
	{
		cout<<"Length : "<<endl;
		cin>>length;
		cout<<"Breadth : "<<endl;
		cin>>breadth;
	}
	void calculateArea(void)
	{
		this->area = this->length * this->breadth;
	}
	void printRecord(void)
	{
		cout<<"Area : "<<area<<endl;
	}

};
class Math
{
	public:
		const static float PI;
		static float pow(float base, int index)
		{
			cout<<"Math::pow:: Base is :"<<base<<endl;
			float result = 1.0;
			for(int count = 1;count <=index ; count++)
			{
				cout<<"result is : "<<result<<endl;
				cout<<result<<endl;
				result = result * base;
			}
			return result;
		}
};

const float Math :: PI = 3.14; 



class Circle : public Shape 
{
	private:
		float radius;
	public:
		void acceptRecord(void)
		{
			cout<<"radius : "<<endl;
			cin>>radius;
			cout<<"radius accepted : "<<this->radius<<endl;
		}
		void calculateArea(void)
		{
			this->area = Math::PI * Math::pow(this->radius,2); 
			cout<<"area is calculated: "<<this->area<<endl;
		}
		void printArea()
		{
			cout<<"area : "<<area<<endl;
		}
};

int main()
{
	Rectangle rect;
	rect.acceptRecord();
	rect.calculateArea();
	rect.printRecord();

	Circle c;
	c.acceptRecord();
	c.calculateArea();
	c.printArea();

	return 0;

}
