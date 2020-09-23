#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter a,b,c :";
	cin >> a >> b >> c;
	int x = c;
	c = a;
	a = b;
	b = x;
	cout << "a=" << a << " " << "b=" << b << " " << "c=" << c;
	return 0;
}