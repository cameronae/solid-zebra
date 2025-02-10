#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int num1;
   int num2;
   int num3;
   int num4;
   double product;
   double avg;
// hint example of asking for first input. 
cout << "Enter first number ";
    cin >> num1;
cout << "Enter second number ";
    cin >> num2;
cout << "Enter third number ";
    cin >> num3;
cout << "Enter fourth number \n";
    cin >> num4;
    product = static_cast<double>(num1)*num2*num3*num4;
    
    avg = (num1+num2+num3+num4) / 4;
    cout << fixed << setprecision(0) <<  "Part 1 Product = " << (num1)*num2*num3*num4 << "\n"
    << "Part 1 Average = " << avg << endl << endl;
    
    cout << fixed << setprecision(3) << "Part 2 Product = " << product << "\n"
    << "Part 2 Average = " << (num1+num2+num3+num4) / 4.0 << endl;
   return 0;
}