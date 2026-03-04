#include<iostream> 
using namespace std; 

class Book 
{
    private:
        string title ;
        float price;
        int pageCount;
    public:
        Book(void) : title("") , price(0.0), pageCount(0)
    {}
        void acceptRecord(void)
        {
            cout<<"title : ";
            cin>>title;
            cout<<"price : ";
            cin>>price;
            cout<<"page count : ";
            cin>>pageCount;
        }

        void printRecord(void)
        {
            cout<<"title : "<<title<<endl;
            cout<<"price : "<<price<<endl;
            cout<<"page count : "<<pageCount<<endl;
        }
};

class Tape
{
    private:
        string title;
        float price;
        int playTime;
    public:
        Tape(void): title(""), price(0.0), playTime(0)
    {}
        void acceptRecord(void)
        {
            cout<<"title : ";
            cin>>title;
            cout<<"price : ";
            cin>>price;
            cout<<"play time : ";
            cin>>playTime;
        }

        void printRecord(void)
        {
            cout<<"title : "<<title<<endl;
            cout<<"price : "<<price<<endl;
            cout<<"play time : "<<playTime<<endl;
        }
};



int main()
{
    Book b1;
    b1.acceptRecord();
    b1.printRecord();

    return 0;
}
