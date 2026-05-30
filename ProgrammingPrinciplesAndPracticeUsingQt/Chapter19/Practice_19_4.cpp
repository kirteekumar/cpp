#include "iostream"
#include "iterator"

template<typename T, typename A = std::allocator<T>>
class Vector {
	public:
		using size_type=int;
		using value_type=T;
		using iterator = T*;
		using const_iterator = const T*;


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


void print1(const vector<double>& v)
{
	for(int i=0; i<v.size(); ++i)
		std::cout<<v[i]<<'\n';
}

int main()
{
	Vector<int> v;
	//Vector<int>::iterator p = find(v.begin(), v.end(), 32);

	for(Vector<int>::size_type i=0;i<v.size();++i)
		std::cout<<v[i]<<'\n';

	//19.4.1 : container traversal:
	

	return 0;
}


