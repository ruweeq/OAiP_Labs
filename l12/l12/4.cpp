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
	cout << "Введите трехзначное число:";
	cin >> n;
	switch (n / 100) {
	case 1:
		cout << "сто ";
		break;
	case 2:
		cout << "двести ";
		break;
	case 3:
		cout << "триста ";
		break;
	case 4:
		cout << "четыреста ";
		break;
	case 5:
		cout << "пятьсот ";
		break;
	case 6:
		cout << "шестьсот ";
		break;
	case 7:
		cout << "семьсот ";
		break;
	case 8:
		cout << "восемьсот ";
		break;
	case 9:
		cout << "девятьсот ";
		break;
	}
	if ((n % 100) / 10 == 1)
		switch (n % 100) {
		case 10:
			cout << "десять\n";
			break;
		case 11:
			cout << "одиннадцать\n";
			break;
		case 12:
			cout << "двенадцать\n";
			break;
		case 13:
			cout << "тринадцать\n";
			break;
		case 14:
			cout << "четырнадцать\n";
			break;
		case 15:
			cout << "пятнадцать\n";
			break;
		case 16:
			cout << "шестнадцать\n";
			break;
		case 17:
			cout << "семнадцать\n";
			break;
		case 18:
			cout << "восемнадцать\n";
			break;
		case 19:
			cout << "девятнадцать\n";
			break;
		}
	else {
		switch ((n % 100) / 10) {
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		case 5:
			cout << "пятьдесят ";
			break;
		case 6:
			cout << "шестьдесят ";
			break;
		case 7:
			cout << "семьдесят ";
			break;
		case 8:
			cout << "восемьдесят ";
			break;
		case 9:
			cout << "девяносто ";
			break;
		}
		switch (n % 10) {
		case 1:
			cout << "один\n";
			break;
		case 2:
			cout << "два\n";
			break;
		case 3:
			cout << "три\n";
			break;
		case 4:
			cout << "четыре\n";
			break;
		case 5:
			cout << "пять\n";
			break;
		case 6:
			cout << "шесть\n";
			break;
		case 7:
			cout << "семь\n";
			break;
		case 8:
			cout << "восемь\n";
			break;
		case 9:
			cout << "девять\n";
			break;
		}
	}
	return 0;
}