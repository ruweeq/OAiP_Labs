#include <iostream>
using namespace std;
int main() {
	int a[5], b[5], n = 5, k = 0;
	cout << "Enter array a:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Enter array b:";
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		k = a[i];
		a[i] = b[i];
		b[i] = k;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}

	return 0;
}
