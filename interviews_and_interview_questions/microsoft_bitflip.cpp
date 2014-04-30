#include <bitset>
#include <iostream>

using namespace std;

int main()
{
  int a = 11;
  bitset<8> b(a);

  cout << "Before flip: value = " << a << " | bits = " << b << endl;

  // Main logic for lowest '1' bit to be flipped:
  a = (a-1) & a;

  b = bitset<8>(a);
  cout << "After flip: value = " << a << " | bits = " << b << endl;

  return 0;
}
