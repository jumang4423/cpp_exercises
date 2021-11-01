#ifndef POINT_2D_H
#define POINT_2D_H

class Point2D {
public:
  Point2D();
  Point2D(float, float);
  float getX() const;
  float getY() const;
  void setX(float);
  void setY(float);
private:
  float x_;
  float y_;
} ;

#endif