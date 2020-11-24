#include <iostream>
using namespace std;

int main() {
	int n, a, b;
	cout << "Enter A,B,n:";
	cin >> a >> b >> n;
	int m[10000];
	m[1] = a; 
	m[2] = b;
	m[3] = a+b;
	a = m[3];
	for (int i = 4; i < n; i++) {
		m[i] = 2*a;
		a = m[i];
	}
	for (int i = 1; i < n; i++) {
		cout << m[i] << endl;
	}
	return 0;
}