#include<iostream>
using namespace std;

class Date
{
    private:
    int day;
    int month;
    int year;

    public:
    void initDate()
    {
        this->day=15;
        this->month=03;
        this->year=2000;
        cout<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
    }
    void acceptDateFromConsole()
    {
        cout<<"Enter the day=";
        cin>>this->day;
        cout<<"Enter the month=";
        cin>>this->month;
        cout<<"Enter the year=";
        cin>>this->year;

    }
    void printDateOnConsole()
    {
        cout<<"day="<<this->day<<endl;
        cout<<"month"<<this->month<<endl;
        cout<<"year"<<this->year<<endl;

    }
    bool isLeapYear()
    {
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            cout<<"This is leap year"<<endl;
        }
        else 
        {
            cout<<"this is not a leap year"<<endl;
        }
        return 0;

    }
};

int menu()
{
    int choice;
    cout<<"**********************"<<endl;
    cout<<"0. Exit "<<endl;
    cout<<"1. init "<<endl;
    cout<<"2. accept"<<endl;
    cout<<"3. print "<<endl;
    cout<<"4. isLeapYear"<<endl;
    cout<<"enter your choice =";
    cin>>choice;
    cout<<"**********************"<<endl;
    return choice;
}

int main()
{
    Date d;
    int choice;
    while((choice=menu()) !=0)
    {
        switch(choice)
        {
            case 1:
            d.initDate();
            break;

            case 2:
            d.acceptDateFromConsole();
            break;

            case 3:
            d.printDateOnConsole();
            break;

            case 4:
            d.isLeapYear();
            break;

            default:
            cout<<"Wrong choice entered"<<endl;
            break;
        
        }
        
    }
    cout<<"Thank you for using this "<<endl;
    return 0;
}