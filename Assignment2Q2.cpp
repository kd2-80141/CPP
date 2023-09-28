/*Q2. Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.
Instead of char[] use string datatype*/

#include<iostream>
using namespace std;
class Address{
    private:

    string building;
    string street;
    string city;
    int pin;
  public:
     
     Address(){
        
     }

     Address(string building,string street,string city,int pin ){
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
     }
     void accept(){
        cout<< "Enter the building name: ";
        cin>> this->building;
        cout<< "Enter the street name: ";
        cin>> this->street;
        cout<< "Enter the city name: ";
        cin>> this->city;
        cout<< "Enter the pin code: ";
        cin>> this->pin;
     }
      void display(){
        cout<<"Building name is: " << this->building << endl;
        cout<<"Street name is: " << this->street << endl;
        cout<<"City name is: " << this->city << endl;
        cout<<"Pin code is: " << this->pin << endl;
     }
      string getbuilding(){
        return this->building;
      }
      string getstreet(){
        return this->street;
      }
      string getcity(){
        return this->city;
      }
      int getpin(){
        return this->pin;
     }
    void setbuilding(string building)
    {
        this->building=building;
    }
    void setstreet(string street)
    {
        this->street=street;
    }
    void setcity(string city)
    {
        this->city=city;
    }
    void setpin(int pin)
    {
        this->pin=pin;
    }
    
     };
    
int main()
{
    Address a;
    a.accept();
    cout<< "000000000000000000000000000000000000"<< endl;
    a.display();
    cout<< "000000000000000000000000000000000000"<< endl;
    a.setbuilding("nvm");
    a.display();
    cout<< "000000000000000000000000000000000000"<< endl;
    a.setstreet("xyzstreet");
    a.display();
    cout<< "000000000000000000000000000000000000"<< endl;
    a.setcity("Karad");
    a.display();
    cout<< "000000000000000000000000000000000000"<< endl;
    a.setpin(410154);
    a.display();
    cout<< "000000000000000000000000000000000000"<< endl;
    return 0;
}

