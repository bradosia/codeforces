//============================================================================
// Name        : 468A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
int a, b, n, c;

int main() {
	cin >> a >> b;
	n = abs(b - a) / 2;
	c = n * (n + 1);
	cout << n;
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
