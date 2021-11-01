// Shape2D.h

#ifndef SHAPE_2D_H
#define SHAPE_2D_H
#include <iostream>

class Shape2D {
public:
  Shape2D();
  Shape2D(std::string name);
  Shape2D(const Shape2D& src);
  virtual ~Shape2D();
  virtual float compute_area() const;
  virtual std::string get_name() const;
private:
  std::string name_;
} ;
#endif