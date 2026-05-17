/*Write three functions swap_v(int,int), swap_r(int&,int&), and swap_cr(const int&, const int&).
                                                                  Each should have the body
{ int temp; temp = a, a=b; b=temp; }
where a and b are the names of the arguments.
    Try calling each swap like this

int x = 7;
int y = 9;
swap_?(x,y);
swap_?(7,9);
const int cx = 7;
const int cy = 9;
swap_?(cx,cy);
swap_?(7.7,9.9);
double dx = 7.7;
double dy = 9.9;
swap_?(dx,dy);
swap_?(7.7,9.9);

Which functions and calls compiled, and why? After each swap that compiled, print the
value of the arguments after the call to see if they were actually swapped. If you are surprised by a result, consult §7.5.

*/

#include "iostream"

using namespace std;

void swap_v(int a ,int b)
{
    int temp; temp = a, a=b; b=temp;
}

void swap_r(int& a,int& b)
{
    int temp; temp = a, a=b; b=temp;
}

/*
void swap_cr(const int& a, const int& b)
{
    int temp; temp = a, a=b; b=temp;      //NOT COMPILED BECAUSE it is trying to modify the const reference.
}
*/

int main()
{

    int x = 7;
    int y = 9;
    swap_r(x,y);

    cout<<x<<y<<endl;

    //swap_r(7,9); //Not compiled

    //const int cx = 7;
    //const int cy = 9;
    //swap_r(cx,cy); //Can not compile


    //swap_r(7.7,9.9); //Can not compile

    // double dx = 7.7;
    // double dy = 9.9;
    // swap_r(dx,dy); //can not compile

    //swap_r(7.7,9.9); //can not compile

	return 0;
}
