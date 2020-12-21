#include <iostream>
using namespace std;
int main() {
	int a[5], b[5], n = 5, nc = 0;
	cout << "Enter array a:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) { nc = a[i]; }
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			b[i] = a[i] + nc;
		}
		else { b[i] = a[i]; }
		cout << b[i]<<" ";
	}


	return 0;
}
