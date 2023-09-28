/*Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();*/

#include <iostream>
using namespace std;
 
 class Date {
    private:
    int day;
    int month;
    int year;
    public:

    void initDate(){
        this->day=00;
        this->month=00;
        this->year=00;
}
     void printDateOnConsole(){
         cout<< day<< "/" << month << "/" << year << endl; 
     }
void acceptDateOnConsole(){
     cout<< "Enter the date to be checked ";
         cin >> this->day ;
         cout<< "Enter the month to be checked ";
         cin>> this->month;
         cout<< "Enter the year to be checked ";
         cin>> this->year;
}
   
   bool isLeapYear(){
      if (year%100!=0 && year%4==0)
      return true;
      else 
      return false;
   }
 };

 int menu (){
      int choice;
      cout<< "****************************" << endl;
      cout<< "0 EXIT" << endl;
      cout << "1 INITIALISE DATE" << endl;
      cout<< "2 PRINT DATE" << endl;
      cout<< "3 ACCEPT DATE" << endl;
      cout<< "4 LEAP YEAR OR NOT" << endl;
      cout<< "Enter your choice"<< endl;
      cin >> choice;
      cout<< "****************************" << endl;
      return choice;
 }
 int main(){
    Date d;
    int choice;
    while((choice=menu()) != 0)
    {
        switch (choice){
            case 1:
           d.initDate();
            break;
            case 2:
            d.printDateOnConsole();
            break;
            case 3:
            d.acceptDateOnConsole();
            break;
            case 4:
            if(d.isLeapYear())
            cout<<"LEAP YEAR"<< endl;
            else 
            cout<<"NOT LEAP YEAR"<< endl;
            break;
            default:
            cout<<"Wrong choice... " << endl;
            

        }
    }
    cout<< "Thank you for using our service..." << endl;
    
    return 0;

 }