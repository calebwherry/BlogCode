#include <iostream>
#include <vector>

using namespace std;

template <typename S, typename T>
T find(S data, T start, T end)
{

  while (start != end)
  {

    if (*start == data)
    {
      return start;
    }

    start++;

  }

  // Return end if not found:
  return end;

};

int main()
{

  // Data to find:
  int findMe = 6;

  vector<int> myData;
  
  for (int i=0; i<10; ++i)
  {
    myData.push_back(i);
  }

  auto iter = find(findMe, myData.begin(), myData.end());

  if (iter == myData.end())
  {
    cout << "Data not found!" << endl;
  }
  else
  {
    cout << "Data found!" << endl;
  }

  return 0;

}
