#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    float sal;

public:
    employee()
    {
        this->id = 0;
        this->sal = 0.00;
    }

    employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
    }
    int getid()
    {
        return this->id;
    }
    void setid(int id)
    {
        this->id = id;
    }

    int getsal()
    {
        return this->sal;
    }
    void setsal(float sal)
    {
        this->sal = sal;
    }

    void accept()
    {
        cout << "Enter the EmpId:";
        cin >> this->id;
        cout << "Enter the Salary:";
        cin >> this->sal;
    }

    void display()
    {
        cout << "Id is: " << this->id << endl;
        cout << "Salary is: " << this->sal << endl;
    }
};

class manager : virtual public employee
{
private:
    float bonus;

public:
    manager()
    {
        this->bonus = 0.0;
    }
    manager(float bonus)
    {
        this->bonus = bonus;
    }

    float getbonus()
    {
        return this->bonus;
    }
    void setbonus(float bonus)
    {
        this->bonus = bonus;
    }

    void accept()
    {

        employee::accept();
        cout << "Enter Bonus: ";
        cin >> this->bonus;
    }

    void display()
    {

        employee::display();
        cout << this->bonus;
    }

protected:
    void accept_manager()
    {
        cout << "Enter the bonus: ";
        cin >> this->bonus;
    }
    void display_manager()
    {
        cout << " Bonus is :" << this->bonus << endl;
    }
};

class salesman : virtual public employee
{
private:
    float comm;

public:
    salesman()
    {
        this->comm = 00;
    }
    salesman(float comm)
    {
        this->comm = comm;
    }

    float getcomm()
    {
        return this->comm;
    }

    void setcomm(float comm)
    {
        this->comm = comm;
    }

    void accept()
    {
        employee::accept();
        cin >> this->comm;
    }

    void display()
    {
        employee::display();
        cout << this->comm;
    }

protected:
    void accept_salesman()
    {
        cout << " Enter the commission: ";
        cin >> this->comm;
    }

    void display_salesman()
    {
        cout << "The commission is :" << this->comm << endl;
    }
};

class sales_manager : public manager, public salesman
{
public:
    void accept()
    {
        employee::accept();
        manager::accept_manager();
        salesman::accept_salesman();
    }
    void display()
    {
        employee::display();
        manager::display_manager();
        salesman::display_salesman();
    }
};

int main()
{
    sales_manager sm;
    sm.accept();
    sm.display();

    return 0;
}