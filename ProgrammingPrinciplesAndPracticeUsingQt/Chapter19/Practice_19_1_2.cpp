#include "iostream"
#include <vector>

int gcount;

double * get_from_jack(int * count){ 
	double *dp = new double [(*count)]; 
	std::cout << "enter " << (*count) << " jack's numbers : " ;
	for(int i=0;i<(*count); i++) {
		std::cin >> dp[i] ;
	}
		
	std::cout << "Jack entered : " ;
	for(int i=0;i<*count; i++) {
		std::cout << dp[i] << " " ;
	}	
	std::cout << std::endl ;

	std::cout << "---Jack input ends-----" << std::endl;
	return dp;
}

std::vector<double> get_from_jill(){ 
	std::cout << "enter " << (gcount) << " jill's numbers : " ;
	std::vector<double> v(gcount);	
	for(int i=0;i<gcount; i++) {
		std::cin >> v[i];
	}
	std::cout << "Jill entered : " ;
	for(int i=0;i<gcount; i++) {
		std::cout << v[i] << " " ;
	}	
	std::cout << std::endl ;
	return v; 
}

double *high(double *first, double *last)
{
	double h=-1;
	double *high;

	for(double *p=first;p!=last;++p)
	{
		if(h<*p)
		{
			high=p;
			h=*p;
		}
	}
	return high;
}

void fct()
{
	int count =0;
	std::cout << "enter count : " << std::endl;
	std::cin >> count;
	gcount=count;

	int jack_count = count;
	double * jack_data = get_from_jack(&jack_count);

	std::vector<double> jill_data = get_from_jill();

	double h = -1;
	double * jack_high = high(jack_data,jack_data+jack_count);
	double * jill_high = high(&jill_data[0],&jill_data[0]+jill_data.size());

	std::cout<<"jill's max: " << *jill_high << "; jack's max: "<<*jack_high<<std::endl;

	//process
	delete[] jack_data;

}

int main()
{
	fct();
	
	return 0;
}
