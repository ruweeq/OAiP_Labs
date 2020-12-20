#include <iostream>
using namespace std;
int main() {
	int  s = 0, n1 = 0, n2 = 0, a[5], n = 5;
	cout << "Enter array n=5:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i++) {

		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) { n1 = i; n2 = j; }
		}


	}
	cout << min(n1, n2) << endl << max(n1, n2);
	return 0;
}
