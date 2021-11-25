#include <bits/stdc++.h>
using namespace std;

double compute_median(vector<double> numbers)
{
  sort(numbers.begin(), numbers.end());
  int n = numbers.size();
  if (n % 2 == 0)
  {
    return (numbers[n / 2 - 1] + numbers[n / 2]) / 2;
  }
  else
  {
    return numbers[n / 2];
  }
}

vector<double> compute_k_closest(vector<double> numbers, int k)
{
  double median = compute_median(numbers);
  // detect the k closest numbers to the median using nth_element
  nth_element(numbers.begin(), numbers.begin() + k, numbers.end(),
              [median](double a, double b)
              { return abs(a - median) < abs(b - median); });
  return vector<double>(numbers.begin(), numbers.begin() + k);
}

signed main(void)
{
  // check if compute_k_closest works using assert
  // Case1
  vector<double> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<double> k_closest = compute_k_closest(numbers, 3);
  assert(k_closest[0] == 6);
  assert(k_closest[1] == 5);
  assert(k_closest[2] == 4);

  // Case2
  numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  k_closest = compute_k_closest(numbers, 5);
  assert(k_closest[0] == 8);
  assert(k_closest[1] == 7);
  assert(k_closest[2] == 6);
  assert(k_closest[3] == 4);
  assert(k_closest[4] == 5);

  // Case3
  numbers = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  k_closest = compute_k_closest(numbers, 3);
  assert(k_closest[0] == 1);

  return 0;
}