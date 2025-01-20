#include <iostream>
using namespace std;

int main()
{
	int total, N, res = 0, a, b;
	cin >> total >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		res += a * b;
	}

	if (res == total)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}