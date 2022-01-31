#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, ans = 1;
        cin >> n;
        vector<int> a(n, 0);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        vector<int> dp;
        for (int i=1; i<n; i++) {
            dp.push_back(a[i]-a[i-1]);
        }
        // find the longest contiguous subarray
        for (int i=0, j=0; i<n-1; i=++j) {
            while (dp[j] == dp[j+1] && j<n-2) {
                j++;
            }
            ans = max(ans, j-i+2);
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
