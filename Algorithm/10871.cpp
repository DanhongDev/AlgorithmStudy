#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, X;
	cin >> N >> X;

	int temp;
	while (N--)
	{
		cin >> temp;
		if (temp < X)
			cout << temp << " ";
	}
}
