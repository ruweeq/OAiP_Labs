#include <iostream>
using namespace std;

int main() {

	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(a) / sizeof(a[0]) - 1;

	for (int i = 0; i < n; i += 2) {
		cout << a[i] << endl;
	}
	for (int i = n; i > 0; i -=2) {
		cout << a[i] << endl;
	}
	return 0;

}