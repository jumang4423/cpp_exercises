#include <iostream>
#include <cassert>
#include "Mat4x4.h"

using namespace std;

// Test Mat4x4
int main(void)
{
  Mat4x4 A; // A = I
  double coefficients[4][4] = {{1.0, 2.0, 3.0, 4.0}, {5.0, 6.0, 7.0, 8.0}, {9.0, 10.0, 11.0, 12.0}, {13.0, 14.0, 15.0, 16.0}};
  Mat4x4 B(coefficients);
  Mat4x4 C(A * B);
  // 1 2 3 4
  // 5 6 7 8
  // 9 10 11 12
  // 13 14 15 16
  assert(C == B);
  assert(C(0, 0) == 1.0);
  C += B;
  assert(C(1, 0) == 10.0);
  assert(C(1, 2) == 14.0);
  C -= A;
  Mat4x4 D = -A;
  assert(D(0, 0) == -1.0);
  assert(D(1, 1) == -1.0);
  assert(D(2, 2) == -1.0);
  assert(D(3, 3) == -1.0);

  cout << A << endl;
  cout << B << endl;
  cout << C << endl;
  cout << D << endl;

  cout << "Tests passed" << endl;

  return 0;
}