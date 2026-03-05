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
        virtual void acceptRecord(void)
        {
            cout<<"Title : ";
            cin>>title;
            cout<<"price : ";
            cin>>price;
        }
        virtual void printRecord(void)
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


int menuList(void)
{
    int choice;
    cout<<"---------------"<<endl;
    cout<<"0.Exit "<<endl;
    cout<<"1.Book "<<endl;
    cout<<"2.Tape "<<endl;
    cout<<"Enter choice :  "<<endl;
    cin >>choice;
    return choice;

}


int main()
{
    int choice;
    while((choice = ::menuList())!=0)
    {
        
        Product * ptr = NULL;

        switch(choice)
        {
        case 1:
            ptr = new Book();
            break;
        case 2:
            ptr = new Tape();

            break;
        default:
            break;

        }

        if(ptr!=NULL) {
        ptr->acceptRecord();
        ptr->printRecord();
        }

        if (ptr!=NULL)
            delete ptr;
    }    

    return 0;
}
