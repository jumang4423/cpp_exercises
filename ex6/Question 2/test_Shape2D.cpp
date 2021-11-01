#include <vector>
#include <iostream>
#include "Polygon.h"
#include "../Question 1/Point2D.h"

// Test the Polygon main function
int main(void) {
    // square
    std::vector<Point2D> points;
    points.push_back(Point2D(0.0f, 0.0f));
    points.push_back(Point2D(1.0f, 0.0f));
    points.push_back(Point2D(1.0f, 1.0f));
    points.push_back(Point2D(0.0f, 1.0f));
    Polygon square(points);
    std::cout << "square area: "<< square.get_area() << std::endl;
    assert ( square.get_area() == 1.0f );

    // triangle
    std::vector<Point2D> points2;
    points2.push_back(Point2D(0.0f, 0.0f));
    points2.push_back(Point2D(1.0f, 0.0f));
    points2.push_back(Point2D(0.5f, 1.0f));
    Polygon triangle(points2);
    std::cout << "triangle area: "<< triangle.get_area() << std::endl;
    assert ( triangle.get_area() == 0.5f );

    // line ( which is zero area )
    std::vector<Point2D> points3;
    points3.push_back(Point2D(0.0f, 0.0f));
    points3.push_back(Point2D(1.0f, 1.0f));
    Polygon line(points3);
    std::cout << "line area: "<< line.get_area() << std::endl;
    assert ( line.get_area() == 0.0f );

    return 0;
}