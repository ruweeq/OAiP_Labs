#include <iostream>
#include <stdlib.h>
using namespace std;
int sort(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}
int main() {
	int a[] = {0, 12,33,49,57 }, n = 5;
	
	cout<<"Array A:";
	for (int i = 1; i < n; i++) { cout <<  a[i]<<" " ; }
	cout << "\n" << "Enter array a[1]:";
	cin >> a[0];
	
	qsort(a, 5, sizeof(int), sort);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
		cout << "\n";
	}
		return 0;
}
