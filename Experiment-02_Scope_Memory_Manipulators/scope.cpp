#include <iostream>

using namespace std;

int x = 20;

int main()
{
    int x = 30;
    cout << x << endl;
    cout << ::x << endl;
}