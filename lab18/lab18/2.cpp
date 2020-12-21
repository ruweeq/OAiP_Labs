#include <iostream>
using namespace std;
int main() {
	
	double b[6],a[6], n = 6, nc = 0;
	cout << "Enter array a:";
	for (int i = 1; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		nc += a[i];
		b[i] = nc / i;
		cout << " b[" << i << "]=" << b[i]<<" " ;
		
	}
	return 0;
}
