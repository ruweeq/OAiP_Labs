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
	cout << "������� ����������� �����:";
	cin >> n;
	switch (n / 100) {
	case 1:
		cout << "��� ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "��������� ";
		break;
	case 5:
		cout << "������� ";
		break;
	case 6:
		cout << "�������� ";
		break;
	case 7:
		cout << "������� ";
		break;
	case 8:
		cout << "��������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	}
	if ((n % 100) / 10 == 1)
		switch (n % 100) {
		case 10:
			cout << "������\n";
			break;
		case 11:
			cout << "�����������\n";
			break;
		case 12:
			cout << "����������\n";
			break;
		case 13:
			cout << "����������\n";
			break;
		case 14:
			cout << "������������\n";
			break;
		case 15:
			cout << "����������\n";
			break;
		case 16:
			cout << "�����������\n";
			break;
		case 17:
			cout << "����������\n";
			break;
		case 18:
			cout << "������������\n";
			break;
		case 19:
			cout << "������������\n";
			break;
		}
	else {
		switch ((n % 100) / 10) {
		case 2:
			cout << "�������� ";
			break;
		case 3:
			cout << "�������� ";
			break;
		case 4:
			cout << "����� ";
			break;
		case 5:
			cout << "��������� ";
			break;
		case 6:
			cout << "���������� ";
			break;
		case 7:
			cout << "��������� ";
			break;
		case 8:
			cout << "����������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		}
		switch (n % 10) {
		case 1:
			cout << "����\n";
			break;
		case 2:
			cout << "���\n";
			break;
		case 3:
			cout << "���\n";
			break;
		case 4:
			cout << "������\n";
			break;
		case 5:
			cout << "����\n";
			break;
		case 6:
			cout << "�����\n";
			break;
		case 7:
			cout << "����\n";
			break;
		case 8:
			cout << "������\n";
			break;
		case 9:
			cout << "������\n";
			break;
		}
	}
	return 0;
}