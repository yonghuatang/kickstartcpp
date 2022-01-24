#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        string s;
        cin >> s;
        int n = s.size();
        int ans = 0;
        if (n<9) {} else {
            stack<int> dp;
            for (int i=0; i<=n-5; i++) {
                if (s.substr(i, 4) == "KICK") {
                    dp.push(1);
                }
                if (s.substr(i, 5) == "START") {
                    dp.push(0);
                }
            }
            int startCount = 0;
            while (!dp.empty()) {
                if (!dp.top()) {
                    startCount++;
                } else {
                    ans += startCount;
                }
                dp.pop();
            }
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
