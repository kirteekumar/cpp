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
	explicit Vector(int s) :r{A{},s}
	{
		for (int i = 0; i < r.sz; ++i)
			r.elem[i] = 0; 	// elements are initialized
	}
	
	void reserve(int newalloc);
	Vector& operator=(const Vector&);

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
    std::swap(*this, arg); // then swap (Vector handles): strong guarantee
    return *this;
}


int main()
{
	
	return 0;
}