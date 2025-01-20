#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	string s = "*";
	for (int i = 0; i < N; i++)
	{
		cout << right << setw(N) << s << '\n';
		s += "*";
	}

	return 0;
}