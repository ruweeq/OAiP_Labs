#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double a, c, b, ac, cb, pr;
    cout << "Enter A,C,B : ";
    cin >> a >> c >> b;

    ac = fabs(a - c);
    cb = fabs(b - c);
    pr = ac * cb;
    cout << "AC=" << ac << endl;
    cout << "BC=" << cb << endl;
    cout << "Multiplication=" << pr;

    return 0;
}
