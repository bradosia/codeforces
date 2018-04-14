//============================================================================
// Name        : 467A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <unordered_set>
using namespace std;
long long n, i;
long long a[601];

int main()
{
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	unordered_set<int> s(a, a + n);
	if (s.count(0) > 0)
		cout << s.size() - 1 << endl;
	else
		cout << s.size() << endl;
	return 0;
}
