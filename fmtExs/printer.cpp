#include <fmt/color.h>
#include <fmt/ranges.h>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> val = {1, 2, 3};
  fmt::print(fmt::emphasis::bold | fg(fmt::terminal_color::magenta), "{}\n",
             val);
  return 0;
}
