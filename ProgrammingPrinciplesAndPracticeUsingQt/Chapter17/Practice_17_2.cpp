#include "iostream"

using namespace std;


class Vector {
		int sz;
		double *elem;
		
		public:
		double operator [](int n) {return elem[n];}
		Vector(int n) {sz = n; elem = new double[n];}
};

int main()
{
    Vector v(9);
    double x = v[0];
    
    cout << "x : " << x << endl ;
	return 0;
}