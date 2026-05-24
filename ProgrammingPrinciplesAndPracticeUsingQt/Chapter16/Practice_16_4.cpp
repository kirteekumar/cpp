#include "iostream"
#include "span"

using 	namespace std;

int 	arr[8];
span 	spn {arr};

const int 	maxx = 10;
int 		buf[maxx];
span<int>sp 	{buf,maxx/2};  // first half of buf
			  
void test(span<int> s)
{
	cout << "size: " << s.size() << '\n';
	for (int x : s)
		cout << x << '\n';
	
	try {
		int y = s[s.size()];
	}
	catch (...) {
		cout << "we have range checking\n";
		return;
	}
	
	cout << "no range checking! Boo Hoo!\n";
	terminate();
	// exit the program
}

int main()
{
	test(sp);	

	return 0;
}

