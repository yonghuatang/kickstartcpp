#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        ll ans = 0;
        cin >> n;
        for (int i=1; i<=n; i++) {
            int ki;
            cin >> ki;
            ans += ki * ((1 << i-1) - (1 << n-i));
            // ans += ki * (pow(2, i-1) - pow(2, n-i));
        }
        cout << "Case #" << tc << ": " << ans % MOD << '\n';
    }
    return 0;
}
