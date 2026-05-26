#include "iostream"

using namespace std;

template <typename T, int sz>
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