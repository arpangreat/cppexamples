#include <fmt/color.h>

int main(int argc, char *argv[]) {
  fmt::print(fmt::emphasis::bold | fg(fmt::terminal_color::magenta),
             "Hello World");
  return 0;
}
