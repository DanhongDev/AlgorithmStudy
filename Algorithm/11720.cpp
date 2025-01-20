#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	string s;
	cin >> N >> s;

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += s[i] - '0';
	}

	cout << sum << '\n';
}