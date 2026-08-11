#include<iostream>
using namespace std;

class Employee
{
private:
    int empid;
    char name[30];
    float salary;

public:
    void accept();
    void display();
};

void Employee::accept()
{
    cout<<"Enter Employee ID : ";
    cin>>empid;
    cout<<"Enter Employee Name : ";
    cin>>name;
    cout<<"Enter Salary : ";
    cin>>salary;
}

void Employee::display()
{
    cout<<"\nEmployee Details"<<endl;
    cout<<"Employee ID : "<<empid<<endl;
    cout<<"Employee Name : "<<name<<endl;
    cout<<"Salary : "<<salary<<endl;
}

int main()
{
    Employee e;
    e.accept();
    e.display();
    return 0;
}
