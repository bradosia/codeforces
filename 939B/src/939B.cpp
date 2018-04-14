//============================================================================
// Name        : 464A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
long long n, k, x, y, z, i;
long long arr[100005];

int main()
{
	cin >> n >> k;
	for (i = 0; i < k; i++)
	{
		cin >> arr[i];
	}
	z = 0;
	while (1)
	{
		for (i = 0; i < k; i++)
		{
			if (n % arr[i] == z)
			{
				cout << i + 1 << " " << n / arr[i];
				return 0;
			}
		}
		z++;
	}
	cout << "NO";
	return 0;
}
