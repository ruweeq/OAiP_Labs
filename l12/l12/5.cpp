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
	cout << "������� ����� ����:";
	cin >> n;
	cout << "��� ";
	switch ((n) % 10) {
	case 0:
	case 1:
		cout << "���";
		break;
	case 2:
	case 3:
		cout << "����";
		break;
	case 4:
	case 5:
		cout << "����";
		break;
	case 6:
	case 7:
		cout << "�����";
		break;
	case 8:
	case 9:
		cout << "���";
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
		cout << "�� ";
		break;
	case 6:
	case 7:
	case 8:
		cout << "��� ";
		break;
	}
	switch ((n + 8) % 12) {
	case 0:
		cout << "�����\n";
		break;
	case 1:
		cout << "������\n";
		break;
	case 2:
		cout << "�����\n";
		break;
	case 3:
		cout << "�����\n";
		break;
	case 4:
		cout << "�������\n";
		break;
	case 5:
		cout << "����\n";
		break;
	case 6:
		cout << "������\n";
		break;
	case 7:
		cout << "����\n";
		break;
	case 8:
		cout << "��������\n";
		break;
	case 9:
		cout << "������\n";
		break;
	case 10:
		cout << "������\n";
		break;
	case 11:
		cout <<
			"������\n";
		break;

	}
	return 0;
}