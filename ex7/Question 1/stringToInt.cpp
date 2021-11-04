// stringToInt.cpp
#include <string>
#include <sstream>
#include <iostream>
#include <stdexcept>

using namespace std;

int stringToInt(const string &input)
{
  stringstream instream;
  instream << input;
  int number;
  instream >> number;

  if (instream.fail())
  {
    throw invalid_argument("Invalid input");
  }

  char left;
  instream >> left;
  if (!instream.fail())
  {
    throw invalid_argument("Invalid input");
  }

  // everything went fine: returns the int
  return number;
}

int main(void)
{
  string test1 = "11";
  cout << stringToInt(test1) << endl;

  string test2 = "cc11";
  cout << stringToInt(test2) << endl;

  string test3 = "11cc";
  cout << stringToInt(test3) << endl;

  return 0;
}