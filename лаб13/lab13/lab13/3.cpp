#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, x = 0;
	cout << "Enter N: ";
	cin >> n;
	for (int i = 1; i <= 2*n-1; i+=2)
	{
		x += i;
		cout << x << " ";
	}
	cout << endl<<"N^2="<<x;
	return 0;
}