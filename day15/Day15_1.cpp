#include<iostream> 
using namespace std; 

class Product
{
    private :
        string title;
        float price;
    public:
        Product(void): title(""), price(0)
    {}
        void acceptRecord(void)
        {
            cout<<"Title : ";
            cin>>title;
            cout<<"price : ";
            cin>>price;
        }
        void printRecord(void)
        {
            cout<<"title : "<<title<<endl;
            cout<<"price : "<<price<<endl;
        }
};

class Book : public Product
{
    private: 
        int pageCount;
    public:
        Book(void) :pageCount(0)
    {}
        void acceptRecord(void)
        {
            Product::acceptRecord();
            cout<<"page count : ";
            cin>>pageCount;
        }

        void printRecord(void)
        {
            Product::printRecord();
            cout<<"page count : "<<pageCount<<endl;
        }
};

class Tape : public Product 
{
    private:
        int playTime;
    public:
        Tape(void): playTime(0)
    {}
        void acceptRecord(void)
        {
            Product::acceptRecord();
            cout<<"play time : ";
            cin>>playTime;
        }

        void printRecord(void)
        {
            Product::printRecord();
            cout<<"play time : "<<playTime<<endl;
        }
};



int main()
{
    Tape t1;
    t1.acceptRecord();
    t1.printRecord();

    return 0;
}
