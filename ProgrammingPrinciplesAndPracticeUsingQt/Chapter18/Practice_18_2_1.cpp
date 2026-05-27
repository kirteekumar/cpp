#include "iostream"
#include <memory>
//using namespace std;

template<typename T>
class Allocator {
    public:
    T* allocate(int n);
    void deallocate(T* p, int n);
};

template<typename T>
void Allocator<T>::deallocate(T* p, int n)
{
    delete[] p;    
}

template<typename T>
void destroy(T* elem, int sz)
{
    delete[] elem;    
}

template<typename T>
T* Allocator<T>::allocate(int n)
{
    return new T[n];
}

template<typename T, typename A = Allocator<T>>
//template<typename T>

class Vector {
	A alloc;
	
	int sz;
	// the size
	T* elem;
	// a pointer to the elements
	int space;
	// size + free space
	public:
	Vector() :sz{0}, elem{nullptr}, space{0} { 
	    std::cout<<"default : "<<std::endl;
	}
	
	explicit Vector(int s) :sz{s}, elem{new T[s]}, space{s}
	{
	    std::cout<<"explicit with argument : "<<s<<" "<<std::endl;
		for (int i=0; i<sz; ++i)
		    elem[i] = 0;
		// elements are initialized
	}
	
	Vector(std::initializer_list<T>);
	// list constructor
	Vector& operator=(std::initializer_list<T>);
	// list assignment
	
	Vector(const Vector&);
	// copy constr uctor
	Vector& operator=(const Vector&);
	// copy assignment
	
	Vector(Vector&& );
	// move constr uctor
	Vector& operator=(Vector&&);
	// move assignment
	
	~Vector() { delete[] elem; }
	// destr uctor
	T& operator[](int n) 
	{ 
		return elem[n]; 
	}
	
	// access: return reference
	const T& operator[](int n) const { return elem[n]; }
	
	int size() const { return sz; }
	// the current size
	int capacity() const { return space; }
	// the current capacity
	void resize(int newsize, T def= T{});
	// growth
	void push_back(const T& d);
	void reserve(int newalloc);

	T* begin() const { return elem; }
	// iteration support
	T* end() const { return elem+sz; }
};

template<typename T, typename A>
void Vector <T,A>::reserve(int newalloc)
{
    if(newalloc<=space)
        return;
    
    T* p = alloc.allocate(newalloc);
    std::uninitialized_move(elem,&elem[sz],p);
    destroy(elem,space);
    alloc.deallocate(elem,capacity());
    elem = p;
    space = newalloc;
}

template <typename T, typename A>
void Vector<T,A>::push_back(const T& val)
{
   reserve((space==0) ? 8: 2*space);
   std::construct_at(&elem[sz],val);
   ++sz;
}

template <typename T, typename A>
void Vector<T,A>::resize(int newsize, T val)
{
    reserve(newsize);
    if(sz<newsize)
        std::uninitialized_fill(&elem[sz], &elem[newsize],val);
    if(newsize<sz)
        std::destroy(&elem[newsize],&elem[sz]);
    sz=newsize;
}

int main()
{
    Vector<double>  v;
    v.reserve(1);
    v.push_back(1.0);
	
	v.resize(2); //default argument for init value
	v.resize(2, 2.0); //pass 2.0 as init value
	
	return 0;
}