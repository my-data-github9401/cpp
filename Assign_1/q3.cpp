#include<iostream>
using namespace std;

class Student
{
    private:
    int rollno;
    string name;
    int marks;

    public:
    void initStudent()
    {
        int rollno=1;
        string name="anish";
        int marks=20;
        cout<<rollno<<"-"<<name<<"-"<<marks<<endl;
    }

    
    void acceptStudentFromConsole()
    {
        cout<<"Enter the rollno"<<endl;
        cin>>this->rollno;
        cout<<"Enter the name"<<endl;
        cin>>this->name;
        cout<<"enter the marks"<<endl;
        cin>>this->marks;

    }

    void printStudentOnConsole()
    {
        cout<<this->rollno<<this->name<<this->marks<<endl;

    }



};

int menu()
{
    int choice;
    cout<<"**********************"<<endl;
    cout<<"0. Exit "<<endl;
    cout<<"1. init "<<endl;
    cout<<"2. accept"<<endl;
    cout<<"3. print "<<endl;
    
    cout<<"enter your choice =";
    cin>>choice;
    cout<<"**********************"<<endl;
    return choice;
}


int main()
{   Student c;
    int choice;
    while((choice=menu()) !=0)
    {
        switch(choice)
        {
            case 1:
            c.initStudent();
            break;

            case 2:
            c.acceptStudentFromConsole();
            break;

            case 3:
            c.printStudentOnConsole();
            break;

            
            default:
            cout<<"Wrong choice entered"<<endl;
            break;
        
        }
        
    }
    cout<<"Thank you for using this "<<endl;
    return 0;

}