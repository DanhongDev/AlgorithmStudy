#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	int max = 0, idx = 0;
	vector<int> arr;
	while (cin >> n)
	{
		arr.push_back(n);
	}

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			idx = i;
		}
	}

	cout << max << '\n';
	cout << idx + 1 << '\n';
}