#include <iostream>
using namespace std;

int main()
{
int x, y, z;
int small;
cin >> x;
cin >> y;
cin >> z;
small = x;

if(x >= y)
{
    small = y; 
}
if ( z <= small)
{
    small = z;
}
cout << small;
    return 0;
}
