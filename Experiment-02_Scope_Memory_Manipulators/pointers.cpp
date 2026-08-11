#include <iostream>

using namespace std;

int main()
{
    int *ptr = new int(20);
    cout << "value of *ptr is: " << *ptr << endl;
    cout << "adress of ptr is: " << ptr << endl;

    delete(ptr);
    cout << "adress of ptr is: " << ptr << endl;
    cout << "value of *ptr is: " << *ptr << endl;

    return 0;
}