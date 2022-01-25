# include <bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    int a, b, k;
    ll n, ans;
    for (int tc=1; tc<=t; tc++) {
        ans = 0;
        cin >> a >> b >> n >> k;
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                if (i == j) {
                    continue;
                }
                if ((int)(pow(i, a) + pow(j, b)) % k == 0) {
                    ans++;
                }
            }
        }
        cout << "Case #" << tc << ": " << ans % MOD << endl;
    }
    return 0;
} // WA
