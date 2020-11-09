#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double x;
	cout << "Enter how much 1 kg costs = ";
	cin >> x;
	for (double i = 0.1; i < 1; i += 0.1)
	{
		cout << i << " " << "kg =" << x * i << '\n';
	}
	return 0;
}
