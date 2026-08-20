#include <iostream>
using namespace std;


class A{
    private:
        int a;
        static int n;
    public:
        void getdata(){
            cin>>a;
            n++;
        }
        void showdata(){
            cout<<a<<endl;
            cout<<"This is the "<<n<<" object of class A"<<endl;
        }
        static void showcount(){
            cout<<"Total objects count (n): "<<n<<endl;
        }
};

int A::n = 0;

int main()
{
    A a;
    a.getdata();
    a.showdata();
    A::showcount();
}
