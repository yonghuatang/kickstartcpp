#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, m, q, ans = 0;
        cin >> n >> m >> q;
        vector<int> p(m, 0);
        for (int i=0; i<m; i++) {
            cin >> p[i];
        }
        for (int i=0; i<q; i++) {
            int ri;
            cin >> ri;
            ans += n / ri;  // integer division
            for (int j=0; j<m; j++) {
                ans -= (p[j] % ri == 0);
            }
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}  // TLE
