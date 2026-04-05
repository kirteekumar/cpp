#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <memory>

using namespace std;

vector<int> vec;
auto iter = vec.begin();

class MySuperclass
{
	virtual void someFunc(int);
};

class MySubclass : public MySuperclass
{
	void someFunc(int) override; //sanity check
};

template<typename T>
struct Check
{
	static_assert(sizeof(int) <= sizeof(T), "T is not big enough!");
};

template<typename T>
T func(T x, T y)
{
	static_assert(std::is_integral<T>::value,"must be an integral");
}

class Emp
{
	private:
		string name;
		int age;
		string nat;
	public:
		Emp(string name, int age,string nat):name(name) , age(age), nat(nat)
		{
		}
};

template <typename... Types>
class tuple;
std::tuple<int, char, double> t1;


template<typename T, typename... Args>
shared_ptr<T> make_shared(Args&&... params);

std::shared_ptr<Emp> ptr = std::make_shared<Emp>("Andy",21,"Welsh") ;


typedef std::unordered_set<int> IntSet;
using IntSet = std::unordered_set<int>;

typedef void(*CallbackPtr)(int);
using CallBackPtr = void (*)(int);

template <typename... ArgsF1>
void f1(ArgsF1... args)
{
	//do something with args
}
template <typename... ArgsF2>
void f2(ArgsF2... args)
{
	f1(&args...); 	//&args... is a pack explansion
					//&args is its pattern
					//ksonawane: it will also add &
					//ksonawane: f1(&p1,&p2,&p3)
	//do something with args
}


int main()
{
	f2(1,0.2,"a");	
	return 0;

}

