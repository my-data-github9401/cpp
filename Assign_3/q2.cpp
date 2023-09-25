#include<iostream>
using namespace std;

class TollBooth
{
    private:
    unsigned int TotalCars;
    double Toll;
    

    public:
    TollBooth():TotalCars(0),Toll(0)
    {

    }

    
    void payingcar()
    {
        TotalCars++;
        Toll+=0.50;
    }
    
    
    void nopaycar()
    {
        TotalCars++;
    }
    
    
    void display() const
    {
        cout<<"Total cars passed="<<TotalCars<<endl;
        cout<<"Total Toll collected="<< Toll<<endl;
    }
    
};
int menu()
{
    int choice;
    cout<<"**********************"<<endl;
    cout<<"0. Exit "<<endl;
    cout<<"1. payingcar"<<endl;
    cout<<"2. nopaycar"<<endl;
    cout<<"3. display "<<endl;
    
    cout<<"enter your choice =";
    cin>>choice;
    cout<<"**********************"<<endl;
    return choice;

}
int main()
{
    
    TollBooth T;
    int choice;
    while((choice=menu()) !=0)
    {
        switch(choice)
        {
            case 1:
            T.payingcar();
            cout<<"paid toll"<<endl;
            break;

            case 2:
            T.nopaycar();
            cout<<" notpaid toll"<<endl;
            break;

            case 3:
            T.display();
            break;

            
            default:
            cout<<"Wrong choice entered"<<endl;
            break;
        
        }
        
    }
    cout<<"Thank you for using this "<<endl;
    return 0;



}