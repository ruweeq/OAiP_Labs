#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter A,B,C:";
    cin >> a>>b>>c;
    if ((a<b+c)&&(b<a+c)&&(c<a+b)) { cout << "true"; }
    else { cout << "false"; }
    return 0;
}