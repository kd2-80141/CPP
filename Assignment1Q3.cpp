/*Q3. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();*/

#include <iostream>
using namespace std;

class student{
    private:
    int rollno;
    string name;
    double marks;

  public:

void initStudents(){
    this->rollno=00;
   this->name= "00";
    this->marks=00;
}
void printStudentOnConsole(){
    cout<< this->rollno << endl;
    cout << this->name << endl;
    cout<< this->marks << endl;
}
void acceptStudentFromConsole(){
    cout<<"Enter the roll no: "<< endl;
    cin>> this->rollno; 
    cout<<"Enter the name: "<< endl;
    cin>> this->name;
    cout<<"Enter the marks: "<< endl;
    cin>> this-> marks;
}
};

int menu(){

    int choice;
    cout<<"************************" << endl;
    cout<< "0 to EXIT" << endl;
    cout<< "1 to init" << endl;
    cout<< "2 to print" << endl;
    cout<< "3 to accept" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout<<"************************" << endl;
    return choice;

}

int main(){
    student s;
    int choice;
    while((choice=menu()) !=0)
    {
        switch (choice){
            case 1:
            s.initStudents();
            break;

            case 2:
            s.printStudentOnConsole();

            break;

            case 3:
            s.acceptStudentFromConsole();

            break;
        }
    }
    cout<< "Thanx for using our service..." << endl;
    return 0;
}
