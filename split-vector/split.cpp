module;

#include <algorithm>
#include <cstddef>
#include <string_view>
#include <vector>

export module split;

namespace split {

#define DEFAULT_CONTAINER(Value) std::vector<Value>

auto count_words(std::string_view text) -> std::size_t {
  return std::count(text.begin(), text.end(), ' ') + 1;
}
// namespace split

export template <typename Container>
auto split_into(Container& container, std::string_view text) -> void {
  auto count = count_words(text);
  container.reserve(container.size() + count);

  std::size_t start = 0;

  while (start <= text.size()) {
    auto stop = text.find(' ', start);

    if (stop == std::string_view::npos) {
      stop = text.size();
    }
    container.push_back(text.substr(start, stop - start));
    start = stop + 1;
  }
}

export auto split(std::string_view text)
    -> DEFAULT_CONTAINER(std::string_view) {
  std::vector<std::string_view> res;
  split_into(res, text);
  return res;
}
}  // namespace split
