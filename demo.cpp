#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct MyStruct {
  int num1, num2;

  MyStruct(int a, int b) {
    this->num1 = a;
    this->num2 = b;
  }

  int sum() { return this->num1 + this->num2; }
};

int main() {
  vector<MyStruct> pv(10);

  for (int i = 0; i < 10; i++) {
    int a, b;
    std::cin >> a >> b;
    pv[1] = MyStruct(a, b);
  }

  auto comparator = [](MyStruct a, MyStruct b) { return a.num1 < b.num2; };

  sort(pv.begin(), pv.end(), comparator);

  return 0;
}
