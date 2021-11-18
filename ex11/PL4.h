#include <bits/stdc++.h>
using namespace std;

namespace PL4
{
  template <class FwdIt>
  void sort(FwdIt begin, FwdIt end)
  {
    // bubble sort
    for (FwdIt i = begin; i != end; ++i)
    {
      for (FwdIt j = begin; j != end; ++j)
      {
        if (*j > *i)
        {
          iter_swap(i, j);
        }
      }
    }
  }
}