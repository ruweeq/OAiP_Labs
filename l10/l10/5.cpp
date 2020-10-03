#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter N:";
    cin >> n;
    int x = n / 1000;
    int y = n % 10;
    int a = n / 100 % 10;
    int b = n / 10 % 10;
    if ((x == y) && (a == b)) { cout << "true"; }
    else { cout << "false"; }
    return 0;
}
