#include "Rectangle.h"
#include "Point2D.h"

Rectangle::Rectangle(Point2D left_corner, float width, float height): Shape2D("rectangle") {
    left_corner_.setX(left_corner.getX());
    left_corner_.setY(left_corner.getY());
    width_ = width;
    height_ = height;
} ; 

float Rectangle::compute_area() {
    return width_ * height_;
}

