#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string s;
    getline(cin, s);

    stringstream ss(s);
    int cnt = 0;
    string word;

    while (ss >> word) {
        cnt++;
    }

    cout << cnt << '\n';
    return 0;
}
