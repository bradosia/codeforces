#include <iostream>
#include <vector>

using namespace std;
int tmp, i, consecutive, current;
long long n, k, m;
bool battle;
int* intArrayHeap = new int[1000000];

vector<int>line;

int main ()
{
	for (cin >> n >> k >> m, i = 0; i < n; i++)
	{
		cin >> intArrayHeap[i];
	}
	for (i = 0; i < m; i++)
	{
		line.insert (line.begin (), intArrayHeap, intArrayHeap + n);
	}
	current = -1;
	consecutive = 0;
	for (int i = 0; i < (int)line.size (); i++)
	{
		if ((int)line.at (i) != current)
		{
			current = (int)line.at (i);
			consecutive = 1;
		}
		else
		{
			consecutive++;
			if (consecutive == k)
			{
				//cout << "i=" << i << " k=" << k << " current=" << current << endl;
				line.erase (line.begin () + (i - (k-1)), line.begin () + i+1);
				i = 0;
				consecutive = 0;
				current = -1;
			}
		}
	}
	current = -1;
	consecutive = 0;
	for (int i = 0; i < (int)line.size (); i++)
	{
		if ((int)line.at (i) != current)
		{
			current = (int)line.at (i);
			consecutive = 1;
		}
		else
		{
			consecutive++;
			if (consecutive == k)
			{
				//cout << "i=" << i << " k=" << k << " current=" << current << endl;
				line.erase (line.begin () + (i - (k - 1)), line.begin () + i + 1);
				i = 0;
				consecutive = 0;
				current = -1;
			}
		}
	}
	//for (int i = 0; i < (int)line.size (); i++) cout << line.at (i) << endl;
	cout << (int)line.size ();

	system ("pause");
	return 0;
}