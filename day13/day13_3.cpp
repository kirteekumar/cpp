#include<iostream>

using namespace std;

class Person
{
	private:
		string name;
		int age;
	public:
		Person(void) : name(""), age(0) {}
		Person(string name, int age) : name(name), age(age) {}
		void showRecord()
		{
			cout<<"name : "<<name<<endl;
			cout<<"age : "<<age<<endl;
		}
};

class Employee : public Person //base class parent class
{
	private:
		int empid;
		float salary;
	public:
		Employee(void) : 

}


class Date
{
	private:
		int day;
		int month;
		int year;

	public:
		Date(void) : day(0), month(0), year(0) {}
		Date(int day, int month, int year) : day(day), month(month), year(year) {}

	void acceptDate(void)
	{
		cout << "day : ";
		cin>>day;

		cout << "month : ";
		cin>>month;

		cout << "year : ";
		cin>>year;
	}

	void printDate(void)
	{
		cout << "Day : "<<day<<endl;
		cout << "Month : "<<month<<endl;
		cout << "Year : "<<year<<endl;
	}

};


class Customer
{
	private:
		string name;
		int empid;
		Date *dob;
 	public:
		Customer(void):name(""), empid(0), dob(NULL) {}
		Customer(string name, int empid) : name(name), empid(empid) 
		{
			dob=NULL;
		}
		Customer(string name, int empid, int day, int month, int year) : Customer(name, empid) 
		{
			dob = new Date(day,month, year);
		}

		void acceptEmployee(void)
		{
			cout <<"Name : ";
			cin>>name;
			cout <<"Empid: ";
			cin>>empid;
			this->acceptDate();
		}

		void printCustomer(void)
		{
			cout <<"Name : "<<name<<endl;
			cout <<"Empid : "<<empid<<endl;
			if(dob!=NULL)
				dob->printDate();

		}

		void acceptDate(void)
		{
			if(dob!=NULL)
			{
				delete dob;
				dob = NULL;
			}
			dob = new Date();
			dob->acceptDate();
		}
		~Customer()
		{
			if(dob!=NULL)
			{
				delete dob;
			}
		}
};


int main1()
{
	Date dt1;
	dt1.acceptDate();
	dt1.printDate();

	return 0;
}

int main()
{
	Customer c2("Aditya",1,1,1,2000);
	
	c2.printCustomer();

	return 0;
}


