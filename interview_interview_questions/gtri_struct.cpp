#include <stdint.h>
#include <stdio.h>

using namespace std;

struct MyStruct
{
  uint16_t a;
  uint8_t b;
  uint64_t c;
};

int main()
{
  printf("Number of bytes: %u\n", sizeof(MyStruct));

  return 0;
}
