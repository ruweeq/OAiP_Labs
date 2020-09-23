#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	cout << "Enter a:";
	cin >> a;
	int x = a * a;
	int z = a * x;
	z = z * x;
	x = z * z;
	z = x * z;
	cout << "a^15=" << " " << z;
	return 0;
}