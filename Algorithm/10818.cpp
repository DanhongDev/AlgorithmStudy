#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int min = 1000001, max = -1000001;

	int tmp;
	while (N--)
	{
		cin >> tmp;
		max = tmp > max ? tmp : max;
		min = tmp < min ? tmp : min;
	}

	cout << min << " " << max << '\n';
}