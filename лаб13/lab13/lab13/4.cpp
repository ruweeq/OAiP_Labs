#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double a, x = 0;
	cout << "Enter N and A: ";
	cin >> n>>a;
	for (int i = 0; i <= n; i ++)
	{
		x += pow(a,i);
	}
	cout << endl << "summa=" << x;
	return 0;
}