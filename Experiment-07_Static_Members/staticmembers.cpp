#include<iostream>
using namespace std;

class Student
{
private:
    static int count; // Static data member declaration
public:
    Student()
    {
        count++; // Increment count whenever an object is created
    }
    
    static void display() // Static member function
    {
        cout << "Total Objects Created = " << count << endl;
    }
};

// Definition and initialization of the static data member outside the class
int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;
    
    // Call static member function using the class name
    Student::display();
    
    return 0;
}
