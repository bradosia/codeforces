#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int tmp, i, winner, u, wins, p2;
long long n, k;
bool battle;

queue<int>q;

int main ()
{
	for (cin >> n >> k, i = 0; i < n; i++)
	{
		cin >> tmp;
		q.push (tmp);
	}
	i = 0;
	wins = 0;
	winner = q.front ();
	q.pop ();
	battle = true;
	while (battle)
	{
		i++;
		//cout << winner << endl;
		p2 = q.front ();
		q.pop ();
		if (winner > p2)
		{
			q.push (p2);
			wins++;
		}
		else
		{
			q.push (winner);
			winner = p2;
			wins = 0;
			i = 0;
		}
		if (wins==k || i>n)
		{
			battle = false;
		}
	}
	cout << winner;
	//system ("pause");
	return 0;
}