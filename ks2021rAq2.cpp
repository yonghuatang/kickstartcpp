#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int r, c, ans;
        cin >> r >> c;
        vector<vector<bool>> grid(r, vector<bool>(c, 0));
        for (int i=1; i<=r; i++) {
            for (int j=1; j<=c; j++) {
                bool b;
                cin >> b;
                grid[i][j] = b;
            }
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
} //??