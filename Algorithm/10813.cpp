#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> arr(N);
	for (int i = 0; i < N; i++)
	{
		arr[i] = i+1;
	}

	int i, j;
	while (M--)
	{
		cin >> i >> j;

		int temp = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = temp;
	}

	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
}