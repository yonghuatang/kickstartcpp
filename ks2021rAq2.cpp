#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> grid;
        for (int i=1; i<=r; i++) {
            for (int j=1; j<=c; j++) {
                cin >> grid[i][j];
            }
        }
        cout << "Case #" << tc << ": " << 000000 << '\n';
    }
    return 0;
}