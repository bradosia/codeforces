#include <iostream>
#include <string>
using namespace std;

// 64  =   1000000
// 128 =  10000000
// 192 =  11000000
// 256 = 100000000
// 320 = 101000000
// 384 = 110000000
// 448 = 111000000
string binary;
int n, i, count0, count1;
int main ()
{
	ios::sync_with_stdio (false);
	cin >> binary;
	n = binary.length ();
	count0 = 0;
	for (i = n-1; i >= 0; i--)
	{
		if (binary[i] == '0')
		{
			count0++;
		}
		else if (count0 < 6 && binary[i] == '1')
		{
			//binary.erase (i,1);
			//cout << binary << endl;
		}
		else
		{
			count1++;
		}
	}
	if (count1 > 0 && count0 >= 6) cout << "yes";
	else cout << "no";
	//system ("pause");
	return 0;
}