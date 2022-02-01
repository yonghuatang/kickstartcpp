#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int g00, g01, g02, g10, g12, g20, g21, g22, ans = 0;
        cin >> g00 >> g01 >> g02 >> g10 >> g12 >> g20 >> g21 >> g22;
        ans += (g00 + g02 == 2 * g01);
        ans += (g00 + g20 == 2 * g10);
        ans += (g20 + g22 == 2 * g21);
        ans += (g02 + g22 == 2 * g12);
        map<int, int> m;
        int temp1, temp2, temp3, temp4;
        if ((g10 + g12) % 2 == 0) {
            temp1 = (g10 + g12) / 2;
            m[temp1]++;
        }
        if ((g01 + g21) % 2 == 0) {
            temp2 = (g01 + g21) / 2;
            m[temp2]++;
        }
        if ((g00 + g22) % 2 == 0) {
            temp3 = (g00 + g22) / 2;
            m[temp3]++;
        }
        if ((g02 + g20) % 2 == 0) {
            temp4 = (g02 + g20) / 2;
            m[temp4]++;
        }
        int maxFreq = 0;
        for (auto it=m.begin(); it!=m.end(); it++) {
            maxFreq = max(maxFreq, it->second);
        }
        ans += maxFreq;
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
