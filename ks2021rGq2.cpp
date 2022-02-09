#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int k;
        cin >> k;
        vector<int> x, y;
        for (int i=0; i<k; i++) {
            int xi1, yi1, xi2, yi2;
            cin >> xi1 >> yi1 >> xi2 >> yi2;  // x_BL, y_BL, x_TR, y_TR
            x.push_back(xi1);
            x.push_back(xi2);
            y.push_back(yi1);
            y.push_back(yi2);
        }
        std::sort(x.begin(), x.end());
        std::sort(y.begin(), y.end());
        cout << "Case #" << tc << ": " << x[x.size()/2 - 1] << " " << y[y.size()/2 - 1] << '\n';
    }
    return 0;
}
