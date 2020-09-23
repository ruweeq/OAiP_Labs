#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cout << "Enter x:";
	cin >> x;
	x -= 3;
	float y = 4 * pow(x, 6) - 7 * pow(x, 2) + 2 ;
	cout << "4*(x-3)^6-7*(x-3)^2+2=" << " " << y;
	
	return 0;
}