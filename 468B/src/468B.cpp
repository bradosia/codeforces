//============================================================================
// Name        : 468B.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
int n, a, b, m, d, rr, tmp, dd;
bool r;

int main() {
	r = false;
	cin >> n >> a >> b;
	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	d = b - a; // difference
	m = log2(n); // max rounds
	dd = 0;
	if (b % 2 == 0) {
		r = true;
		dd = 1;
	}
	if (d == 1 && r) {
		rr = 1;
		goto end;
	}
	for (rr = 1; rr < m; rr++, dd += dd + 2) {
		if (d <= dd) {
			break;
		}
	}
	end: if (rr == m) {
		cout << "Final!" << endl;
	} else {
		cout << rr << endl;
	}
	return 0;
}
