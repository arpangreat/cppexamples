#include <iostream>
#include <vector>

class Matrix {
private:
  double **marr = new double *[2];

public:
  double sum();
  double diff();
  double mult();
  void values();
};

void Matrix::values() {
  std::cout << "Enter Row1-Col1 and Row1-Col2" << std::endl;
  std::cin >> marr[0][0] >> marr[0][1];
  std::cout << "Enter Row2-Col1 and Row2-Col2" << std::endl;
  std::cin >> marr[1][0] >> marr[1][1];
}

double Matrix::sum() {
  for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 2; j++) {
      // code
    }
  }

  return double();
}
