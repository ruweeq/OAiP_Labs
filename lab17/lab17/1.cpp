#include <iostream>
using namespace std;
int main() {
	int k, l,m[10], n = 10;
	double s = 0;
	cout << "Enter k and l  (k<l<n) :";
	cin >> k >> l;
	cout << "Enter array n=10:";
	for (int i = 0; i < 10; i++) {
		cin >> m[i];
	}
	for (int i =k; i < l+1; i++) {
		s += m[i];
	}
	cout << s / (l - k + 1);
	return 0;
}