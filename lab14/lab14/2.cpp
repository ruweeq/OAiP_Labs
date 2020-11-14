#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter A>B:";
	cin >> a >> b;
	while (a > 1) {
		a -= b;
	}
	if (a < 0) { cout << a + b; }
	else cout << a;

	return 0;
}
