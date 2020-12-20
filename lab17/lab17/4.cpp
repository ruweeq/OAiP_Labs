#include <iostream>
using namespace std;
int main() {
	int  a[5], n = 5,max;
	cout << "Enter array n=5:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	max = a[0];
	for (int i = 1; i < n ; i++) {
		if ((a[i] > a[i - 1]) && (a[i] > a[i + 1])) {
			max = i;
	}
	}
	cout << "max i =" << max;
	return 0;
}
