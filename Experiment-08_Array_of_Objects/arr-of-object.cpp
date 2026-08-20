#include <iostream>
#include <string>
using namespace std;

class student {
private:
  int roll;
  string name;

public:
  void get() { cin >> roll >> name; }
  void disp() { cout << "Roll number : " << roll << " name : " << name << endl; }
};

int main() {
  student s[10];
  for (int i = 0; i < 10; i++) {
    cout << "enter roll no and name for " << i + 1 << " student: ";
    s[i].get();
  }
  for (int j = 0; j < 10; j++) {
    s[j].disp();
  }
}
