#include "iostream"
#include "iterator"

template<typename T, typename A = std::allocator<T>>
struct Vector_rep 
{
    A alloc; // allocator
    int sz; // number of elements
    T* elem; // star t of allocation
    int space; // amount of allocated space
    Vector_rep(const A& a, int n)
    : alloc{ a }, sz{ n }, elem{ alloc.allocate(n) }, space{ n } { }
    ~Vector_rep() { alloc.deallocate(elem, space); }
};


template<typename T, typename A = std::allocator<T>>
class Vector {
	Vector_rep<A> r;
	public:
		using size_type=int;
		using value_type=T;
		using iterator = T*;
		using const_iterator = const T*;

	Vector() : r{A{} ,0} { }


	iterator insert(iterator p, const T& val);
	iterator erase(iterator p);

		iterator begin();
		const_iterator begin() const;
		iterator end();
		const_iterator end() const;

		size_type size();

		T operator[](T){ return T{}; }
};

template <typename T, typename A=std::allocator<T>>
class List {
	public:
		using size_type = int;
		using value_type = T;
		class Link;
		class iterator;
		class const_iterator;

		iterator begin();
		const_iterator begin() const;
		iterator end();
		const_iterator end() const;

		size_type size();
		//...
};


	//19.4.1 : container traversal:
void print1( Vector<double>& v)
{
	for(int i=0; i<v.size(); ++i)
		std::cout<<v[i]<<'\n';
}

/*
void print2(const Vector<double>& v, const list <double>& lst)
{
	for(Vector<T>::iterator p=v.begin(); p!=v.end();++p)
		std::cout<<*p<<'\n';

	for(list)
}
*/


void print2( Vector<double>&v , List<double>& lst)
{
	for(auto p=v.begin(); p!=v.end();++p)
		std::cout <<*p <<'\n';

	for(auto p=v.end(); p!=v.end(); ++p)
		std::cout <<*p<< '\n';
}

/*
void print3(Vector <double> &v, List <double> &lst)
{
	for(double x:v)
		std::cout<<x<<'\n';

	for(double x:lst)
		std::cout<<x<<'\n';
}
*/


int main()
{
	Vector<int> v;
	//Vector<int>::iterator p = find(v.begin(), v.end(), 32);

	for(Vector<int>::size_type i=0;i<v.size();++i)
		std::cout<<v[i]<<'\n';

	//19.4.1 : container traversal:
	
	//19.4.2	
	Vector<int>::iterator p=v.begin();
	++p;
	++p;
	++p;

	Vector<int>::iterator q=p;
	++q;

	return 0;
}


