#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v, dp{0};  // range sum
        int num = ceil((float)n/2), beauty = 0;
        for (const char& c : s) {
            v.push_back((int)c - 48);
        }
        for (int i=0; i<n; i++) {
            dp.push_back(v[i]+dp[i]);
        }
        for (int i=0; i<=n-num; i++) {
            beauty = max(beauty, dp[i+num]-dp[i]);
        }
        cout << "Case #" << tc << ": " << beauty << '\n';
    }
    return 0;
}
