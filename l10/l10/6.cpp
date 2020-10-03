#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter A,B,C:";
    cin >> a >> b >> c;
    if (a * a + b * b == c * c) { cout << "true"; }
    else if (a * a + c * c == b * b) { cout << "true"; }
    else if (b * b + c * c == a * a) { cout << "true"; }
    else { cout << "false"; }
    return 0;
}
