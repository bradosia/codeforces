//============================================================================
// Name        : 468C.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
long long v[7];
long long i, n, offset, temp;

int main() {
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> temp;
		if (i == 0) {
			offset = (-1 * temp) + 2;
		}
		v[temp + offset]++;
	}
	for (i = 0; i < 7; i++) {
		cout << i << " " << v[i] << endl;
	}
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
