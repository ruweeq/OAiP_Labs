#include <iostream>
using namespace std;

int main() {
	int n,a,d;
	cout << "Enter A,d,n:";
	cin >> a>>d>>n;
	int m[10000];
	for (int i = 0; i < n; i ++) {
		m[i] = a*d;
		cout << m[i] << endl;
		a = m[i];
	}
	return 0;
}