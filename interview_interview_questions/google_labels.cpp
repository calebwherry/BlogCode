#include <iostream>
 
using namespace std;
 
int main()
{
 
  int maxNum = 100,   // Maximum number of headings to process
      startVal = 65,  // ASCII value for A, where we start
      groupCount = 0; // Grouping count for headings
 
  for (int i=0; i<maxNum; ++i)
  {
 
    // Increment group count if multiple of 26:
    if ( ((i%26) == 0) ) groupCount++;
 
    // Print each letter per group count:
    for(int j=0; j<groupCount; ++j)
    {   
      cout << static_cast<char>( (i%26) + startVal);
    }   
 
    cout << endl;
 
  }
 
  return 0;
}
