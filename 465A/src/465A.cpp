#include <iostream>
#include <math.h>
using namespace std;
long long r, x1, y1, x2, y2, x3, y3, x4, y4, d1, d2, d, xap, yap, rap;

int main()
{
	cin >> r >> x1 >> y1 >> x2 >> y2;
	// x, y
	x3 = sqrt(r / (1 + pow((y2 - y1) / (x2 - x1), 2))) + x1;
	x4 = -1 * sqrt(r / (1 + pow((y2 - y1) / (x2 - x1), 2))) + x1;
	y3 = sqrt(r - pow(x3 - x1, 2)) + y1;
	y4 = sqrt(r - pow(x4 - x1, 2)) + y1;
	d1 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	d2 = sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));
	if (d1 > d2)
	{
		rap = d1 / 2;
		xap = (x2 - x3) / 2;
		yap = (y2 - y3) / 2;
	}
	else
	{
		rap = d2 / 2;
		xap = (x2 - x4) / 2;
		yap = (y2 - y4) / 2;
	}
	cout << xap << " " << yap << " " << rap;
	return 0;
}
