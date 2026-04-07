#include <iostream>
#include <vector>
#include <initializer_list>


using namespace std;

std::vector<int>  v={100, 200, 300};

void f1(std::initializer_list<int> nums)
{
	for(auto n:nums)
		std::cout<<n<<std::endl;
}

auto i1 = 10; 	      //int
auto i2(10);	      //int
auto i3{10};	      //int
auto i4={10};	      //std::initializer_list

std::vector<int> vec1(i1); //10 items
std::vector<int> vec2(i2); //10 items
std::vector<int> vec3(i3); //10 items
std::vector<int> vec4(i4); //1 item


int main()
{
	f1({10,20,30});
	return 0;

}

