#include<iostream> 

using namespace std;
class Base
{
    private: 
    int num1; 
    int num2; 
    public: 
    Base( void )
    {
        this->num1 = 0; 
        this->num2 = 0; 
    }
    Base(int num1, int num2)
    {
        this->num1 = num1; 
        this->num2 = num2; 
    }
    void showRecord( void )
    {
        cout<<"num1 : "<<this->num1<<endl; 
        cout<<"num2 : "<<this->num2<<endl; 
    }
    void printRecord( void )
    {
        cout<<"num1 : "<<this->num1<<endl; 
        cout<<"num2 : "<<this->num2<<endl; 
    }
};
class Derived : public Base
{
    private: 
    int num3; 
    public: 
    Derived( void )
    {
        this->num3 = 0; 
    }
    Derived(int num1 , int num2 , int num3) : Base(num1,num2)
    {
        this->num3 = num3; 
    }
    void displayRecord( void )
    {
        Base::showRecord( ); 
        cout<<"num3 : "<<this->num3<<endl; 
    }
    void printRecord( void )
    {
        Base::printRecord( );
        cout<<"num3 : "<<this->num3<<endl;   
    }
}; 

int main()
{
    Derived d1(10,20,30);
    Base *ptrBase = &d1;
    ptrBase->printRecord();
    Derived *ptrDerived = (Derived*) ptrBase;
    ptrDerived->printRecord();
    return 0;
}
