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
        vector<string> v(n, "");
        for (int i=0; i<n; i++) {
            cin.ignore();
            std::getline(cin, v[i]);
        }
        for (int i=1; i<n; i++) {
            if () {
                ans++;
            }     
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}  // ??
