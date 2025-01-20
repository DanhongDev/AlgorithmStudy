#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	int i;
	cin >> s >> i;

	cout << s[i-1] << '\n';
}