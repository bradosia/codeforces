#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int n, i, complete;
bool visit;

struct P
{
	P ()
	{
		x = 0;
		y = 0;
	}
	P (int xi, int yi)
	{
		x = xi;
		y = yi;
	};
	int x, y;
}u;
queue<P>q;

int main ()
{
	for (cin >> n, i = 0; i < n; i++)
	{
		P point;
		cin >> point.x >> point.y;
		q.push(point);
	}
	visit = true;
	i = 0;
	complete = n;
	while (visit)
	{
		i++;
		u=q.front ();
		//cout << "x=" << u.x << "y=" << u.y << endl;
		if (i>=u.x && (i== u.x || (i-u.x)% u.y==0))
		{
			q.pop ();
			complete--;
			if (complete == 0)
			{
				visit = false;
			}
		}
	}
	cout << i;
	//system ("pause");
	return 0;
}