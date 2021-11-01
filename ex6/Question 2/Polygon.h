#ifndef POLYGON_H
#define POLYGON_H
#include <vector>
#include "../Question 1/Point2D.h"

// Class: Polygon
class Polygon
{
public:
  Polygon();
  // Constructor: Polygon
  Polygon(std::vector<Point2D>);
  float get_area();

private:
  // Member: points
  std::vector<Point2D> points_;
};

#endif