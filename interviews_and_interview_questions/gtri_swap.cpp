#include <stdio.h>

int main()
{
  int a = 5,
      b = 10;

  printf("Before swap: a=%d, b=%d\n", a, b);

  // Using exclusive-or trick:
  a ^= b;
  b ^= a;
  a ^= b;

  printf("After swap : a=%d, b=%d\n", a, b);

  return 0;
}
