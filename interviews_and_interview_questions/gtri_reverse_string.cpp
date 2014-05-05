#include <cstring>
#include <iostream>

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

  cout << "String: " << str << endl;
  reverse(str);
  cout << "Reversed: " << str << endl;

  return 0;
}
