#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	//arr check list
	//empty
	//size 1
	//static size
	//random big size
	vector<int> arr;

	while (1)
	{
		if (arr.size() == 0 || arr.size() == 1)
			break;

		bool esc = true;
		for (int i = 0; i < arr.size(); i++)
		{
			for (int j = i + 1; j < arr.size(); j++)
			{
				if (arr[i] > arr[j])
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					esc = false;
				}
				break;
			}
		}

		if (esc)
			break;
	}

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n';


	return 0;
}