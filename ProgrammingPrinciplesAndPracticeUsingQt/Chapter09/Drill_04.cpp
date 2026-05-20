/*
[4]
Did you line up your output in columns using the tab character? If not, do it.*/

#include <iostream>

using namespace std;

int main()
{
    int birth_year = 1988; 
    
    cout << "dec : " << birth_year << '\t' << " hex : " << hex  << birth_year << '\t' << " oct : " \
    << oct << birth_year << endl ;
    return 0;
}

