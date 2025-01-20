#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	int A, B;
	while (T--)
	{
		cin >> A >> B;

		cout << A + B << '\n';
	}
}