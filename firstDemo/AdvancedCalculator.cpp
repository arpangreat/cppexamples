#include <algorithm>
#include <iostream>
using namespace std;
double sum(double a, double b) { return a + b; }

double mult(double c, double d) { return c * d; }

double subs(double e, double f) { return e - f; }

double divi(double g, double h) { return g / h; }

void norCal() {
  double x, y;
  int num;
  cout << "first:" << endl;
  cin >> x;
  cout << "second:" << endl;
  cin >> y;
  cout << "enter your choice" << endl;
  cout << "enter 1 for sum,2 for sub,3 for multi,4 for divide" << endl;
  cin >> num;

  switch (num) {
  case 1:
    cout << "The sum is " << sum(x, y) << endl;
    break;
  case 2:
    cout << "The subs is " << subs(x, y) << endl;
    break;
  case 3:
    cout << "The mult is " << mult(x, y) << endl;
    break;
  case 4:
    cout << "The divi is " << divi(x, y) << endl;
    break;
  default:
    cout << "enter between 1-4." << endl;
  }
}

void matrix2() {
  double **m2arr = new double *[2];
  for (int i = 0; i < 2; i++)
    m2arr[i] = new double[2];
  cout << "Enter Row1-Col1 and Row1-Col2" << endl;
  cin >> m2arr[0][0] >> m2arr[0][1];
  cout << "Enter Row2-Col1 and Row2-Col2" << endl;
  cin >> m2arr[1][0] >> m2arr[1][1];
  int n;
  cout << "Enter 1 for normal and 2 for determinante" << endl;
  cin >> n;
  switch (n) {
  case 1:
    cout << " " << endl;
    cout << "| " << m2arr[0][0] << " " << m2arr[0][1] << " |" << endl;
    cout << "| " << m2arr[1][0] << " " << m2arr[1][1] << " |" << endl;
    break;
  case 2:
    cout << "Your result of determinante of given Matrix is:" << endl;
    cout << ((m2arr[0][0] * m2arr[1][1]) - (m2arr[0][1] * m2arr[1][0])) << endl;
    break;
  }
}

void matrix3() {
  double **m3r = new double *[3];
  for (int i = 0; i < 3; i++) {
    m3r[i] = new double[3];
  }
  cout << "Enter Row1-Col1 and Row1-Col2 and Row1-Col3" << endl;
  cin >> m3r[0][0] >> m3r[0][1] >> m3r[0][2];
  cout << "Enter Row2-Col1 and Row2-Col2 and Row2-Col3" << endl;
  cin >> m3r[1][0] >> m3r[1][1] >> m3r[1][2];
  cout << "Enter Row3-Col1 and Row3-Col2 and Row3-Col3" << endl;
  cin >> m3r[2][0] >> m3r[2][1] >> m3r[2][2];
  int n;
  cout << "Enter 1 for normal and 2 for determinante" << endl;
  cin >> n;
  double val1 = ((m3r[1][1] * m3r[2][2]) - (m3r[1][2] * m3r[2][1]));
  double val2 = ((m3r[1][0] * m3r[2][2]) - (m3r[1][2] * m3r[2][0]));
  double val3 = ((m3r[1][0] * m3r[2][1]) - (m3r[2][0] * m3r[1][1]));
  switch (n) {
  case 1:
    cout << " " << endl;
    cout << "| " << m3r[0][0] << " " << m3r[0][1] << " " << m3r[0][2] << " |"
         << endl;
    cout << "| " << m3r[1][0] << " " << m3r[1][1] << " " << m3r[1][2] << " |"
         << endl;
    cout << "| " << m3r[2][0] << " " << m3r[2][1] << " " << m3r[2][2] << " |"
         << endl;
    break;
  case 2:
    cout << "Your result of determinante of given Matrix is:" << endl;
    cout << ((m3r[0][0] * val1) - (m3r[0][1] * val2) + (m3r[0][2] * val3))
         << endl;
    break;
  }
}
int main() {
  while (true) {
    int x;
    cout << "Enter 1 for normal calculator or 2 for (2*2) matrix calulator or "
            "3 for (3*3) matrix calculator or 4 for quit"
         << endl;
    cin >> x;
    switch (x) {
    case 1:
      norCal();
      break;
    case 2:
      matrix2();
      break;
    case 3:
      matrix3();
      break;
    case 4:
      break;

    default:
      break;
    }
  }
  return 0;
}
