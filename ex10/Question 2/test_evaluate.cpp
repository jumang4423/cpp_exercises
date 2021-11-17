#include <bits/stdc++.h>
#include "evaluate.h"
using namespace std;

signed main(void)
{
  assert(evaluate("3 + 5 * 6 - 7 * ( 8 + 5 )") == -58.0);
  assert(evaluate("25.0 * 12.0 / 5.0 - 8.0") == 52.0);
  return 0;
}