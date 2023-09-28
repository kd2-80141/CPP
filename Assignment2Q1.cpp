/*Q1. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
namespace. Test the functionalities.*/
#include <iostream>
using namespace std;
namespace Nstudents
{
    class students
    {
    private:
        int rollno;
        string name;
        double marks;

    public:
        void initStudents()
        {
            this->rollno = 00;
            this->name = "00";
            this->marks = 00;
        }

        void printStudentOnConsole()
        {
            cout << this->rollno << endl;
            cout << this->name << endl;
            cout << this->marks << endl;
        }

        void acceptStudentsOnConsole()
        {
            cout << "Enter the the rollno: ";
            cin >> this->rollno;
            getchar();
            cout << "Enter the the name: ";
            getline(cin, this->name);
            cout << "Enter the the marks: ";
            cin >> this->marks;
        }
    };
}
using namespace Nstudents;
int main()
{
    students s1;
    s1.initStudents();
    s1.printStudentOnConsole();
    s1.acceptStudentsOnConsole();
    s1.printStudentOnConsole();
    return 0;
}
