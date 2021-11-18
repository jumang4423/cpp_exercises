#include "PL4.h"
#include <bits/stdc++.h>
using namespace std;

void showArray(forward_list<int> array)
{
  for (const auto &i : array) {
    cout << i << " ";
  }

  cout << endl;

}

signed main(void)
{
  // test array
  forward_list<int> v = {423, 12, 999, 1, 4, 9, 73, 52, 44};
  showArray(v);
  // sort
  PL4::sort(v.begin(), v.end());
  showArray(v);
  return 0;
}