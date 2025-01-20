#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr;

	int T;
	cin >> T;

	int n;
	for (int i = 0; i < T; i++)
	{
		cin >> n;
		arr.push_back(n);
	}

	int findN;
	cin >> findN;

	int cnt = 0;
	for (int i = 0; i < T; i++)
	{
		if (arr[i] == findN)
			cnt++;
	}

	cout << cnt << '\n';
}