#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    int cnt = 0; 
    string temp;
    unordered_set<string> arr; 

    while (T--) {
        cin >> temp;

        if (temp == "ENTER") 
        {
            arr.clear(); // 새로운 그룹 시작
        }
        else 
        {
            // 중복 체크 후 곰곰티콘 사용 카운트 증가
            if (arr.insert(temp).second) 
            {
                cnt++;
            }
        }
    }

    cout << cnt << '\n';
    return 0;
}
