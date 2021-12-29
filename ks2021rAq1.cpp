# include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;
        for (int i=0; i<n/2; i++) {
            ans += (s[i] != s[n-i-1]);
        }
        cout << "Case #" << tc << ": " << abs(ans-k) << '\n';
    }
    return 0;
}
