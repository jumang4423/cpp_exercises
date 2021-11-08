// Mat4x4.h

#include <string>
#include <iostream>

#ifndef MAT4D_H
#define MAT4D_H

class Mat4x4
{
public:
  Mat4x4();
  Mat4x4(const Mat4x4 &m);
  Mat4x4(double a[4][4]);
  // =?
  Mat4x4 &operator+=(const Mat4x4 &m);
  Mat4x4 &operator-=(const Mat4x4 &m);
  Mat4x4 &operator*=(const Mat4x4 &m);
  // ?
  Mat4x4 operator+(const Mat4x4 &m);
  Mat4x4 operator-(const Mat4x4 &m);
  Mat4x4 operator*(const Mat4x4 &m);
  // unary minus
  Mat4x4 &operator-();
  // access the i,j 
  double &operator()(int i, int j);
  // ==
  bool operator==(const Mat4x4 &m);
  // =
  Mat4x4 &operator=(const Mat4x4 &m);
  // <<
  friend std::ostream &operator<<(std::ostream &os, const Mat4x4 &m);
private:
  double m_[4][4];
};

#endif