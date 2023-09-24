#include <algorithm>
#include <iostream>
#include <string_view>
#include <vector>

// #include "split.cpp"
import split;

auto main() -> int {
  auto words = split::split("hello world");
  split::split_into(words, "Swastik");
  for (auto& word : words) {
    std::cout << word << std::endl;
  }
}
