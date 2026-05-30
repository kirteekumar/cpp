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

template <typename T>
class List{
public:
	class iterator;
	iterator begin();
	iterator end();

	iterator insert(iterator p, const T& v); //after p
	iterator erase(iterator p); //remove p from the list
	void push_back(const T& v);
	void push_front(const T& v);
	void pop_front();
	void pop_back();

	T& front();
	T& back();
};

//Iteration 19.3.2
template <typename T>
class List<T>::iterator 
{
	Link<T>*curr;
	public:
	iterator(Link<T>*p):curr{p}{}

	iterator& operator++() {curr=curr->succ;return *this;}
	iterator& operator--() {curr=curr->prev; return *this;}
	T& operator*() {return curr->val;}

	bool operator==(const iterator& b) const{return curr==b.curr;}
	bool operator!=(const iterator& b) const{return curr!=b.curr;}
};

int main()
{
	return 0;
}


