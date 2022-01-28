#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, p;
        cin >> n >> p;
        int ans = MOD;
        vector<int> s(n, 0);
        for (int i=0; i<n; i++) {
            cin >> s[i];
        }
        std::sort(s.begin(), s.end());
        vector<int> dp{0};  // range sum
        for (int i=0; i<n; i++) {
            dp.push_back(s[i] + dp[i]);
        }
        for (int i=0; i<=n-p; i++) {  // find the minimum number of hours, the rightmost student is the benchmark
            ans = min(ans, s[i+p-1]*p - (dp[i+p]-dp[i]));
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
