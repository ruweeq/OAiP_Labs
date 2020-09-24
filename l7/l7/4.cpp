#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double v1, v2, s, t;
	cout << "Enter v1 and v2 :";
	cin >> v1 >> v2;
	cout << "Enter time:";
	cin >> t;
	s = abs(v1 + v2) * t;

	cout << "Distance = " << s;

	return 0;
}
