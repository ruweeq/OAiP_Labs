#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cout << "Enter x:";
	cin >> x;
	float y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "3*x^6-6*x^2-7=" << " " << y;

	return 0;
}