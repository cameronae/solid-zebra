#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   int check;
   cin >> highwayNumber;

   check = highwayNumber % 2;

   if (check = 0)
   {
    cout << "I- " << highwayNumber << " goes east/west\n";
   }
   else if (check = 1)
   {
    cout << "I- " << highwayNumber << " goes north/south\n";
   }

   return 0;
}