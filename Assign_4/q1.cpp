#include<iostream>
using namespace std;

class Time
{
    private:
    int h;
    int m;
    int s;

    public:
    Time()
    {

    }
    Time(int h,int m,int s)
    {
        this->h=h;
        this->m=m;
        this->s=s;
    }
    void setHour()
    {
        cout<<"Enter hour ="<<endl;
        cin>>this->h;
    }
    void setMinute()
    {
        cout<<"Enter minute ="<<endl;
        cin>>this->m;
    }
    void setSecond()
    {
        cout<<"Enter second ="<<endl;
        cin>>this->s;
    }

    int getHour(int h)
    {
        //this->h=h;
        return h;
    }
    int getMinute(int m)
    {
        //this->m=m;
        return m;
    }
    int getSecond(int s)
    {
        //this->s=s;
        return s;
    }
    void printTime()
    {
        //cout<<"Time is ="<<this->h<<"-"<<this->m<<"-"<<this-s<<endl;
        cout<<"Time is="<<this->h<<"-"<< this->m<<"-"<<this->s<<endl;
    }
    
};

int main()
{
    Time **arr=new Time *[5];

    //dynamic memory alloaction of objects
    for (int i=0;i<5;i++)
    arr[i]=new Time();

    //accept values for h,m,s
    for (int i=0;i<5;i++)
    {
        arr[i]->setHour();
        arr[i]->setMinute();
        arr[i]->setSecond();
    }

    //display the values
    for (int i=0;i<5;i++)
    {
        arr[i]->printTime();
    }
    //dealloacte the values
    for (int i=0;i<5;i++)
    delete arr[i];

    delete[] arr;
    return 0;

}
