#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape2D.h"
#include "Point2D.h"

class Rectangle : public Shape2D {
public:
  Rectangle(Point2D left_corner, float width, float height) ;
  float compute_area();
private:
  float width_;
  float height_;
  Point2D left_corner_ = Point2D(0,0);
};

#endif