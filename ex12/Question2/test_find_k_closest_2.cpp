#include <bits/stdc++.h>
using namespace std;
#include "../Question1/Point.h"

auto greater_pointer = [](const Point a, const Point b)
{
  return a.getOriginLen() > b.getOriginLen();
};

vector<Point> find_k_closest_2(
    int k,
    priority_queue<
        Point,
        vector<Point>,
        decltype(greater_pointer)>
        que)
{
  vector<Point> res;
  for (int i = 0; i < k; i++)
  {
    res.push_back(que.top());
    que.pop();
  }
  return res;
}

signed main(void)
{
  //test_case_1///////////////////////////////////////////////////////////////
  priority_queue<
      Point,
      vector<Point>,
      decltype(greater_pointer)>
      que1(greater_pointer);
  que1.push(Point(10, 11, 12));
  que1.push(Point(1, 2, 3));
  que1.push(Point(7, 8, 9));
  que1.push(Point(13, 14, 15));
  que1.push(Point(4, 5, 6));

  vector<Point> que1_res = find_k_closest_2(2, que1);
  assert(que1_res[0].x == 1);
  assert(que1_res[0].y == 2);
  assert(que1_res[0].z == 3);
  assert(que1_res[1].x == 4);
  assert(que1_res[1].y == 5);
  assert(que1_res[1].z == 6);

  //test_case_2///////////////////////////////////////////////////////////////
  priority_queue<
      Point,
      vector<Point>,
      decltype(greater_pointer)>
      que2(greater_pointer);
  que2.push(Point(0, 0, 1));
  que2.push(Point(0, 0, 1));
  que2.push(Point(0, 0, 1));
  que2.push(Point(0, 0, 2));
  que2.push(Point(0, 0, 2));
  que2.push(Point(0, 0, 2));

  vector<Point> que2_res = find_k_closest_2(3, que2);
  assert(que2_res[0].x == 0);
  assert(que2_res[0].y == 0);
  assert(que2_res[0].z == 1);
  assert(que2_res[1].x == 0);
  assert(que2_res[1].y == 0);
  assert(que2_res[1].z == 1);
  assert(que2_res[2].x == 0);
  assert(que2_res[2].y == 0);
  assert(que2_res[2].z == 1);

  return 0;
}
