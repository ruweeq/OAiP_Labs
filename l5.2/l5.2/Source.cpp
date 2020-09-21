#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double a, b, c, ac, bc, sum;
    cout << "Enter A,B,C : ";
    cin >> a >> b >> c;
    ac = fabs(a - c);
    bc = fabs(b - c);
    sum = ac + bc;
    cout << "AC=" << ac << endl;
    cout << "BC=" << bc << endl;
    cout << "sum=" << sum;

    return 0;
}
