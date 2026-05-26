#include "iostream"

using namespace std;


#include "iostream"

using namespace std;

//template<Element T>
template <typename T, int sz>
	requires copyable<T>()
	
class Buffer 
{
	public:
		using value_type = T;
		const int size() {return sz;}
	private:
		T elem[sz];
};

Buffer <int, 10> bufG;

int main()
{
	Buffer <char, 12> BufL;
	
	return 0;
}

/* 
//template<Element T>
template <typename T>
	requires copyable<T>()

void Vector<T>::resize(int newsize, T def=T{})

//Use T{} as default value unless we say otherwise

Vector <double> v1;

v1.resize(100);
v1.resize(200,0.0);
v1.resize(300,1.0);

class No_default{
	No_default(int);
}

Vector <No_default> v2(10);
Vector <No_default> v3;

v3.resize(100,No_default{2});
v3.resize(200);


int main()
{
	
	return 0;
} */