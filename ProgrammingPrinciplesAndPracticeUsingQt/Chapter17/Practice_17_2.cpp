#include "iostream"

using namespace std;


class Vector {
		int sz;
		double *elem;
		
		public:
		double& operator [](int n) {return elem[n];}
		const double& operator [](int n) const {return elem[n];}
		Vector(int n) {sz = n; elem = new double[n];}
};

int main()
{
    Vector v(9);
    const double x = v[0];
    v[1] = 5.0;
    cout << "x : " << x << endl ;
	return 0;
}