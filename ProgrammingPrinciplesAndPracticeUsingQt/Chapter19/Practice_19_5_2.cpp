#include "iostream"
#include "iterator"
#include "list"
#include "memory"

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
	Vector_rep<T,A> r;
	public:
		using size_type=int;
		using value_type=T;
		using iterator = T*;
		using const_iterator = const T*;

	Vector() : r{A{} ,0} { }


	iterator insert(iterator p, const T& val);
	iterator erase(iterator p);


		iterator begin() {
			return r.elem;}

		const_iterator begin() const;
		iterator end();
		const_iterator end() const;

		size_type size(){return r.sz;}

		T operator[](T){ return T{}; }

		int capacity() {return r.space;}
		void push_back(const T& val);

		void reserve(int newalloc);
};

/*
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
*/

template<typename T, typename A>
Vector<T,A>::iterator Vector<T,A>::erase(iterator p)
{
	if(p==end())
		return p;

	move(p+1,r.sz,p);
	destroy_at(r.elem()+r.sz-1);
	--r.sz;
	return p;
}

template<typename T, typename A>
Vector<T,A>::iterator Vector<T,A>::insert(iterator p, const T& val)
{
	int index=p-begin();
	if(size()==capacity())
		reserve(size()==0?8:2*size());

	p=begin()+index;
	move_backward(p,r.sz-1,p+1);
	*(begin() + index) = val;
	++r.sz;
	return p;
}

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

/*
void print2( Vector<double>&v , List<double>& lst)
{
	for(auto p=v.begin(); p!=v.end();++p)
		std::cout <<*p <<'\n';

	for(auto p=v.end(); p!=v.end(); ++p)
		std::cout <<*p<< '\n';
}
*/

/*
void print3(Vector <double> &v, List <double> &lst)
{
	for(double x:v)
		std::cout<<x<<'\n';

	for(double x:lst)
		std::cout<<x<<'\n';
}
*/


/*------19.5---------*/

template <typename T, typename A>
void Vector<T,A>::push_back(const T& val)
{
   reserve((r.space==0) ? 8: 2*r.space);
   std::construct_at(&r.elem[r.sz],val);
   ++r.sz;
}


using Line=Vector<char>;
struct Document {
	std::list<Line> line;
	Document() {line.push_back(Line());}
};

std::istream& operator>>(std::istream& is, Document& d)
{
	for(char ch;is.get(ch);) {
		d.line.back().push_back(ch);
		if(ch=='\n')
			d.line.push_back(Line{});
	}

	if(d.line.back().size());
		d.line.push_back(Line{});
	return is;
}

template<typename T, typename A>
void Vector<T,A>::reserve(int newalloc)
{
    if (newalloc <= r.space) // never decrease allocation
        return;
    Vector_rep<T, A> b{ r.alloc ,newalloc }; // allocate new space
    std::uninitialized_move(r.elem, r.elem+r.sz, b.elem); // move
    std::destroy(r.elem, r.elem + r.sz); // destroy the old elements
    std::swap(r, b); // swap representations
}

//19.5.2
class Text_iterator{
	std::list<Line>::iterator in;
	Line::iterator pos;

	public:
	Text_iterator(std::list<Line>::iterator lI, Line::iterator pp) : in{lI},pos{pp} {}


	char& operator*() {return *pos;}
	Text_iterator& operator++();

	bool operator==(const Text_iterator& other) const
	{ return in==other.in && pos==other.pos;}

	bool operator!=(const Text_iterator& other) const
	{ return !(*this==other);}
};

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


