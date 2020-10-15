#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	 double x,y;
	 cout << "Enter the coordinates of the point x and y:";
	 cin >> x >> y;
	 if (x > 0) {
		 if (y > 0) { cout << "I"; }
		 else { cout << "IV"; }
	 }
	 if (x < 0) {
		 if (y>0){ cout << "II"; }
		 else { cout << "III"; }
	 }
	}