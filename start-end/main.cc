#include <chrono>
#include <iostream>

#include "../log.h"

int main(int argc, char *argv[]) {
  auto start = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < 1000; i++) {
    std::cout << i << std::endl;
  }

  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double, std::milli> diff = end - start;

  std::cout << "Time taken: " << diff.count() << " ms" << std::endl;
  return 0;
}
