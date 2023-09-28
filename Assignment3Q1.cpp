/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.#include<iostream>*/
#include<iostream>
using namespace std;
class Volume{
    private :
    int length;
    int width;
    int height;
    public:
     
     Volume(){
               this->length=0;
               this->width=0;
               this->height=0;
     }

     void acceptData(){

        cout<< "Enter the length of the box: ";
        cin>> this->length;
        cout<< "Enter the width of the box: ";
        cin>> this->width;
        cout<< "Enter the  height of the box: ";
        cin>> this->height;
     }

     void printData(){

        cout<<"The volume of the box is : " << this->length*width*height << endl;
     }
};
enum Emenu {
    EXIT,
    ADD_DATA,
    PRINT
};
 
 Emenu menu(){
    int choice;
     cout<<"********************************"<< endl;
    cout<<"0.EXIT"<<endl;
    cout<<"1.ADD_DATA"<< endl;
    cout<<"2.PRINT" << endl;
    cout<<"********************************"<< endl;
    cout<<"Enter your choice:" << endl;
    cin>> choice;
    return Emenu(choice);
 }

 int main()
 {
    Volume v;
    Emenu choice;
    while((choice=menu())!=EXIT)
    {
        switch(choice)
        {
            case PRINT:
            v.printData();
            break;
            case ADD_DATA:
            v.acceptData();
            break;
            default:
            cout<<"INVALID USER!!!!!" << endl;
            break;
       }
    }
    cout<< "Thank you for using our App! :)" << endl;
    return 0;
 }
   