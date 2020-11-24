#include <iostream>
using namespace std;
int Sign(double x)
{
    return x < 0 ? -1 : ((x == 0) ? 0 : 1);
}
int main()
{
    double a,b;
    cout << "Enter A, B:";
    cin >> a >> b;
    cout <<"a+b="<< Sign(a) + Sign(b);
    return 0;
}