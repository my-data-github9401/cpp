#include<iostream>
//#include<cmath>
using namespace std;

class BoxVolume
{
    private:
    float length;
    float width;
    float height;

    public:
    BoxVolume()
    {
        this->length;
        this->width;
        this->height;

    }
    BoxVolume(float length,float width,float height)
    {
        cout<<"inside parameterized constructor"<<endl;
        this->length=length;
        this->width=width;
        this->height=height;
    }
    void acceptdata()
    {
        cout<< "enter the length="<<endl;
        cin>>this->length;
        cout<<"enter the width="<<endl;
        cin>>this->width;
        cout<< "enter the height="<<endl;
        cin>>this->height;
    }
    void printdata()
    {
        float vol;
        //Vol= this->length * this->width * this->height;
        cout<<"volume ="<< this->length*this->width*this->height <<endl;
    }

};

int main()
{
    BoxVolume v1;
    v1.acceptdata();
    v1.printdata();

    BoxVolume v2(2.1,3.1,4.1);
    v2.printdata();

}