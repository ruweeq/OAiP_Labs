#include <iostream>
using namespace std;

void Quarter()
{
    int x, y;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter x, y:";
        cin >> x >> y;

        if (x > 0) {
            if (y > 0) { cout << 1 << endl;; }
            else cout << 4 << endl;;
        }
        else if (y > 0) { cout << 2 << endl;; }
        else cout << 3 << endl;;
    }

}

void main()
{

    Quarter();
}
