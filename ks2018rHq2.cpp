#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v;
        for (const char& c : s) {
            v.push_back((int)c-48);  // ASCII
        }
        vector<int> dp{0};
        for (int i=0; i<n; i++) {  // range sum
            dp.push_back(dp[i]+v[i]);
        }
        int num = ceil((float)n/2);
        for (int i=0; i<=n-num; i++) {
            ans = max(ans, dp[i+num]-dp[i]);
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
