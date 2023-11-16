#include <bits/stdc++.h>

#include <iostream>

// This is a comment
int main() {
  std::array<int, 10> a;
  for (auto &elem : a) {
    std::cout << elem << std::endl;
  }
  std::cout << &a[0] << std::endl;
  a[0] = 5;
  a[1] = 10;
  std::cout << a[1] << std::endl;
  std::cout << a[5] << std::endl;
  return 0;
}
