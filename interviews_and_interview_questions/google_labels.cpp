#include <iostream>
 
using namespace std;
 
int main()
{

  // Constants:
  const int BASE = 26,            // Base that we are computing labels for.
            ASCII_START_VAL = 65, // ASCII value of 'A', where we start.
            MAX_NUM = 100;        // Maximum number of headings to process.

  // Grouping count for headings:
  int groupCount = 0;
 
  // Loop through and print out each label, one per line:
  for (int i=0; i<MAX_NUM; ++i)
  {
 
    // Increment group count if multiple of BASE:
    if ( ((i%BASE) == 0) ) groupCount++;
 
    // Print each letter per group count:
    for(int j=0; j<groupCount; ++j)
    {   
      cout << static_cast<char>( (i%BASE) + ASCII_START_VAL);
    }   
 
    cout << endl;
 
  }
 
  return 0;
}
