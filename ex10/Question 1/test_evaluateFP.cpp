#include <bits/stdc++.h>
#include "evaluateFP.h"
using namespace std;

signed main(void)
{
  assert(evaluateFP("( 1 + ( ( 2 + 3 ) * ( 4 * 5 ) ) )") == 101.0);
  assert(evaluateFP("( ( ( 2.0 * ( 3.0 - 1.0 ) ) - 5.0 ) * 3.0 )") == -3.0);
  return 0;
}