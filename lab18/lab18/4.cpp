#include <iostream>
using namespace std;
int main() {
	int a[10],n=10,min=9999,max=-9999,k1=0,k2=0;
	cout << "Enter array a:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] < min) { min = a[i]; k1 = i; }
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > max) { max = a[i]; k2 = i; }

	}
	if (k1 > k2) {
		for (int i = k2+1; i < k1; i++) {
			a[i] = 0; 
			cout << a[i] << " ";
		}
	}
	else if (k2 > k1) {
		for (int i = k1+1; i < k2; i++) {
				a[i] = 0; 
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	
	return 0;
}
