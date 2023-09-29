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
        this->day=0;
        this->month=0;
        this->year=0;

    }
    Date(int day,int month,int year)
    {
        this->day =day;
        this->month =month;
        this->year =year;
    }
    
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
//dependency class
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
    person(string name,string addr,int day,int month,int year):birth_Date(day,month,year)
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
        cout << "Enter Birth Date = " << endl;
        birth_Date.acceptDate();
        
    }
    void display()
    {
        cout<<"name="<<this->name<<endl;
        cout<< "addr="<<this->addr<<endl;
        cout<<"Date of Birth is: "<<endl;
        cout << "Birth date = ";
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
        this->id=0;
        this->sal=0;
        this->dept= " "; 

    }
    employee(int id,float sal,string dept,int day,int month,int year):doj(day,month,year)
    {
        this->id = id;
        this->sal = sal;
        this->dept= dept ;

    }
    void acceptemployee()
    {
        cout<<"enter id ="<<endl;
        cin>>this->id;
        cout<<"enter sal ="<<endl;
        cin>>this->sal;
        cout<<"enter dept ="<<endl;
        cin>>this->dept;
        cout << "Enter Date Of joining = " << endl;
        doj.acceptDate();
    }
    void displayemployee()
    {
        cout<<"employee id = "<<this->id<<endl;
        cout<<"employee sal = "<<this->sal<<endl;
        cout<<"employee dept = "<<this->dept<<endl;
        cout<<"Date of joining is = "<<endl;
        doj.displayDate();
    }


};


//dependency class

int main()
{
    cout<<"****************************"<<endl;
     employee d1;
    d1.acceptemployee();
    cout<<"--------------"<<endl;
    d1.displayemployee();
   
    cout<<"****************************"<<endl;
    
    employee d2(2 ,2000 ,"manager",9,4,2001);
    //d2.acceptemployee();
    d2.displayemployee();
    cout<<"****************************"<<endl;
    
    return 0;
}



