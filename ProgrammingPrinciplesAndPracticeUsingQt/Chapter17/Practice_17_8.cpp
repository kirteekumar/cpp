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
		
		Vector (const Vector&);             //Copy constructor
		Vector& operator=(const Vector&);   //Copy assignment
		
		
		~Vector() {delete[] elem;}
		
		double& operator [](int n) {return elem[n];}
		const double& operator [](int n) const {return elem[n];}
		
		ostream& operator <<(ostream&);
		
		int size(void) { return sz;}

};

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



ostream& operator << (ostream& os, Vector& v) 
{
    
    for(int i=0; i<v.size(); i++)
    {
        os<<v[i];
    }
    
    return os;
}


void grow(Vector& v)    // read elements into a vector without using push_back:
{
	int n = v.size();  // number of elements
	double d=0;
	for (; cin>>d; ) 
	{
		if (n==v.size()) 
		{
			Vector v2(v.size()+1);		
			for (int i=0; i<v.size(); ++i)
			{
			    v2[i] = v[i];
			}
			v = v2;
	    }
	    break;
    }
	v[n] = d;
	// add the new element
}



int main()
{
	Vector v(5);

	grow(v);
	grow(v);
	
	cout<<v;
	
 	return 0;
}