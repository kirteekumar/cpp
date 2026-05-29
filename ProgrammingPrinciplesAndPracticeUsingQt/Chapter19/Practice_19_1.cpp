#include "iostream"
#include <vector>

double * get_from_jack(int * count){ return 0;}
std::vector<double> get_from_jill(){ return std::vector<double>(1); }

void fct()
{
	int jack_count = 0;
	double * jack_data = get_from_jack(&jack_count);
	std::vector<double> jill_data = get_from_jill();

	//process
	delete[] jack_data;

}

int main()
{
	fct();
	
	return 0;
}