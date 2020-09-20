#include <iostream>

using namespace std;

int main()
{
    int x, y, x2, y2;
    cin >> x2 >> y2;
    x = x2 * x2;
    y = y2 * y2;
    int s = x + y;
    cout << s << endl;
    s = x - y;
    cout << s << endl;
    s = x * y;
    cout << s << endl;
    return 0;
}
