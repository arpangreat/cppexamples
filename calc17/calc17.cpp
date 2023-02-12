#include <iostream>

int main(int argc, char *argv[]) {
  auto x = 0;
  auto y = 0;
  auto v = 0;

  std::cout << "Enter the number x and y" << std::endl;
  std::cin >> x >> y;

  std::cout << "1 for add , 2 for sub" << std::endl;
  std::cin >> v;

  auto add = [](auto i, auto j) { return i + j; };
  auto div = [](auto i, auto j) { return i - j; };

  switch (v) {
    case 1:
      std::cout << add(x, y) << std::endl;
      break;

    case 2:
      std::cout << div(x, y) << std::endl;
      break;
  }
  return 0;
}