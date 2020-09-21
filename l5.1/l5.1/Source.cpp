#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double x1, x2, y1, y2;
    cout << "Enter x1,x2: ";
    cin >> x1 >> x2;
    cout << "Enter y1,y2: ";
    cin >> y1 >> y2;
    double a = (x2 - x1) * (x2 - x1);
    double b = (y2 - y1) * (y2 - y1);
    double s = sqrt(a + b);

    cout <<"Distance=" << s << endl;
    return 0;
}
