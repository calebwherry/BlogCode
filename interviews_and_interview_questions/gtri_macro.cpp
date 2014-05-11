#include <iostream>

// Original function:
#define MULT(a,b) a*b

// Modified and correct for most cases:
#define MULT2(a,b) (a)*(b)

// Modified again and technically the most correct:
#define MULT3(a,b) ((a)*(b))

using namespace std;

int main()
{

  cout << "MULT(3, 4) = " << MULT(3,4) << " - Correct!" << endl;
  cout << "MULT(3+4, 2) = " << MULT(3+4,2) << " - Incorrect" << endl;
  cout << "MULT2(3+4, 2) = " << MULT2(3+4,2) << " - Correct!" << endl;

  return 0;

}
