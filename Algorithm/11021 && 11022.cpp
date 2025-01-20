#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	//int A, B;
	//for (int i = 0; i < T; i++)
	//{
	//	cin >> A >> B;
	//
	//	cout << "Case #" << i + 1 << ": " << A + B << '\n';
	//}

	int A, B;
	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;

		cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << '\n';
	}
}