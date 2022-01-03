#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int streak = 1;
        string ans = "1";
        for (int i=1; i<n; i++) {     
            if (s[i] > s[i-1]) {
                streak++;
            } else {
                streak = 1;
            }
            ans += " ";
            ans += to_string(streak);
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
