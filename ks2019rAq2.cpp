#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int r, c;
        cin >> r >> c;
        vector<vector<bool>> grid(r, vector<bool>(c, 0));  // initialise
        for (int i=0; i<r; i++) {
            string s;
            cin >> s;
            for (int j=0; j<c; j++) {
                grid[r][c] = s[c];
            }
        }

        cout << "Case #" << tc << ": " << 000000 << '\n';
    }
    return 0;
} //??
