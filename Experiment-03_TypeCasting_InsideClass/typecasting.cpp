#include<iostream>
using namespace std;

int main()
{
    int num = 25;
    float result;

    result = num;

    cout<<"Implicit Type Casting"<<endl;
    cout<<"Integer Value : "<<num<<endl;
    cout<<"Float Value : "<<result<<endl;

    float marks = 89.75;
    int total;

    total = (int)marks;

    cout<<"\nExplicit Type Casting"<<endl;
    cout<<"Float Value : "<<marks<<endl;
    cout<<"Integer Value : "<<total<<endl;

    return 0;
}
