#include <iostream>
#include <cassert>
#include "Circle.h"
#include "Rectangle.h"
#include "Shape2D.h"

int main(void)
{
  // define circle and rectangle
  Circle c1(Point2D(29.3, 6.0), 3.0f);
  Rectangle r1(Point2D(1.0f, 2.0f), 4.0f, 5.0f);

  // tell shape type
  std::cout << "Circle: " << c1.get_name() << std::endl;
  std::cout << "Rectangle: " << r1.get_name() << std::endl;

  // test object name
  assert ( c1.get_name() == "circle" );
  assert ( r1.get_name() == "rectangle" );

  // tell shape area
  std::cout << "Circle area: " << c1.compute_area() << std::endl;
  std::cout << "Rectangle area: " << r1.compute_area() << std::endl;

  // test area
  assert ( c1.compute_area() == 27.0f );
  assert ( r1.compute_area() == 20.0f );

  return 0;
}