#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        ll n;
        cin >> n;
        ll ans = n;
        string s = to_string(n);
        int len = s.size();
        vector<int> v;
        for (const char& c : s) {
            v.push_back((int)c-48);
        }
        ll p = 0, m = 0;
        for (int i=0; i<len; i++) {
            if (v[i] % 2 != 0) {

            } 
        }
        cout << "Case #" << tc << ": " << 000000 << '\n';
    }
    return 0;
}  // ??
