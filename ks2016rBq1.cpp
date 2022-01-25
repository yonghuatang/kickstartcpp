#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Beware of int overflow!
ll sumOfArithmeticProgression(ll n) {
    return (n*n + n) / 2;
}

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int l, r;
        cin >> l >> r;
        cout << "Case #" << tc << ": " << sumOfArithmeticProgression(min(l, r)) << '\n';
    }
    return 0;
}
