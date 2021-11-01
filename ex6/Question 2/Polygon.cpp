#include <vector>
#include "Polygon.h"
#include "../Question 1/Point2D.h"

// Constructors
Polygon::Polygon()
{
  std::vector<Point2D> points;
  points_ = points;
}
Polygon::Polygon(std::vector<Point2D> points)
{
  points_ = points;
}

// Getters which return area and perimeter
float Polygon::get_area()
{
  auto float area = 0;
  for (int i = 0; i < points_.size(); i++)
  {
    int j = (i + 1) % points_.size();
    area += points_[i].getX() * points_[j].getY();
    area -= points_[i].getY() * points_[j].getX();
  }
  area /= 2;
  return area;
}