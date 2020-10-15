#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c, m;
	cout << "Enter A,B,C:";
	cin >> a >> b >> c;
	m = min(a, min(b, c));
	cout << a + b + c - m;
}
