#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
  int i = 0, j = str.size() - 1;

  // upper and lower case
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  // remove all non-alphanumeric characters
  str.erase(remove_if(str.begin(), str.end(), ::ispunct), str.end());
  // remove all spaces
  str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());

  string str2 = str;
  // reverse string
  reverse_copy(str.begin(), str.end(), str2.begin());

  if (str == str2)
    return true;
  else
    return false;
}

int main(void)
{
  assert(isPalindrome("aa") == true);
  assert(isPalindrome("aba") == true);
  assert(isPalindrome("aaccaa") == true);
  assert(isPalindrome("aacaa") == true);
  assert(isPalindrome("Don't nod") == true);
  assert(isPalindrome("This is not Palindrome") == false);
}