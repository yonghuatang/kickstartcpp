#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, k, s, ans;
        cin >> n >> k >> s;
        ans = min(k+n, 2*k - 2*s + n);
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
