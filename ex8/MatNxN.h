// MatNxN.h
#include <string>
#include <iostream>
#ifndef MATND_H
#define MATND_H

// templates
template <typename T, int N>
class MatNxN
{
public:
  MatNxN()
  {
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        if (i == j)
        {
          m_[i][j] = 1.0;
        }
        else
        {
          m_[i][j] = 0.0;
        }
      }
    }
  };
  MatNxN(const MatNxN &m)
  {
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        m_[i][j] = m.m_[i][j];
      }
    }
  };
  MatNxN(T a[N][N])
  {
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        m_[i][j] = a[i][j];
      }
    }
  };
  // =?
  MatNxN operator+=(const MatNxN &m)
  {
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        m_[i][j] += m.m_[i][j];
      }
    }
    return *this;
  };
  MatNxN operator-=(const MatNxN &m)
  {
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        m_[i][j] -= m.m_[i][j];
      }
    }
    return *this;
  };
  MatNxN operator*=(const MatNxN &m)
  {
    double mat_tmp[4][4];
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        double res = 0.0;
        for (int k = 0; k < 4; k++)
        {
          res += m_[i][k] * m.m_[k][j];
        }
        mat_tmp[i][j] = res;
      }
    }

    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        m_[i][j] = mat_tmp[i][j];
      }
    }
    return *this;
  };
  // ?
  MatNxN operator+(const MatNxN &m)
  {
    MatNxN temp(m_);
    temp += m;
    return temp;
  };
  MatNxN operator-(const MatNxN &m)
  {
    MatNxN temp(m_);
    temp -= m;
    return temp;
  };
  MatNxN operator*(const MatNxN &m)
  {
    MatNxN temp(m_);
    temp *= m;
    return temp;
  };
  // unary minus
  MatNxN &operator-()
  {
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        m_[i][j] = -m_[i][j];
      }
    }
    return *this;
  };
  // access the i,j
  T &operator()(int i, int j)
  {
    return m_[i][j];
  };
  // ==
  bool operator==(const MatNxN &m)
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
  };
  // =
  MatNxN &operator=(const MatNxN &m)
  {
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        m_[i][j] = m.m_[i][j];
      }
    }
    return *this;
  };
  // <<
  friend std::ostream &operator<<(std::ostream &os, const MatNxN &m)
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
  };

private:
  T m_[N][N];
};

#endif
