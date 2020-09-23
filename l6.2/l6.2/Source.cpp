#include <iostream>
using namespace std;
int main()
{
	int a, b,c;
	cout << "Enter a,b,c :";
	cin >> a >> b>>c;
	int x = a;
	a = c;
	c = b;
	b = x;
	
	
	cout << "a=" << a << " " << "b=" << b<<" "<<"c="<<c;
	return 0;
}