#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int base[6] = { 1, 1, 2, 2, 2, 8 };

	int arr[6];
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << base[i] - arr[i] << " ";
	}

	return 0;
}