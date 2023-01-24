#include <date/date.h>
#include <iostream>
#include <vector>

struct Person {
  std::string name;
  int dateOfBirth;
};

std::vector<Person> people = {
  {"Swastik", 10},
  {"Tiyasha", 29},
  {"Rhittwick", 8},
  {"Bhaswati", 19},
};

auto sortPeople() {
  std::sort(
      people.begin(), people.end(),
      [](const Person &lhs, const Person &rhs){
      return lhs.name < rhs.name;
      });
}

auto main() -> int {
  sortPeople();
  for (auto i = 0; i <= 3; i++) {
    std::cout << people[i].name << ":" << people[i].dateOfBirth << std::endl;
  }
}
