// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// const int MOD = 1000000007;

// int main() {
//     int t;
//     cin >> t;
//     for (int tc=1; tc<=t; tc++) {
//         int n, q, ans = 0;
//         cin >> n >> q;
//         string s;
//         cin >> s;
//         for (int i=0; i<q; i++) {
//             int li, ri;
//             cin >> li >> ri;
//             string s_temp = s.substr(li-1, ri-li+1);  // (pos, len)
//             std::sort(s_temp.begin(), s_temp.end());
//             char currentChar = s_temp[0];
//             int oddCount = 0, tempCount = 0;
//             for (int j=0; j<ri-li+1; j++) {
//                 if (oddCount == 2) {
//                     break;
//                 }
//                 if (s[j] == currentChar) {
//                     tempCount++;
//                 } else {
//                     currentChar = s[j];
//                     oddCount += (tempCount % 2 != 0);
//                     tempCount = 1;
//                 }
//             }
//             ans += (oddCount < 2);
//         }
//         cout << "Case #" << tc << ": " << ans << '\n';
//     }
//     return 0;
// }

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
            if (li == ri) {
                ans++;
                continue;
            }
            string s_temp = s.substr(li-1, ri-li+1);  // (pos, len)
            std::sort(s_temp.begin(), s_temp.end());
            vector<int> dp(26, 0);
            for (const char& c : s_temp) {
                dp[(int)c-65]++;
            }
            int oddCount = 0;
            for (auto it=dp.begin(); it!=dp.end() && oddCount!=2; it++) {
                oddCount += (*it % 2 != 0);
            }
            ans += (oddCount < 2);
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}  // TLE
