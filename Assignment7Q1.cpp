#include<iostream>
using namespace std;
class date{
    private:
       int day;
       int month;
       int year;
       public:
       date(){
        this->day=0;
        this->month=0;
        this->year=0;
       }
       date(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
       }

       int get_day(){

            return this->day;
       }

       void set_day(int day){
        this->day=day;
       }


       int get_month(){

            return this->month;
       }

       void set_month(int month){
        this->month=month;
       }

       int get_year(){

            return this->year;
       }

       void set_year(int year){
        this->year=year;
       }

       void accept(){
        cout<< "Enter the day:" ;
        cin>> this->day;
        cout<< "Enter the month:" ;
        cin>> this->month;
        cout<<"Enter the year:" ;
        cin >> this->year;
       }

       void display(){
        cout<< this->day << "/" << this->month << "/" << this->year<< endl;
       }

       bool is_leap_year(){
        if(this->year%100!=0 && this->year%4==0 )
        return true;
        else
        return false;
       }
};
 
 class person {
    private:
    string name;
    string addr;
    date birth_date;
    public:

    person(){
        this->name="";
        this->addr="";

    }

    person(string name, string addr){
        this->name=name;
        this->addr=addr;
    }

    string get_name(){
        return this->name;
    }

        void set_name(string name){
            this->name=name;
        }


         string get_addr(){
        return this->addr;
    }

        void set_addr(string name){
            this->addr=addr;
        }
          
          
          
    

        void setbirth_date(date birth_date){
            this->birth_date=birth_date;
        }
        

        void accept(){
            cout<<"Enter your name please:" ;
            cin>> this->name;
            cout<<"Enter your address:";
            cin>> this->addr;
            cout<<"Enter your birth date:"<<endl;

            birth_date.accept();
        }

        void display(){
            cout<<"The name entered is :" << this->name<<endl;
            cout<< "The address you entered is :" << this->addr << endl;
            cout<< "Your Birthdate is:"<<endl; ;
            birth_date.display();
        }
    };

    class employee : public person{
        private:
        int id;
        float sal;
        string dept;
        date joining;
        public:

        employee(){
            this->id=00;
            this->sal=0;
            this->dept="";

        }

        employee(int id,float sal,string dept){
            this->id=id;
            this->sal=sal;
            this->dept=dept;
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
        person::accept();
        cout << "Enter your empid please: "<< endl;
        cin >> this->id;
        cout << "Enter your salary please: "<< endl;
        cin >> this->sal;
        cout << "Enter your dept please: "<< endl;
        cin >> this->dept;
        cout << "Enter your date of joining :"<< endl;
        joining.accept();
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

    int main(){
        employee e;
        e.accept();
        e.display();
        
      
        // person p;
        // p.accept();
        // p.display();
    }
 