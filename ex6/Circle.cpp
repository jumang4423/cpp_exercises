#include "Point2D.h"
#include "Circle.h"
#include "Shape2D.h"
#define PI_DEF 3.0
#include <iostream>

Circle::Circle(Point2D left_corner, float radius): Shape2D("circle") {
    left_corner_.setX(left_corner.getX());
    left_corner_.setY(left_corner.getY());
    radius_ = radius;
} ;

float Circle::compute_area() {
    return PI_DEF * radius_ * radius_;
} ;