#include <stdint.h>
#include <iostream>

using namespace std;

struct MyStruct
{
  uint16_t a;
  uint8_t b;
  uint64_t c;
};

int main()
{
  cout << "Number of bytes: " << sizeof(MyStruct) << endl;

  return 0;
}
