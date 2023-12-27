#include <iostream>
#include <stdexcept>
#include <vector>

#ifdef __GNUG__
[[gnu::noinline]]
#endif // DEBUG
unsigned int runtime_six() {
  return 6u;
}

auto main() -> int {
  std::vector<int> data = {1, 2, 3, 4, 5, 6};

  // Set Element
  data.at(1) = 88;

  // Set Element 2
  std::cout << "Element at 2 has value " << data.at(2) << std::endl;

  std::cout << "data size: " << data.size() << std::endl;

  try {
    data.at(runtime_six()) = 666;
  } catch (std::out_of_range const& exc) {
    std::cout << "Exception" << std::endl;
    std::cout << exc.what() << std::endl;
  }

  std::cout << "data: ";
  for (int elem : data)
    std::cout << " " << elem;
  std::cout << std::endl;
}
