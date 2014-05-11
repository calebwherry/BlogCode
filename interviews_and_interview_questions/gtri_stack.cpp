#include <iostream>

using namespace std;

void myFunc(int* a)
{
  int b = 1;

  if (a < &b)
  {
    cout << "The stack grows up!" << endl;
  }
  else
  {
    cout << "The stack grows down!" << endl;
  }

}

int main()
{

  int a = 1;

  myFunc(&a);

  return 0;
}
