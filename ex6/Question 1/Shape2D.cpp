#include <string>
#include <iostream>
#include "Shape2D.h"

Shape2D::Shape2D()
{
  name_ = "";
}

Shape2D::Shape2D(std::string name)
{
  name_ = name;
}

Shape2D::Shape2D(const Shape2D& src)
{
  name_ = src.name_;
}

Shape2D::~Shape2D()
{
  // nothing to do
}

float Shape2D::compute_area() const {
  return 0.0f;
}

std::string Shape2D::get_name() const {
  return name_;
}