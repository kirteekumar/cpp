#include <algorithm>
#include <utility>
#include <string_view> 
#include "iostream"
#include <memory>


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
class Vector 
{
	Vector_rep<T,A> r;
	public:
	Vector() : r{A{} ,0} { }
	
	explicit Vector(int s, const T& val = T{}) :r{A{},s}
	{
		std::uninitialized_fill(r.elem, r.elem+r.sz, val);	// elements are initialized
	}
	
	/*
	explicit Vector(int s) :r{A{},s}
	{
		for (int i = 0; i < r.sz; ++i)
			r.elem[i] = 0; 	// elements are initialized
	}
	*/
	
	void reserve(int newalloc);
	Vector& operator=(const Vector&);
    int size() const { return r.sz; }
    int capacity() const { return r.space; }
};


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

template<typename T, typename A>
Vector<T,A>& Vector<T,A>::operator=(const Vector<T,A>& arg)
{
    if (arg.size()<=size()) 
    {
        std::move(arg.r.elem,arg.r.elem+arg.size(),r.elem);// enough space; copy directly
        std::destroy(r.elem+arg.size(),r.elem+size()); // destroy sur plus elements
    }
    
    auto tmp = arg; // copy all elements
    std::swap(*this, arg); 
    return *this;
}

template<typename T>
void strong_assign(Vector<T>& target, const Vector<T> arg)
{
    std::swap(target,arg); 
}

/*
std::unique_ptr<Vector<int>> make_vec()
{
	auto res = new Vector<int> ;
	return std::make_unique<Vector<int>>(res) ;
}
*/

template <typename T>
class VectorTemp 
{
	private:
		int sz;
		std::unique_ptr<T[]> elem;
		int alloc;
	
	public:
		VectorTemp(int s):sz{s},elem{std::make_unique<T[]>(s)}{}
		T& operator[](int i){return elem[i];}
		int size() {return sz;}
};

int main()
{
    VectorTemp<int> vt(5);
    
    std::cout << vt[2];
    
    //Vector<double> v1(1);
	//Vector<double> v2(1);

	//auto p=make_vec();

	//v1.reserve(1);
	//v1=v2;
	//strong_assign<double>(v1,v2);
	
	//v1=v2;

	
	
	return 0;
}