#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int sum = 0;
    for (char c : s) 
    {
        if (c >= 'A' && c <= 'C') sum += 3;
        else if (c >= 'D' && c <= 'F') sum += 4;
        else if (c >= 'G' && c <= 'I') sum += 5;
        else if (c >= 'J' && c <= 'L') sum += 6;
        else if (c >= 'M' && c <= 'O') sum += 7;
        else if (c >= 'P' && c <= 'S') sum += 8;
        else if (c >= 'T' && c <= 'V') sum += 9;
        else if (c >= 'W' && c <= 'Z') sum += 10;
    }

    cout << sum << '\n';
    return 0;
}