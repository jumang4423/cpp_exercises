#include <bits/stdc++.h>
#include "evaluate.h"
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
    cout << "Output: " << evaluate(input) << endl;
  }

  return 0;
}