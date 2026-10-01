#include <iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        void getdata(){
            cin>>a;
        }
        void showdata(){
            cout<<a<<endl;
        }
};

int main(){
    A a;
    a.getdata();
    a.showdata();
}
