#include <bits/stdc++.h>
using namespace std;

#define INF 1000000007
typedef long long ll;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int ans = 0;
        string s, f;
        cin >> s >> f;
        for (const char& c : s) {
            int count = INF;
            for (const char& fav: f) {
                count = min(count, min(abs(c-fav), 26-abs(c-fav)));
            }
            ans += count;
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
