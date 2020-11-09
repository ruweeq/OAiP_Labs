#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double x = 1;
	cout << "Enter N: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		x = x * (i + 10) / 10;
	}
	cout << x;
	return 0;
}
