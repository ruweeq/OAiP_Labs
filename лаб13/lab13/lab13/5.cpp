#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double a, x = 1;
	cout << "Enter N and A: ";
	cin >> n >> a;
	
	for (int i = 1; i <= n; i+=2)
	{
		x -= pow(a, i);
		for (int j = 2; j <i; j+=2)
		{
			x += pow(a, j);
	}
}
	cout << endl << "x=" << x;
	return 0;
}