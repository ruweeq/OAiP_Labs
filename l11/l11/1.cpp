#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter A and B:";
    cin >> a >> b;
    if (a == b) { cout << 0 << 0; }
    else if (a > b) { cout << a << " " << a; }
    else { cout << b << " " << b; }
    return 0;
}
