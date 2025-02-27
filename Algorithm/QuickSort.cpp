#include <iostream>
#include <vector>
using namespace std;

void quicksort(vector<int>& arr)
{
	int pivot = arr[arr.size() / 2];
	if (arr.size() == 1)
	{
		cout << pivot << " ";
		return;
	}
	
	vector<int> leftArr, rightArr;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] < pivot)
		{
			leftArr.push_back(arr[i]);
		}
		else if(arr[i] > pivot)
		{
			rightArr.push_back(arr[i]);
		}
	}

	if (leftArr.size() != 0)
		quicksort(leftArr);
	if (rightArr.size() != 0)
		quicksort(rightArr);
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	//quick sort
	//How to choose pivot

	//sudo
	//1. pick pivot. 
	//	-> use middle.. algorithm..???
	//	-> pivot = arr[n/2]
	//2. split elements to left, right array.
	//3. recursion left, right array. (repeat 1~2)

	vector<int> arr = { 20, 2, 9, 7, 12, 15, 1, 6, 8 };
	
	quicksort(arr);
}