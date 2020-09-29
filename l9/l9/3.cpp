#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int k, n;
    cout << "Enter a number of the day:";
    cin >> n;
    cout << "Enter a number of the 1st January:";
    cin >> k;
    cout << n % k;
    return 0;
}
