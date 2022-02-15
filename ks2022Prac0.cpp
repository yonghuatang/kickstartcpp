#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, m, total = 0;
        cin >> n >> m;
        for (int i=0; i<n; i++) {
            int num;
            cin >> num;
            total += num;
        }
        cout << "Case #" << tc << ": " << total % m << '\n';
    }
    return 0;
}
