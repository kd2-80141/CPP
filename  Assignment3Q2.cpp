// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
// Mostly they do, but sometimes a car goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
// collected. Model this tollbooth with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number of cars, and a type double to
// hold the total amount of money collected.
// A constructor initializes all data members to 0. A member function called payingCar() increments
// the car total and adds 0.50 to the cash total. An other function, called nopayCar()
// increments the car total but adds nothing to the cash total. Finally, a member function called
// printOnConsole() displays the two totals and number of paying as well as non paying cars total.
// ( write a menu driven code for it)

#include <iostream>
using namespace std;
class tollbooth
{
private:
    unsigned int total_cars;
    double total_amt;

public:
    tollbooth()
    {
        this->total_cars = 00;
        this->total_amt = 0.00;
    }

    tollbooth(unsigned int total_cars, double total_amt)
    {
        this->total_cars = total_cars;
        this->total_amt = total_amt;
    }

    void payingCars()
    {

        total_cars++;

        total_amt = total_amt + 0.50;
    }

    void nopayCars()
    {
        total_cars++;
    }

    void printonConsole()
    {

        cout << "The total cars are: " << total_cars << endl;
        cout << "The total paying cars are: " << this->total_amt / 0.5 << endl;
        cout << "The total nonpaying cars are: " << (this->total_cars) - (this->total_amt / 0.5) << endl;
        cout << "The total amount collected is:  " << total_amt << endl;
    }
};

int menu()
{
    int choice;
    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
    cout << "1. PAYING_CAR" << endl;
    cout << "2. NON_PAYING CAR " << endl;
    cout << "3. PRINT " << endl;
    cout << "4.EXIT" << endl;
    cout<<endl;
    cout << "ENTER YOUR CHOICE " << endl;
    cout<<"////////////////////////////////////////"<< endl;
    cin >> choice;
    cout<<"**************************************"<< endl;
    return choice;
}

int main()
{

    tollbooth t;
    int choice;
    while ((choice = menu()) != 4)
    {
        switch (choice)
        {

        case 1:
            t.payingCars();
            break;

        case 2:
            t.nopayCars();
            break;

        case 3:
            t.printonConsole();
            break;

        default:
            cout << "INVALID INPUT!!! :( ";
            break;
        }
    }
    cout<<"***********************************" << endl;
    cout << "Thank-you for Co-operating... :)";
    cout<<"***********************************" << endl;
    
    return 0;
}