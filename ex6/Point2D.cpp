#include "Point2D.h"

Point2D::Point2D() {
    x_ = 0.0f;
    y_ = 0.0f;
}

Point2D::Point2D(float x, float y) {
    x_ = x;
    y_ = y;
}

float Point2D::getX() {
    return x_;
}

float Point2D::getY() {
    return y_;
}

void Point2D::setX(float x) {
    x_ = x;
}

void Point2D::setY(float y) {
    y_ = y;
}