#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, m, p, ans = 0;
        cin >> n >> m >> p;
        vector<int> zeros(p, 0), ones(p, 0);
        for (int i=0; i<n; i++) {
            string s;
            cin >> s;
            for (int j=0; j<p; j++) {
                s[j] == '0' ? zeros[j]++ : ones[j]++;
            }
        }
        vector<string> forbidden(m, "");
        for (int i=0; i<m; i++) {
            cin >> forbidden[i];
        }
        string str = "";
        int count = 0;
        while (ans == 0) {
            for (int i=0; i<n; i++) {
                str += zeros[i] > ones[i] ? "0" : "1";
                count += min(n-zeros[i], n-ones[i]);
            }
            if (std::find(forbidden.begin(), forbidden.end(), str) != forbidden.end()) {
                str = ""; count = 0;
            } else { ans = count; }
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
