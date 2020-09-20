#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double a, b, x, y;
    cin >> a >> b;
    x = fabs(a);
    y = fabs(b);
    int s = x + y;
    cout << s << endl;
    s = x - y;
    cout << s << endl;
    s = x * y;
    cout << s << endl;
    return 0;
}
