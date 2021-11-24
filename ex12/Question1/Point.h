#include <bits/stdc++.h>
using namespace std;

#ifndef POINT_H
#define POINT_H

struct Point
{
  Point() : x(0.0), y(0.0), z(0.0) {}
  Point(double x, double y, double z) : x(x), y(y), z(z) {}
  int getOriginLen() const
  {
    return sqrt(x * x + y * y + z * z);
  }
  // compare self getOriginLen with other getOriginLen
  bool operator<(const Point &other) const
  {
    return getOriginLen() < other.getOriginLen();
  }
  bool operator>(const Point &other) const
  {
    return getOriginLen() > other.getOriginLen();
  }
  bool operator==(const Point &other) const
  {
    return getOriginLen() == other.getOriginLen();
  }
  bool operator!=(const Point &other) const
  {
    return getOriginLen() != other.getOriginLen();
  }
  double x, y, z;
};

#endif