#include <iostream>
#include <math.h>

using namespace std;

int main()
{

  // Constants for Time:
  const int HOUR = 12,
            MINUTE = 30;

  // Degree variables:
  double hourDegrees = 0.0,
         minuteDegrees = 0.0,
         totalDegrees = 0.0;

  // Calculations:
  hourDegrees = 0.5 * (60*HOUR + MINUTE);
  minuteDegrees = 6*MINUTE;
  totalDegrees = fabs(hourDegrees - minuteDegrees);
  totalDegrees = fmin(totalDegrees, 360-totalDegrees);

  // Display result:
  cout << "Time - " << HOUR << ":" << MINUTE << endl;
  cout << "Degrees between hands: " << totalDegrees << endl;

  return 0;

}
