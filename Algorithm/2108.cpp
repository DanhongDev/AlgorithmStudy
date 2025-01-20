#include <iostream>
#include <vector>
#include <algorithm>

#include <iomanip>
#include <cmath>

int main()
{
	int N;
	std::cin >> N;
	
	std::vector<int> arr(N);
	int temp = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		std::cin >> temp;
		arr[i] = temp;
	}

	int avg = 0, medi = 0, mode = 0, range = 0;

	int min = 4001, max = 0;
	for (int i = 0; i < N; i++)
	{
		avg += arr[i];

		min = min < arr[i] ? min : arr[i];
		max = max > arr[i] ? max : arr[i];
	}

	double mean = avg / (double)N; // »ê¼úÆò±Õ
	avg = int(round(mean * 10) / 10);

	sort(arr.begin(), arr.end());
	medi = arr[(N / 2)]; // Áß¾Ó°ª

	range = max - min;

	std::cout << avg << std::endl;
	std::cout << medi << std::endl;
	std::cout << mode << std::endl;
	std::cout << range << std::endl;
}