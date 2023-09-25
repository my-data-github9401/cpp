#include "./CylinderVolume.h"
#include "./menu.h"

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
