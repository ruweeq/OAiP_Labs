#include <iostream>
using namespace std;

void RingS()
{
    double x,y, s, p = 3.14;
 
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter R1, R2:";
        cin >> x >> y;
         s = p * (x * x - y * y);
        cout << " S= " << s << endl;
    }

}

void main()
{
    
    RingS();
}



