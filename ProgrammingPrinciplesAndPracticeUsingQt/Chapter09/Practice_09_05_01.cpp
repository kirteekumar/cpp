#include <iostream>

using namespace std;

int main()
{
    std::cout<<"Hello World";
    int n; 
    
    while(true)
    {
        cin>>n;
        if(cin)
        {
            if(1<=n && n<=10)
                return n;
            cout << "Sorry " << n << "is not in the range" << endl;
        }
    }

    return 0;
}