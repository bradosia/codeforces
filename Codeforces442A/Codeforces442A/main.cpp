#include <regex>
#include <iterator>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
	regex e ("Danil|Olya|Slava|Ann|Nikita");

	string s;
	cin >> s;

	cout << (distance (regex_iterator<string::const_iterator> (s.begin (), s.end (), e), sregex_iterator ()) == 1 ? "YES" : "NO");
	//system ("pause");
	return 0;
}