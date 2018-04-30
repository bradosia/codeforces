#include <iostream>
#include <string>
using namespace std;

int cubeNum, i, j, k, l;
int cube[4][6];
bool solutions[999];
int main ()
{
	ios::sync_with_stdio (false);
	solutions[0] = true;
	cin >> cubeNum;
	for (i = 0; i < cubeNum; i++)
	{
		for (k = 0; k < 6; k++)
		{
			cin >> cube[i][k];
		}
	}
	cube[3][0] = 0;
	cube[3][1] = 0;
	cube[3][2] = 0;
	cube[3][3] = 0;
	cube[3][4] = 0;
	cube[3][5] = 0;
	for (i = 0; i <= cubeNum; i++)
	{
		for (j = 0; j <= cubeNum; j++)
		{
			if (i != j)
			{
				for (k = 0; k < 6; k++)
				{
					for (l = 0; l < 6; l++)
					{
						solutions[stoi (to_string (cube[i][k]) + to_string (cube[j][l]))] = true;
					}
				}
			}
		}
	}
	for (i = 0; i < 1000; i++)
	{
		if (!solutions[i])
		{
			cout << i - 1;
			//system ("pause");
			return 0;
		}
	}
	cout << 0;
	//system ("pause");
	return 0;
}