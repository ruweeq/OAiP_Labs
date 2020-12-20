#include <iostream>
using namespace std;
int main() {
	int  m[5], n = 5,min;
	cout << "Enter array n=5:";
	for (int i = 0; i < n; i++) {
		cin >> m[i];
	}
	min = m[0];
	for (int i = 0; i < n ; i+=2) {
		if (m[i] < min) { min = m[i]; }
	}
	cout <<"min="<< min;
	return 0;
}