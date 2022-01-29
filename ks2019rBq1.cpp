#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, q, ans = 0;
        cin >> n >> q;
        string s;
        cin >> s;
        for (int i=0; i<q; i++) {
            int li, ri;
            cin >> li >> ri;
            string s_temp = s.substr(li-1, ri-li+1);  // (pos, len)
            std::sort(s_temp.begin(), s_temp.end());
            vector<int> dp(26, 0);
            int oddCount = 0, anchor = 64, tempCount = 0;
            for (auto it=s_temp.begin(); it!=s_temp.end() && oddCount!=2; it++) {
                dp[(int)(*it)-65]++;
            }
            
            // for (auto it=dp.begin(); it!=dp.end() && oddCount!=2; it++) {
            //     if ((*it) % 2 != 0) {
            //         oddCount++;
            //     }
            // }
            if (oddCount < 2) {
                ans++;
            }
            
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
