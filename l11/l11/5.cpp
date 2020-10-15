#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int x;
	cout << "Enter x:";
	cin >> x;
	string  tri = "trehznachnoe";
	string dva = "dvuznachnoe";
	string od = "odnoznachnoe";
	string pol = "polozhitelnoe";
	string otr = "otricatelnoe";
	string ch = "chetnoe";
	string nech = "nechetnoe";

	if (x > 0) {
		if (x % 2 == 0) {
			if (x >= 100) { cout << pol << " " << ch << " " << tri; }
			else if ((x < 100) and (x >= 10)) { cout << pol << " " << ch << " " << dva; }
			else if (x < 10) { cout << pol << " " << ch << " " << od; }
		}
		else if (x > 100) { cout << pol << " " << nech << " " << tri; }
		else if ((x <= 100) and (x > 10)) { cout << pol << " " << nech << " " << dva; }
		else if (x < 10) { cout << pol << " " << nech << " " << od; }
	}	
	else if (x % 2 == 0) {
		if (x <= -100) { cout << otr << " " << ch << " " << tri; }
	else if ((x > -100) and (x <= -10)) { cout << otr << " " << ch << " " << dva; }
	else if (x > -10) { cout << otr << " " << ch << " " << od; }
}
		else if (x < -100) { cout << otr << " " << nech << " " << tri; }
		else if ((x > -100) and (x <= -10)) { cout << otr << " " << nech << " " << dva; }
		else if (x >  -10) { cout << otr << " " << nech << " " << od; }
			return 0;
		
	}
