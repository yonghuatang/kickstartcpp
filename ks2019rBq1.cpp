#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, q, ans = 0;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<vector<int>> v(n+1, vector<int>(26, 0)); // prefix sum
        for (int i=0; i<n; i++) {
            v[i+1] = v[i];
            v[i+1][s[i]-65]++;
        }
        for (int i=0; i<q; i++) {
            int li, ri;  // inclusive
            cin >> li >> ri;
            int oddCount = 0;
            for (int j=0; j<26; j++) {
                oddCount += (v[ri][j] - v[li-1][j]) % 2 != 0;
            }
            ans += oddCount <= 1;
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
