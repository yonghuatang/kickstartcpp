#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        ll n, d, c, m;  // beware of integer overflow!
        cin >> n >> d >> c >> m;
        string s;
        cin >> s;
        while (s.size() > 0) {
            if (s[0] == 'D' && d > 0) {
                d--;
                c += m;
            } else if (s[0] == 'C' && c > 0) {
                c--;
            } else {
                break;
            }
            s = (s.size() > 1 ? s.substr(1) : "");
        }
        cout << "Case #" << tc << ": " << (std::find(s.begin(), s.end(), 'D') == s.end() ? "YES" : "NO") << '\n';
    }
    return 0;
}
