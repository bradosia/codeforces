#include <iostream>
#include <string>
using namespace std;

int i;
int cube[26];

bool checkFaces (int cube2[])
{
	if ((cube2[1] == cube2[2] && cube2[1] == cube2[3] && cube2[1] == cube2[4])
		&& (cube2[5] == cube2[6] && cube2[5] == cube2[7] && cube2[5] == cube2[8])
		&& (cube2[9] == cube2[10] && cube2[9] == cube2[11] && cube2[9] == cube2[12])
		&& (cube2[13] == cube2[14] && cube2[13] == cube2[15] && cube2[13] == cube2[16])
		&& (cube2[17] == cube2[18] && cube2[17] == cube2[19] && cube2[17] == cube2[20])
		&& (cube2[21] == cube2[22] && cube2[21] == cube2[23] && cube2[21] == cube2[24])) return true;
	else return false;
}
bool rotate1 ()
{
	int cube2[26];
	copy (cube, cube+26, cube2);
	cube2[1] = cube[5];
	cube2[3] = cube[7];
	cube2[5] = cube[9];
	cube2[7] = cube[11];
	cube2[9] = cube[24];
	cube2[11] = cube[22];
	cube2[24] = cube[1];
	cube2[22] = cube[3];
	return checkFaces (cube2);
}
bool rotate2 ()
{
	int cube2[26];
	copy (cube, cube + 26, cube2);
	cube2[1] = cube[24];
	cube2[3] = cube[22];
	cube2[5] = cube[1];
	cube2[7] = cube[3];
	cube2[9] = cube[5];
	cube2[11] = cube[7];
	cube2[24] = cube[9];
	cube2[22] = cube[11];
	return checkFaces (cube2);
}
bool rotate5 ()
{
	int cube2[26];
	copy (cube, cube + 26, cube2);
	cube2[13] = cube[5];
	cube2[14] = cube[6];
	cube2[5] = cube[17];
	cube2[6] = cube[18];
	cube2[17] = cube[21];
	cube2[18] = cube[22];
	cube2[21] = cube[13];
	cube2[22] = cube[14];
	return checkFaces (cube2);
}
bool rotate6 ()
{
	int cube2[26];
	copy (cube, cube + 26, cube2);
	cube2[13] = cube[21];
	cube2[14] = cube[22];
	cube2[5] = cube[13];
	cube2[6] = cube[14];
	cube2[17] = cube[5];
	cube2[18] = cube[6];
	cube2[21] = cube[17];
	cube2[22] = cube[18];
	return checkFaces (cube2);
}
bool rotate7 ()
{
	int cube2[26];
	copy (cube, cube + 26, cube2);
	cube2[3] = cube[17];
	cube2[4] = cube[19];
	cube2[17] = cube[10];
	cube2[19] = cube[9];
	cube2[10] = cube[16];
	cube2[9] = cube[14];
	cube2[16] = cube[3];
	cube2[14] = cube[4];
	return checkFaces (cube2);
}
bool rotate8 ()
{
	int cube2[26];
	copy (cube, cube + 26, cube2);
	cube2[3] = cube[16];
	cube2[4] = cube[14];
	cube2[17] = cube[3];
	cube2[19] = cube[4];
	cube2[10] = cube[17];
	cube2[9] = cube[19];
	cube2[16] = cube[10];
	cube2[14] = cube[9];
	return checkFaces (cube2);
}
int main ()
{
	for (i=0;i<24;i++)
	{
		cin >> cube[i+1];
	}
	ios::sync_with_stdio (false);
	if (rotate1 () || rotate2 ()
		|| rotate5 () || rotate6 () || rotate7 () || rotate8 ()) cout << "YES";
	else cout << "NO";
	//system ("pause");
	return 0;
}