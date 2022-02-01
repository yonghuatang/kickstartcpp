#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        cout << "Case #" << tc << ":";
        int n, q;
        cin >> n >> q;
        vector<int> dp{0};
        for (int i=0; i<n; i++) {
            int num;
            cin >> num;
            dp.push_back(dp[i] ^ num);  // bitwise XOR, range XOR-sum
        }
        for (int i=0; i<q; i++) {
            int pi, vi, ans;
            cin >> pi >> vi;
            cout << " " << ans;
        }
        cout << "\n";
    }
    return 0;
}  // ??
