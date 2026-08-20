#include <iostream>
using namespace std;

class obj2;
class obj1 {
private:
  int x;

public:
  void get1(int a) { x = a; }
  friend void add(obj2 y, obj1 z);
};

class obj2 {
private:
  int p;

public:
  void get2(int b) { p = b; }
  friend void add(obj2 y, obj1 z);
};

void add(obj2 y, obj1 z) {
    cout << y.p + z.x; 
}

int main() {
  obj1 o1;
  obj2 o2;

  o1.get1(10);
  o2.get2(20);

  add(o2, o1);
  return 0;
}