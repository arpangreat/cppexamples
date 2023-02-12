#include <bits/stdc++.h>
int main() {
  std::map<std::string, int> datab;
  std::string name;
  int age;

  std::cout << "Enter the name:" << std::endl;
  std::cin >> name;
  std::cout << "Enter the age:" << std::endl;
  std::cin >> age;
  datab[name] = age;

  std::cout << datab[name] << std::endl;
}
