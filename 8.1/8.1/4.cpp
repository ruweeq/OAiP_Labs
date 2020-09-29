#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, x, y;
	cout << "Enter A:";
	cin >> a;
	x = a % 10;
	y = (a - a % 10) / 10;
	cout << x << y;
	return 0;
}
