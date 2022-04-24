#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        ll r, a, b;
        cin >> r >> a >> b;
        ll rad = r, sum = r * r;
        do {
            rad *= a;
            sum += rad * rad;
            rad /= b;
            sum += rad * rad;
        } while (rad);
        cout << setprecision(9) << std::fixed << "Case #" << tc << ": " << sum * M_PI << '\n';
    }
    return 0;
}
