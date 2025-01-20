#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	vector<int> arr;
	int a;

	for (int i=0; i<N; i++)
	{
		cin >> a;
		arr.push_back(a);

	}
	sort(arr.begin(), arr.end());

	//cout << arr[0] << " " << arr[N - 1] << endl;
	//for (int i = 0; i < N; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;

	cout << arr[0] * arr[N - 1] << endl;
}