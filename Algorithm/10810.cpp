#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	vector<int> arr(N);

	int i, j, k;
	while (M--)
	{
		cin >> i >> j >> k;
		for (int l = i-1; l <= j-1; l++)
		{
			arr[l] = k;
		}
	}

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n';

	return 0;
}