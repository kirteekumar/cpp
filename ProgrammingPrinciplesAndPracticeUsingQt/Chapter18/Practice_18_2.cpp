#include "iostream"

using namespace std;

template<typename T>// for all types T (just like in math)
class Vector {
	int sz;
	// the size
	T* elem;
	// a pointer to the elements
	int space;
	// size + free space
	public:
	Vector() :sz{0}, elem{nullptr}, space{0} { 
	    cout<<"default : "<<endl;
	}
	
	explicit Vector(int s) :sz{s}, elem{new T[s]}, space{s}
	{
	    cout<<"explicit with argument : "<<s<<" "<<endl;
		for (int i=0; i<sz; ++i)
		    elem[i]=0;
		// elements are initialized
	}
	
	Vector(initializer_list<T>);
	// list constructor
	Vector& operator=(initializer_list<T>);
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

template<typename T>
void Vector <T>::resize(int newsize, T d)
{
    
    
}

class No_default
{
    public:
    No_default(){
        cout<<"No_default default : "<<endl;
    }
    No_default(int a){
        cout<<"No_default with arg : "<<a<<" "<<endl;
    }
};


int main()
{
    Vector<double>  v;
    Vector<double>  v1(5);
    Vector<char>    v2;
	
	Vector<No_default> nd1;
	Vector<No_default> nd2(1);
	
	return 0;
}