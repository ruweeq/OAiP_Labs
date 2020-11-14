#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, k;
	cout << "Enter A<B:";
	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		k = a;
		while (k > 0) {
			cout << a << " ";
			k--;
		}
		cout << endl;
		a++;
	}

	return 0;
}
