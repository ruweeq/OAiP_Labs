#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double a2, a1, b1, b2, c1, c2, x, y;
	cout << "Enter A1,B1,C1:";
	cin >> a1 >> b1 >> c1;
	cout << "Enter A2,B2,C2:";
	cin >> a2 >> b2 >> c2;
	y = (c2 * a1 - a2 * c1) / (b2 * a1 - a2 * b1);
	x = (c1 - b1 * y) / a1;
	cout << "X = " << x << " " << "Y = " << y;
	return 0;
}
