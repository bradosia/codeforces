#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
double m, r, x1, y1, x2, y2, x3, y3, x4, y4, d1, d2, xap, yap, rap;

int main()
{
	cin >> r >> x1 >> y1 >> x2 >> y2;
	d1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	if (x1 == x2 && y1 == y2)
	{
		cout << fixed << setprecision(6) << r / 2 << " " << y1 << " " << r / 2;
		return 0;
	}
	if (d1 < r)
	{
		// x, y
		if (x2 - x1 == 0)
		{
			y3 = y1 + r;
			y4 = y1 - r;
			x3 = x1;
			x4 = x1;
			d1 = abs(y3 - y1);
			d2 = abs(y4 - y1);
		}
		else
		{
			m = (y2 - y1) / (x2 - x1);
			x3 = sqrt(pow(r, 2) / (1 + pow(m, 2))) + x1;
			x4 = -1 * sqrt(pow(r, 2) / (1 + pow(m, 2))) + x1;
			y3 = sqrt(pow(r, 2) - pow(x3 - x1, 2)) + y1;
			y4 = sqrt(pow(r, 2) - pow(x4 - x1, 2)) + y1;
			d1 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
			d2 = sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));
			//cout << x3 << " " << y3 << " " << d1 << endl;
			//cout << x4 << " " << y4 << " " << d2 << endl;
		}
		if (d1 > d2)
		{
			rap = d1 / 2;
			xap = (x2 + x3) / 2;
			yap = (y2 + y3) / 2;
		}
		else
		{
			rap = d2 / 2;
			xap = (x2 + x4) / 2;
			yap = (y2 + y4) / 2;
		}
		cout << fixed << setprecision(6) << xap << " " << yap << " " << rap;
		return 0;
	}
	cout << fixed << setprecision(6) << x1 << " " << y1 << " " << r;
	return 0;
}
