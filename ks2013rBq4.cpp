#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int b;
        cin >> b;
        vector<int> x, y;
        for (int i=0; i<b; i++) {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            x.push_back(x1);
            x.push_back(x2);
            y.push_back(y1);
            y.push_back(y2);
        }
        std::sort(x.begin(), x.end());
        std::sort(y.begin(), y.end());

        cout << "Case #" << tc << ": " << x[x.size()/2-1] << " " << y[y.size()/2-1] << '\n';
    }
    return 0;
}  // ??
