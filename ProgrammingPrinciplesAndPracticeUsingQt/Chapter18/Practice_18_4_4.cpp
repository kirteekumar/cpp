#include "iostream"
#include <memory>

template<typename T, typename A = std::allocator<T>>
struct Vector_rep {
    A alloc; // allocator
    int sz; // number of elements
    T* elem; // star t of allocation
    int space; // amount of allocated space
    Vector_rep(const A& a, int n)
    : alloc{ a }, sz{ n }, elem{ alloc.allocate(n) }, space{ n } { }
    ~Vector_rep() { alloc.deallocate(elem, space); }
};

int main()
{
    std::allocator allo;
    
    Vector_rep(allo,1);
	
	return 0;
}