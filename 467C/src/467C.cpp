//============================================================================
// Name        : 467A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
long long k, d, t, i, j;

int main() {
	cin >> k >> d >> t;
	if (k % d == 0) {
		cout << t << endl;
		return 0;
	}

	for (i = y; i >= 2; i--) {
		for (j = 2; j <= p; j++) {
			if (i % j == 0) {
				break;
			} else if (j == p) {
				cout << i << endl;
				return 0;
			}
		}
	}
	cout << -1 << endl;
	return 0;
}
