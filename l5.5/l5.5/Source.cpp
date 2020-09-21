#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double x1, x2, y1, y2,x3,y3;
    cout << "Enter x1,y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2,y2: ";
    cin >> x2 >> y2;
    cout << "Enter x3,y3: ";
    cin >> x3 >> y3;

    double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Perimeter = " << a+b+c << endl;
    cout << "Area of a triangle = " << s << endl;
    return 0;
}
