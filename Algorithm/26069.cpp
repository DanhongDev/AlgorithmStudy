//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	string A, B, prePerson;
//	int cnt = 0;
//	bool trigger = false;
//	while (N--)
//	{
//		cin >> A >> B;
//
//		if (!trigger)
//		{
//			if (A != "ChongChong" && B != "ChongChong")
//			{
//				prePerson = B;
//				continue;
//			}
//		}
//		
//		if (A == "ChongChong" || B == "ChongChong")
//		{
//			if (A == "ChongChong")
//				prePerson = B;
//			else
//				prePerson = A;
//			trigger = true;
//			cnt++;
//			continue;
//		}
//
//		if (trigger)
//		{
//			if (prePerson == A)
//			{
//				prePerson = B;
//				cnt++;
//			}
//		}
//	}
//
//	std::cout << ++cnt << endl;
//}