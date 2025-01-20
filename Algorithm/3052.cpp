#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	int N, rem;
	unordered_set<int> myset;

	while (cin >> N)
	{
		rem = N % 42;
		myset.insert(rem);
	}

	cout << myset.size() << '\n';
}