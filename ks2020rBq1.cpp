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
        vector<int> h(n, 0);
        for (int i=0; i<n; i++) {
            cin >> h[i];
        }
        for (int i=1; i<n-1; i++) {
            if ((h[i] > h[i-1]) && (h[i] > h[i+1])) {
                ans++;
                i++;
            }
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
