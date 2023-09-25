#include<iostream>
using namespace std;

class CylinderVolume
{
    private:
    double radius;
    double height;
    double volume;

    public:
    CylinderVolume()
    {
        this->radius;
        this->height;
    }

    
    CylinderVolume(double radius, double height)
    {
        this->radius=radius;
        this->height=height;

    }
    
    
    void acceptdata()
    {
        cout<<"enter the radius"<<endl;
        cin>>this->radius;
        cout<<"enter the height"<<endl;
        cin>>this->height;

    }
    double getcomputedata()
    {
        double volume= 3.14*radius*radius* height;
        return volume;

    }
    void printdata()
    {
        double volume;
        cout<<"volume of cylinder is="<< getcomputedata()<<endl;
    }
    void setradius(double radius)
    {
        this->radius= radius;
    }
    void setheight(double height)
    {
        this->height= height;
    }
    
    void setvolume(double volume)
    {
        this->volume= volume;
    }
    
    
    
    double getradius()
    {
        return this->radius;
    }
    double getheight()
    {
        return this->height;
    }
    
    double getvolume()
    {
        return this->volume;
    }
    
    

};
int menu()
{
    int choice;
    cout<<"**********************"<<endl;
    cout<<"0. Exit "<<endl;
    cout<<"1. acceptdata "<<endl;
    cout<<"2. computedata"<<endl;
    cout<<"3. printdata "<<endl;
    
    cout<<"enter your choice =";
    cin>>choice;
    cout<<"**********************"<<endl;
    return choice;

}
int main()
{
    CylinderVolume c1(2,3);
    c1.printdata();


    CylinderVolume c;
    int choice;
    while((choice=menu()) !=0)
    {
        switch(choice)
        {
            case 1:
            c.acceptdata();
            break;

            case 2:
            c.getcomputedata();
            break;

            case 3:
            c.printdata();
            break;

            
            default:
            cout<<"Wrong choice entered"<<endl;
            break;
        
        }
        
    }
    cout<<"Thank you for using this "<<endl;
    return 0;



}