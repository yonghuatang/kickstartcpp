#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        string s, ans = "";
        cin >> s;
        map<char, int> letterCount;
        int maxCount = 0;
        for (const char& c : s) {
            maxCount = max(maxCount, ++letterCount[c]);
        }
        if (maxCount > floor((float)s.size()/2)) {
            ans = "IMPOSSIBLE";
        } else for (auto it=letterCount.begin(); it!=letterCount.end(); it++) {

            ans += ;
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}  // ??
