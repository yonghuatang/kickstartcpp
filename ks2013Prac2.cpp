#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;
const double PI = 3.14159265359;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        double v, d;
        cin >> v >> d;
        double ans = 0.5 * (180 / PI) * asin(d * 9.8 / (v * v));
        cout << setprecision(9) << std::fixed << "Case #" << tc << ": " << ans << '\n';  // format decimal places
    }
    return 0;
}  // WA
