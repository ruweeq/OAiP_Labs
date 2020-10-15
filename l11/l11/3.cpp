#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	 double x,y,x1,y1,x2,y2,a,b,z,z1,z2;
	 cout << "Enter the coordinates of the point A:";
	 cin >>x>>y>>z;
	 cout << "Enter the coordinates of the point B:";
	 cin >> x1 >> y1 >> z1;
	 cout << "Enter the coordinates of the point C:";
	 cin >> x2 >> y2 >> z2;
	 a = sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y) + (z1 - z) * (z1 - z));
	 b = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y) + (z2 - z) * (z2 - z));
	 if (a == b) { cout << "The points are at the same distance = " << a; }
	 else if (a > b) { cout << "The point B closer to the point A than C. Distance between A and B = " << a; }
	 else { cout << "The point C closer to the point A than B. Distance between A and C = " << b; }
	 
	}
