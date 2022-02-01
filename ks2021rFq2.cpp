#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int d, n, k;
        cin >> d >> n >> k;
        ll ans = 0;
        vector<priority_queue<int>> dp(d);
        for (int i=0; i<n; i++) {
            int hi, si, ei;
            cin >> hi >> si >> ei;
            for (int i=si; i<=ei; i++) {
                dp[i-1].push(hi);
            }
        }
        for (int i=0; i<d; i++) {
            ll temp = 0;
            for (int j=0; j<k; j++) {
                if (dp[i].empty()) { break; }
                temp += dp[i].top();
                dp[i].pop();
            }
            ans = max(ans, temp);
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}  // MLE
