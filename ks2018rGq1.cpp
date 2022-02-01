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
        vector<int> v(n, 0);
        for (int i=0; i<n; i++) {
            cin >> v[i];
        }
        std::sort(v.begin(), v.end());
        vector<int> dp(n, 0);
        for (int i=1; i<n; i++) {
            for (int j=0; j<i; j++) {
                if (v[i] > v[j] && v[i] % v[j] == 0) {
                    dp[i]++;
                    ans += dp[j];
                }
            }
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}  // ??
