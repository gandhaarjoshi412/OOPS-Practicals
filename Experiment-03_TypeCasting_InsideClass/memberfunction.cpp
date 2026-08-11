#include<iostream>
using namespace std;

class Student
{
    int roll;
    char name[30];

public:
    void accept()
    {
        cout<<"Enter Roll Number : ";
        cin>>roll;
        cout<<"Enter Name : ";
        cin>>name;
    }
    void display()
    {
        cout<<"\nStudent Details"<<endl;
        cout<<"Roll Number : "<<roll<<endl;
        cout<<"Name : "<<name<<endl;
    }
};

int main()
{
    Student s;
    s.accept();
    s.display();
    return 0;
}
