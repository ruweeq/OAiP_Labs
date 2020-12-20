#include <iostream>
using namespace std;
int main() {
	int  i=2,d,a[5], n = 5;
	bool flag=true;
	cout << "Enter array n=5:";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	d = a[1] - a[0];

	while ((i < n)&&(flag)) {
		if ((a[i + 1] - a[i]) != d) {
			flag = false; }
			i++;
	}
	if (flag=true) { cout << "d=" << d; }
	else cout << 0;
	return 0;
}
