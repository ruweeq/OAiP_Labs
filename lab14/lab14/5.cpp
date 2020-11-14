int main()
{
	int a, b;
	cout << "Enter a,b:";
	cin >> a >> b;

	while (a % b != 0) {
		a = a % b;
		swap(a, b);
	}
	cout << b;
	return 0;
}
