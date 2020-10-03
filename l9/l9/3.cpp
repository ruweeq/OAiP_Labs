#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int k, n;
    cout << "Enter a number of the day:";
    cin >>k ;
    cout << "Enter a number of the 1st January:";
    cin >> n;
    int x = (k + n) % 7;
    if (x - 1 == 0) { cout << 7; }
    else { cout << x - 1; }
    return 0;
}
