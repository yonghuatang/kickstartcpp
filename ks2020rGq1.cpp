#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        string s;
        cin >> s;
        int n = s.size();
        int ans;
        if (n<9) {
            ans = 0;
        } else {
        queue<int> q;
        for (int i=0; i<=n-5; i++) {
            if (s.substr(i, 4) == "KICK") {
                q.push(0);
            }
            if (s.substr(i, 5) == "START") {
                q.push(1);
            }
        }
        while (!q.empty()) {
            for (auto it=) {

            }
            q.pop();
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
