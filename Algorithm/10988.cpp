#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	cin >> s;

	string oriS = s;
	reverse(s.begin(), s.end());

	if (oriS == s)
		cout << 1;
	else
		cout << 0;

	return 0;
}