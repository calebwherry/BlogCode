#include <iostream>

using namespace std;

int main()
{
  int a = 5,
      b = 10;

  cout << "Before swap: a=" << a << " b=" << b << endl;

  // Using exclusive-or trick:
  a ^= b;
  b ^= a;
  a ^= b;

  cout << "After swap : a=" << a << " b=" << b << endl;

  return 0;
}
