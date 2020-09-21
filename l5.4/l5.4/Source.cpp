#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double x1, x2, y1, y2;
    cout << "Enter x1,y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2,y2: ";
    cin >> x2 >> y2;
    double a = abs(x2 - x1);
    double b = abs(y1 - y2);
    double s = a * b;
    double p = (a + b) * 2;

    cout << "Perimeter = " << p << endl;
    cout << "Area of a rectangle = " << s << endl;
    return 0;
}
