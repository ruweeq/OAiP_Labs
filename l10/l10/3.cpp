#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a;
    cout << "Enter A:";
    cin >> a;
    if ((a / 10 != 0) && (a % 2 == 0)) { cout << "true"; }
    else cout << "false";
    return 0;
}
