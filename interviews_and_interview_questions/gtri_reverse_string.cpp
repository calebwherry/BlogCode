#include <cstring>
#include <cstdio>

using namespace std;

void reverse(char* str)
{
  size_t size = strlen(str);
  char temp = ' ';

  for(int i=0; i < size/2; ++i)
  {
    temp = str[i];
    str[i] = str[size-1-i];
    str[size-1-i] = temp;
  }
}

int main()
{

  char str[] = "Hello";

  printf("String: %s\n", str);
  reverse(str);
  printf("Reversed: %s\n", str);

  return 0;
}
