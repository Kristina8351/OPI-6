#include "pch.h"
#include "windows.h"
#include <iostream>

using namespace std;

int main()
{
	int n, m;

	int A[100][100];
	cin >> m >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
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
