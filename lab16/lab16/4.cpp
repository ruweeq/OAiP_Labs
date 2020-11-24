#include <iostream>
using namespace std;

int main() {

	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(a) / sizeof(a[0])-1;
	for (int i = 0; i < n/2; i++) {
		cout << a[i] << endl;
		cout << a[n-i] << endl;
	}
	return 0;
	
}