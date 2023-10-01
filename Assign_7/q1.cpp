#include<iostream>
using namespace std;

class date
{
    private:
    int day;
    int month;
    int year;

    public:
    date()
    {
        this->day= 0;
        this->month =0;
        this->year =0;

    }
    date(int day,int month,int year)
    {
        this->day= day;
        this->month =month;
        this->year =year;
    }
    
    void acceptdate()
    {
        cout<<"enter the day ="<<endl;
        cin>>this->day;
        cout<<"enter the month ="<<endl;
        cin>>this->month;
        cout<<"enter the year ="<<endl;
        cin>>this->year;

    }
    void displaydate()
    {
        cout<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
        
    }
};

class person
{
    private:
    string name;
    string addr;
    date birth_date;

    public:
    person()
    {
        this->name="";
        this->addr="";
        
    }
    person(string name,string addr,int day,int month,int year):birth_date(day,month,year)
    {
        this->name=name;
        this->addr=addr;
    }
    void accept()
    {
        cout<<"enter the name ="<<endl;
        cin>>this->name;
        cout<<"enter the addr ="<<endl;
        cin>>this->addr;
        cout<<"enter the birth date =";
        birth_date.acceptdate();
    }
    void display()
    {
        cout<<this->name<<endl;
        cout<<this->addr<<endl;
        birth_date.displaydate();
    }

};
//
class employee:public person
{
    private:
    int id;
    float sal;
    string dept;
    date joining;

    public:
    employee()
    {
        int id=0;
        float sal=0;
        string dept="";
    }
    employee(int id,float sal,string dept,string name,string addr,int day,int month,int year):joining(day,month,year)
    {
        this->id =id;
        this->sal =sal;
        this->dept =dept;
    }
    void acceptemployee()
    {
        person::accept();
        cout<<"enter the id ="<<endl;
        cin>>this->id;
        cout<<"enter the sal ="<<endl;
        cin>>this->sal;
        cout<<"enter the dept ="<<endl;
        cin>>this->dept;
        cout<<"enter the date of joining ="<<endl;
        joining.acceptdate();
    }
    void displayemployee()
    {
        person::display();
        cout<<"employee id ="<<this->id<<endl;
        cout<<"employee sal ="<<this->sal<<endl;
        cout<<"employee dept ="<<this->dept<<endl;
        cout<<"date of joining is =";
        joining.displaydate();

    }
    
};

int main()
{
    
    employee e;
    e.acceptemployee();
    e.displayemployee();
    return 0;  

}
