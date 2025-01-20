#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	string s;
	while (T--)
	{
		cin >> s;

		cout << s[0] << s[s.size() - 1] << '\n';
	}
}