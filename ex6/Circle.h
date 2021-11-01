#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape2D.h"
#include "Point2D.h"

class Circle : public Shape2D {
public:
  Circle(Point2D left_corner, float radius);
  float compute_area();
private:
  float radius_;
  Point2D left_corner_ = Point2D(0,0);
};

#endif