#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	cin >> s;

	vector<int> arr(26, -1);

	for (int i = 0; i < s.size(); i++)
	{
		if (arr[s[i] - 'a'] == -1)
			arr[s[i] - 'a'] = i;
	}

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}