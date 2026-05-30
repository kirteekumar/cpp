#include "iostream"

template<typename T>
struct Link {
	Link* prev;
	Link* succ;
	T val;
};

/*
template<typename T> 
struct List {
	Link<T> * first;
	Link<T> * last;
};
*/

class List{
public:
	class iterator;
	iterator begin();
	iterator end();
};

int main()
{
	return 0;
}


