#include "pch.h"
#include "windows.h"
#include <iostream>

using namespace std;

int main()
{
	int n, m;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int A[100][100];
	cout << "Введіть розміри масиву: ";
	cin >> m >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Введіть елемент масиву: ";
			cin >> A[i][j];
		}
	}

	for (int i = m; i >= 0; i--)
	{
		cout << endl;
		for (int j = n; j >= 0; j--)
		{
			cout << A[i][j] << "  ";
		}
	}

	return(0);
}
