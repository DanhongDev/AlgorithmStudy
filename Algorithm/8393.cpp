#include <iostream>
using namespace std;

int main()
{
	int T, res = 0;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		res += i;
	}

	cout << res << endl;
}