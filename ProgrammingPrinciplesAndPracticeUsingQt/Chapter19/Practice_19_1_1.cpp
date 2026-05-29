#include "iostream"
#include <vector>

double * get_from_jack(int * count){ return 0;}
std::vector<double> get_from_jill(){ return std::vector<double>(1); }

void fct()
{
	int jack_count = 0;
	double * jack_data = get_from_jack(&jack_count);
	std::vector<double> jill_data = get_from_jill();

	double h = -1;
	double * jack_high;
	double * jill_high;

	for(int i=0;i<jack_count;i++)
		if(h<jack_data[i]) {
			jack_high = &jack_data[i];
			h=jack_data[i];
		}

	h=-1;
	for(double &x:jill_data)
		if(h<x) {
			jill_high=&x;
			h=x;
		}

	std::cout<<"jill's max" << *jill_high << "; jack's max: "<<*jack_high;

	//process
	delete[] jack_data;

}

int main()
{
	fct();
	
	return 0;
}
