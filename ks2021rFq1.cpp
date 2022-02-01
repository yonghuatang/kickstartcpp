#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 0;
        vector<int> l(n, 0), r(n, 0);
        l[0] = (s[0] == '1' ? 0 : INF);
        for (int i=1; i<n; i++) {
            if (s[i] == '1') {
                l[i] = 0;
            } else {
                l[i] = l[i-1] + 1;
            }
        }
        r[n-1] = (s[n-1] == '1' ? 0 : INF);
        for (int i=n-2; i>=0; i--) {
            if (s[i] == '1') {
                r[i] = 0;
            } else {
                r[i] = r[i+1] + 1;
            }
        }
        for (int i=0; i<n; i++) {
            ans += min(l[i], r[i]);
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
