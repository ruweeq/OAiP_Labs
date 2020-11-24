#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter N:";
	cin >> n;
	int m[10000];
	for (int i = 1; i <= n; i +=2) {
		m[i] = i;
		cout << m[i]<<endl;
	}
	return 0;
}