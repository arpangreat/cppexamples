#include <bits/stdc++.h>
using namespace std;
/*void PrintValue(int value){
  cout<<"Value: "<<value<<endl;

}
*/

void ForEach(const std::vector<int> &values, void (*func)(int)) {

  for (int value : values)
    func(value);
}
int main() {
  std::vector<int> values = {1, 3, 5, 7, 8};
  // ForEach(values,PrintValue);
  // Lamda Function
  ForEach(values, [](int value) { cout << "Value: " << value << endl; });

  cin.get();
}
