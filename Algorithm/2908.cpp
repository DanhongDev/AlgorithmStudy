#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s1, s2;
	cin >> s1 >> s2;

	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());

	int rev1 = stoi(s1);
	int rev2 = stoi(s2);

	int res = rev1 > rev2 ? rev1 : rev2;

	//int sum1 = 0, sum2 = 0;
	//int i = 100;
	//for (char c : s1)
	//{
	//	int num = stoi(string(1, c));
	//	sum1 += i * num;
	//	i /= 10;
	//}
	//
	//i = 100;
	//for (char c : s2)
	//{
	//	int num = stoi(string(1, c));
	//	sum2 += i * num;
	//	i /= 10;
	//}
	//int res = sum1 > sum2 ? sum1 : sum2;

	cout << res << '\n';
	
}