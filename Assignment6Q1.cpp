#include <iostream>
using namespace std;
class date
{
private:
    int day;
    int month;
    int year;

public:
    date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    int getday()
    {
        return this->day;
    }

    void setday(int day)
    {
        this->day = day;
    }

    int getmonth()
    {
        return this->month;
    }

    void setmonth(int month)
    {
        this->month = month;
    }

    int getyear()
    {
        return this->year;
    }

    void setyear(int year)
    {
        this->year = year;
    }

    void acceptdata()
    {
        cout << "Enter the day:" << endl;
        cin >> this->day;
        cout << "Enter the month:" << endl;
        cin >> this->month;
        cout << "Enter the year:" << endl;
        cin >> this->year;
    }

    void display()
    {
        cout << 
              this->day
             << "/"
             << this->month
             << "/" << this->year << endl;
    }

    bool leapyear()
    {
        if (year % 100 != 0 or year % 4 == 0)
            return true;
        else
            return false;
    }
};
class person
{
private:
    string name;
    string addr;
    date birth_date;

public:
    person()
    {
        this->name = "*";
        this->addr = "***";
    }

    person(string name, string addr)
    {
        this->name = name;
        this->addr = addr;
    }

    string getname()
    {
        return this->name;
    }
    void setname(string name)
    {
        this->name = name;
    }

    string getaddr()
    {
        return this->addr;
    }
    void setaddr(string addr)
    {
        this->addr = addr;
    }

    date getbirthdate()
    {
        return this->birth_date;
    }

    void setbirthdate(date birthdate)
    {
        this->birth_date = birth_date;
    }

    void acceptdata()
    {
        cout << "Enter the name please: "<< endl;
        cin >> this->name;
        cout << "Enter your adress please: "<< endl;
        cin >> this->addr;
        cout << "Enter your birthdate please:"<< endl;
        birth_date.acceptdata();
    }

    void displaydata()
    {
        cout << "The name is  :" << this->name << endl;
        cout << "The address you entered is : " << this->addr << endl;
        cout << "Your birthdate is :";
        birth_date.display();
    }
};

class employee
{
private:
    int id;
    float sal;
    string dept;
    date joining;

public:
    employee()
    {
        this->id = 00;
        this->sal = 0.00;
        this->dept = "**";
    }

    employee(int id, float sal, string dept)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }
    int getid()
    {
       return this->id;
    }
    void setid(int id)
    {
        this->id = id;
    }

    float getsal()
    {
       return this->sal;
    }
    void setsal(float sal)
    {
        this->sal = sal;
    }
    string getdept()
    {
       return this->dept;
    }
    void setdept(string dept)
    {
        this->dept = dept;
    }
    date getjoiningdate()
    {
        return this->joining;
    }
    void setjoiningdate(date joining)
    {
        this->joining = joining;
    }

    void accept()
    {
        cout << "Enter your empid please: "<< endl;
        cin >> this->id;
        cout << "Enter your salary please: "<< endl;
        cin >> this->sal;
        cout << "Enter your dept please: "<< endl;
        cin >> this->dept;
        cout << "Enter your date of joining :"<< endl;
        joining.acceptdata();
    }

    void display()
    {
        cout << "Your empid is: " << this->id << endl;
        cout << "Your salary is: " << this->sal << endl;
        cout << "Your department is: " << this->dept << endl;
        cout << "Your date of joining is: " << endl;
        joining.display();
    }
};

int main()
{
   person p;
    p.acceptdata();
    p.displaydata();
    p.setaddr("MUMBAI");
    // cout<<"Enter date"<< endl;
    // date dd;
    // dd.acceptdata();
    // p.setbirthdate(dd);

    employee e;
   e.accept();
   e.display();



}
