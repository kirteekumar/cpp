#include<iostream>

using namespace std;

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


class Employee
{
	private:
		string name;
		int empid;
		double salary;
		Date joinDate; //association
	public:
		Employee(void) : name(""), empid(0), salary(0.0), joinDate() {}
		Employee(string name, int empid, double salary, Date joinDate) : name(name), empid(empid), salary(salary), joinDate(joinDate) {}
		Employee(string name, int empid, double salary, int day, int month, int year) : name(name), empid(empid), salary(salary), joinDate(day, month, year) {}

		void acceptEmployee(void)
		{
			cout <<"Name : ";
			cin>>name;
			cout <<"Empid: ";
			cin>>empid;
			cout <<"salary : ";
			cin>>salary;

			cout << "Date : ";
			this->joinDate.acceptDate();
		}

		void printEmployee(void)
		{
			cout <<"Name : "<<name<<endl;
			cout <<"Empid : "<<empid<<endl;
			cout <<"Salary : "<<salary<<endl;
			this->joinDate.printDate();
		}
};


int main1()
{
	Date dt1;
	dt1.acceptDate();
	dt1.printDate();

	return 0;
}
int main2()
{
	Date dt1(1,1,2000);
	Employee e1("Aditya",1,1000.0,dt1);

	e1.printEmployee();


	return 0;
}

int main()
{
	Employee e;
	
	e.acceptEmployee();
	e.printEmployee();


	return 0;
}


