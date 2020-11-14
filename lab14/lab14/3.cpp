#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, k = 0, s = 0;
	cout << "Enter n:";
	cin >> n;
	while (k <= n) {
		s = s + k;
		k++;
	}
	cout << k - 1 << '\n';
	cout << s;
	return 0;
}
