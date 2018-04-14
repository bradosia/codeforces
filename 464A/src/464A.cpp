//============================================================================
// Name        : 464A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int i, n, x, y;
int arr[0x9999];

int main()
{
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (i = 0; i < n; i++)
	{
		x = arr[i]-1;
		y = arr[x]-1;
		if (arr[y]-1 == i)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
