#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a;
    cout << "Enter A:";
    cin >> a;

    int x = a / 100;
    int z = a % 10;
    int y = a / 10 % 10;
    if ((x < y) && (y < z)) { cout << "true"; }
    else if ((x > y) && (y > z)) { cout << "true"; }
    else { cout << "false"; }
    return 0;
}
