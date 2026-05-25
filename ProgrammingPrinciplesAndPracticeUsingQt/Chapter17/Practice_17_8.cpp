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
		Vector& operator=(const Vector&); //Copy assignment
		
		
		~Vector() {delete[] elem;}
		
		double& operator [](int n) {return elem[n];}
		const double& operator [](int n) const {return elem[n];}
		
		int size(void);
		
};

int Vector::size()
{
    return sz;
}

Vector::Vector (const Vector& arg): sz{arg.sz},elem{new double[arg.sz]}
{
    copy(arg.elem,arg.elem+sz,elem);
}
Vector& Vector :: operator= (const Vector& arg)
{
    sz = arg.sz; 
    elem = new double[arg.sz];
    copy(arg.elem,arg.elem+sz,elem);
    return *this;
}

void grow(Vector& v)
{
	int n=0;
	for(double d;cin >>d;)
	{
	    cout<<"d : "<<d;
	    cout<<"cout<<d : "<< v.size();
		if(n==v.size())
		{
		    
			Vector v2(v.size()+1);
			for(int i; i<v.size();++i)
				v2[i] = v[i];
			v=v2;
		}
		n++;
	}
	//v[n]=d;
}

int main()
{
	Vector v(5);
	
	grow(v);
	
 	return 0;
}