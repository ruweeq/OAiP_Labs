#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int s = 1000, k = 0;
	double p, r;
	cout << "Enter P:";
	cin >> p;
	while (s <= 1100) {
		r = p * s / 100 + s;
		s = r;
		k++;
	}
	cout << "k=" << k << endl;
	cout << "s=" << s;

	return 0;
}
