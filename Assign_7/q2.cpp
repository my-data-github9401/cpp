#include<iostream>
using namespace std;

calculate_

class product
{
    private:
    int id;
    string title;
    double price;
    string type;

    public:
    virtual void acceptdata()=0;

    virtual void displaydata()
    {

    }



};

class Book
{
    private:
    string author;

    public:
    void accept()
    {

    }
    void display()
    {

    }

};

class Tape
{
    private:
    string author;

    public:
    void accept()
    {

    }
    void display()
    {

    }

};
int menu()
{
    int choice;
    cout<< "0. Exit" <<endl;
    cout<< "1. Accept " <<endl;
    cout<< "2. Display" <<endl;
    cout<< "3. Calculate" <<endl;
    cout<< "enter the choice =";
    cin >> choice;
    return choice;

}
int main()
{
    int choice;
    
}