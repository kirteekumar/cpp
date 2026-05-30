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
};


int main()
{
	Vector<int> v;
	//Vector<int>::iterator p = find(v.begin(), v.end(), 32);

	return 0;
}


