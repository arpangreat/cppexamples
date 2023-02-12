#include <iostream>
#include <vector>

auto main() -> int {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++) {
    std::cout << *i << std::endl;
  }

  return 0;
}