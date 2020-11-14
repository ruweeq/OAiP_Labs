#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, f = 0, k = 2, x = 0, y = 1;
	cout << "Enter N:";
	cin >> n;
	while (f != n) {
		f = x + y;
		x = y;
		y = f;
		k++;
	}
	cout << "k=" << k;
	return 0;
}
