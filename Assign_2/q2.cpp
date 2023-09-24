#include<iostream>
#include<string>
using namespace std;

class address
{
    private:
    //data members
    string building;
    string street;
    string city;
    int pin;

public:
    address()
    {
        this->building = "ganesh";
        this->street = "tambri vibhag";
        this->city= "pune";
        this->pin = 413501;
    }

    address(string building ,string street ,string city, int pin )
    {
       this->building = building;
       this->street = street;
       this->city = city;
       this->pin = pin;
    }

    // Facilitators
    void accept()
    {
        cout << "Enter name of building,street,city,pin = ";
        cin >> this->building >> this->street >> this->city >> this->pin;
    }
    void display()
    {
        cout << "building =" << this->building  << endl;
        cout << "street = " << this->street << endl;
        cout << "city =" << this->city << endl;
        cout<< "pin =" << this->pin<< endl;
    }

    // Mutators -> setters
    void set_building(string building)
    {
        this->building = building;
    }
    
    void set_street(string street)
    {
        this->street = street;
    }
    void set_city(string city)
    {
        this->city = city;
    }
    
    void set_pin(int pin)
    {
        this->pin = pin;
    }
    
    

    // Inspectors -> getters
    string get_building()
    {
        return this->building;
    }
    
    string get_street()
    {
        return this->street;

    }
    string get_city()
    {
        return this->city;
    }
    int get_pin()
    {
        return this->pin;
    }
    
};

int main()
{
    address a1;
    a1.display();
    cout<< "***********************"<< endl;
    // t1.hr = 12; // NOT OK
    a1.set_building("RAM");
    a1.set_street("sham nagar");
    a1.set_city("latur");
    a1.set_pin(123456);

    cout << "After change in a1.building, a1.street, a1.city, a1.pin = " << endl;

    a1.display();

    cout<< "***********************"<< endl;
    // cout << "value of t1.min" << t1.min << endl;
    cout << "value of a1.building = " << a1.get_building() << endl;
    cout << "value of a1.street = " << a1.get_street() << endl;
    cout << "value of a1.city = " << a1.get_city() << endl;
    cout << "value of a1.pin = " << a1.get_pin() << endl;

    cout<< "***********************"<< endl;
    
    address a2("anisha", "shaniwar peth", "karad", 413002);
    a2.display();
    cout<< "***********************"<< endl;
    // cout << "value of t1.min" << t1.min << endl;
    address a3;
    a3.accept();
    a3.display();
    cout<< "***********************"<< endl;
    


    return 0;
}