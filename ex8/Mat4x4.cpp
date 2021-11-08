#include "Mat4x4.h"
#include <ostream>
#include <cmath>
#include <iostream>

// Constructors:: Mat4x4()
Mat4x4::Mat4x4()
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      m_[i][j] = 1.0;
    }
  }
}

// Constructors:: Mat4x4(const Mat4x4 &m);
Mat4x4::Mat4x4(const Mat4x4 &m)
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      m_[i][j] = m.m_[i][j];
    }
  }
}

// Constructors:: Mat4x4(double a[4][4]);
Mat4x4::Mat4x4(double a[4][4])
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      m_[i][j] = a[i][j];
    }
  }
}

// &operator+=(const Mat4x4 &m)
Mat4x4 &Mat4x4::operator+=(const Mat4x4 &m)
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      m_[i][j] += m.m_[i][j];
    }
  }
  return *this;
}

// &operator-=(const Mat4x4 &m)
Mat4x4 &Mat4x4::operator-=(const Mat4x4 &m)
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      m_[i][j] -= m.m_[i][j];
    }
  }
  return *this;
}

// &operator*=(const Mat4x4 &m)
Mat4x4 &Mat4x4::operator*=(const Mat4x4 &m)
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      m_[i][j] *= m.m_[i][j];
    }
  }
  return *this;
}

// &operator+(const Mat4x4 &m)
Mat4x4 Mat4x4::operator+(const Mat4x4 &m)
{
  Mat4x4 temp(m_);
  temp += m;
  return temp;
}

// &operator-(const Mat4x4 &m)
Mat4x4 Mat4x4::operator-(const Mat4x4 &m)
{
  Mat4x4 temp(m_);
  temp -= m;
  return temp;
}

// &operator*(const Mat4x4 &m);
Mat4x4 Mat4x4::operator*(const Mat4x4 &m)
{
  Mat4x4 temp(m_);
  temp *= m;
  return temp;
}

// &operator-()
Mat4x4 &Mat4x4::operator-()
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      m_[i][j] = -m_[i][j];
    }
  }
  return *this;
}

// access the i,j
double &Mat4x4::operator()(int i, int j)
{
  return m_[i][j];
}

// operator==(const Mat4x4 &m)
bool Mat4x4::operator==(const Mat4x4 &m)
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (m_[i][j] != m.m_[i][j])
      {
        return false;
      }
    }
  }
  return true;
}

// &operator=(const Mat4x4 &m)
Mat4x4 &Mat4x4::operator=(const Mat4x4 &m)
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      m_[i][j] = m.m_[i][j];
    }
  }
  return *this;
}

// <<
std::ostream &operator<<(std::ostream &os, const Mat4x4 &m)
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      os << m.m_[i][j] << " ";
    }
    os << std::endl;
  }
  return os;
}