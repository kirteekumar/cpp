#include "iostream"

using namespace std;


class Vector {
		int sz;
		double *elem;
		
		public:
		Vector(int s):sz{s}, elem{new double[s]}
		{
			for(int i=0;i<sz;++i)
				elem[i] = 0.0;
		}
		
		Vector(initializer_list<double> lst):sz{lst.end()-lst.begin()},elem{new double[sz]}
		{
		    copy(lst.begin(),lst.end(),elem);
		}
		
		Vector (const Vector&); //Copy constructor
		
		
		~Vector() {delete[] elem;}
		
		double& operator [](int n) {return elem[n];}
		const double& operator [](int n) const {return elem[n];}
		
};

Vector::Vector (const Vector& arg): sz{arg.sz},elem{new double[arg.sz]}
{
    copy(arg.elem,arg.elem+sz,elem);
}

int main()
{
    Vector v1 = {1,2,3};
	Vector v2 = v1;
	
 	return 0;
}