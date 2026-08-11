#include<iostream>
using namespace std;

inline int square(int n)
{
    return n * n;
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Square = "<<square(num)<<endl;
    return 0;
}
