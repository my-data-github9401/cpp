#include "./menu.h"
#include <iostream>
using namespace std;

Emenu menu()
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
    return Emenu(choice);

}