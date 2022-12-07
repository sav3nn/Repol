#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int year;
	cout << "Введите год ";
	cin >> year;
	if (year % 4 == 0)
	{
		cout << "Год високосный";
	}

	else
	{
		cout << "Год не високосный";
	}

}
	