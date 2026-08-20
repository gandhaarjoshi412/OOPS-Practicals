#include <iostream>
using namespace std;

class obj {
private:
  int a;

public:
  void get1(int x) { a = x; }
  friend void add(obj u, obj i);
};

void add(obj u, obj i) { cout << u.a + i.a; }
int main() {
  obj o1, o2;

  o1.get1(5);
  o2.get1(6);

  add(o1, o2);
  return 0;
}