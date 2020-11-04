#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите номер года:";
	cin >> n;
	cout << "Год ";
	switch ((n) % 10) {
	case 0:
	case 1:
		cout << "бел";
		break;
	case 2:
	case 3:
		cout << "черн";
		break;
	case 4:
	case 5:
		cout << "зелён";
		break;
	case 6:
	case 7:
		cout << "красн";
		break;
	case 8:
	case 9:
		cout << "жёлт";
		break;
	}
	switch ((n + 1) % 5) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 9:
	case 10:
	case 11:
		cout << "ой ";
		break;
	case 6:
	case 7:
	case 8:
		cout << "ого ";
		break;
	}
	switch ((n + 8) % 12) {
	case 0:
		cout << "крысы\n";
		break;
	case 1:
		cout << "коровы\n";
		break;
	case 2:
		cout << "тигра\n";
		break;
	case 3:
		cout << "зайца\n";
		break;
	case 4:
		cout << "дракона\n";
		break;
	case 5:
		cout << "змеи\n";
		break;
	case 6:
		cout << "лошади\n";
		break;
	case 7:
		cout << "овцы\n";
		break;
	case 8:
		cout << "обезьяны\n";
		break;
	case 9:
		cout << "курицы\n";
		break;
	case 10:
		cout << "собаки\n";
		break;
	case 11:
		cout <<
			"свиньи\n";
		break;

	}
	return 0;
}