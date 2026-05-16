#include <iostream>

using namespace std;

int main()
{
    int n; 
    
    while(true)
    {
        cin>>n;
        if(cin)
        {
            if(1<=n && n<=10)
                return n;
            cout << "Sorry " << n << " is not in the range" << endl;
        }
        if(cin.fail())
        {
            cin.clear();
            cout << "cin is failed!!!" << endl;
            cout << "Here are the values : " << endl;
            
            for(char ch;cin >>ch;)
            {
                cout << "cin values : " << ch <<  endl;
            }
        }
        
        cout << "Going int while again " <<  endl;
    }
    return 0;
}