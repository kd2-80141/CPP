/*Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) (write a menu driven code for it and also use modular
approach)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.*/

#include <iostream>
using namespace std;
class Cylinder
{
private:
    double radius;
    double height;
    double pi;
    double volume;

public:
    Cylinder()
    {
    }

    Cylinder(double radius, double height, double pi) : radius(radius), height(height), pi(pi)
    {
        this->height = height;
        this->radius = radius;
        this->pi;
        this->volume = volume;
    }

    void PrintVolume()
    {
        cout << "Volume =" << this->pi * radius * radius * height << endl;
    }

    double getradius()
    {
        return this->radius;
    }

    void setradius(double radius)
    {
        this->radius = radius;
    }

    double getheight()
    {
        return this->height;
    }
    void setheight(double height)
    {
        this->height = height;
    }

    double getvolume()
    {
        return this->volume;
    }
};


int menu(){
    int choice;
    cout<< "0 to Exit"<<endl;
    cout<< "1 to Print_Volume"<<endl;
    cout<<"Enter the choice: "<< endl;
    cin>> choice;
    return choice;
}
int main()
{   
    Cylinder c(8,9,3.14);
    Cylinder c1(10,15,3.14);
    int choice;
    while(choice=menu()!=0){
        switch (choice){
            case 1:
            c.PrintVolume();
            c1.PrintVolume();
            break;
            default:
            cout<< "Invalid"<< endl;

        }
        
        }
        cout<<"Thanx for using our app"<< endl;
   
    return 0;
}

