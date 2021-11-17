#include <bits/stdc++.h>
#include "evaluateFP.h"
using namespace std;

signed main(void)
{

  while (true)
  {
    string input;
    cout << "Input: ";
    getline(cin, input);
    if (input == "")
    {
      break;
    }
    cout << "Output: " << evaluateFP(input) << endl;
  }

  return 0;
}