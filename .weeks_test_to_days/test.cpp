// This program to convert days to weeks is still under testing:
#include <iostream>
using namespace std;

struct ElapsedTime {
   int weeksVal;
   int daysVal;
};

ElapsedTime ConvertToWeeksAndDays(int totalDays) {
   ElapsedTime tempVal;
   tempVal.weeksVal = totalDays / 7;
   tempVal.daysVal = totalDays - (tempVal.weeksVal * 7);
   
   return tempVal;
}

int main() {
   ElapsedTime elapsedDays;
   int totalDays;
   cout << "Enter the number of days:\n";
   cin >> totalDays;

   elapsedDays = ConvertToWeeksAndDays(totalDays);

   cout << elapsedDays.weeksVal << " weeks and " << elapsedDays.daysVal << " days" << endl;

   return 0;
}