module;
#include <iostream>
#include <string_view>
export module hello;
export auto greeter(std::string_view const &name) -> void {
  std::cout << "Hello " << name << "!\n";
}
