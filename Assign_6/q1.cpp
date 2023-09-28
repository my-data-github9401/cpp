#include<iostream>
using namespace std;
//dependency

//dependent class
class Date
{
    public:
    int day;
    int month;
    int year;
    
    public:
    Date()
    {
        this->day=9;
        this->month=4;
        this->year=2001;

    }
    Date(int day,int month,int year)
    {
        this->day =day;
        this->month =month;
        this->year =year;
    }
    /*
    void addemployeeid()
    {
    
    }
    */
    
    void acceptDate()
    {
        cout<<"Enter the day="<<endl;
        cin>>this->day;
        cout<<"Enter the month="<<endl;
        cin>>this->month;
        cout<<"Enter the year="<<endl;
        cin>>this->year;
    
    }
    void displayDate()
    { 
        cout<<"Date ="<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
        
    }

};
class person
{
    private:
    string name;
    string addr;
    Date birth_Date;

    public:
    person()
    {
        this->name="ram";
        this->addr="karad";
        
    }
    person(string name,string addr)
    {
        this->name=name;
        this->addr=addr;
        
    }
    void accept()
    {
        cout<<"Enter the name="<<endl;
        cin>>this->name;
        cout<<"Enter the addr="<<endl;
        cin>>this->addr;
        birth_Date.acceptDate();
        
    }
    void display()
    {
        cout<<"name="<<this->name<<endl;
        cout<< "addr="<<this->addr<<endl;
        cout<<"Date of Birth is: "<<endl;

        birth_Date.displayDate();
    }


};
class employee
{
    private:
    int id;
    float sal;
    string dept;
    Date doj;

    public:
    employee()
    {
        this->id=101;
        this->sal=1000;
        this->dept= "sales";

    }
    employee(int id,float sal,string dept,Date doj )
    {
        this->id=id;
        this->sal=sal;
        this->dept= "";
    }
    void accept()
    {
        cout<<"enter the id="<<endl;
        cin>>this->id;
        cout<<"enter the sal="<<endl;
        cin>>this->sal;
        cout<<"enter the dept="<<endl;
        cin>>this->dept;
        doj.acceptDate();

    }
    void display()
    {
        cout<<"enter id"<<this->id<<endl;
        cout<<"enter sal"<<this->sal<<endl;
        cout<<"enter dept"<<this->dept<<endl;
        cout<<"Date of joining is: "<<endl;
        doj.displayDate();
    }


};


//dependency class

int main()
{
    employee d1;
    d1.accept();
    d1.display();
    person p1;
    p1.accept();
    p1.display();
    return 0;
}



