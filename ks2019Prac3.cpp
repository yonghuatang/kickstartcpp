#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

// int xi(int i, int x1, int y1, int c, int d, int e1, int f) {
//     if (i == 1) {
//         return x1;
//     } else {
//         return (c*xi(i-1) + d*yi(i-1) + e1) % f;
//     }
// }

// int yi(int i, int x1, int y1, int c, int d, int e1, int e2, int f) {

// }

// int ai(int i, int x1, int y1, int c, int d, int e1, int e2, int f) {
//     if (i == 1) {
//         return (x1 + y1) % f;
//     }
//     int xi = () % f;
//     int yi = () % f;
//     return (xi + yi) % f;
// }

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, k, x1, y1, c, d, e1, e2, f;
        cin >> n >> k >> x1 >> y1 >> c >> d >> e1 >> e2 >> f;
        std::function<int(int)> xi, yi, ai;
        auto xi = [=](int i) -> int {
            if (i == 1) {
                return x1;
            } else {
                return (c*xi(i-1) + d*yi(i-1) + e1) % f;
            }
        };
        auto yi = [=](int i) -> int {
            if (i == 1) {
                return y1;
            } else {
                return (d*xi(i-1) + c*yi(i-1) + e2) % f;
            }
        };
        auto ai = [=](int i) -> int {
            return (xi(i) + yi(i)) % f;
        };
        ll power;

        cout << "Case #" << tc << ": " << power % MOD << '\n';
    }
    return 0;
}
