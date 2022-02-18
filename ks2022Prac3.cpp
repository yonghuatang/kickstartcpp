#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

const int steps_x[6] = {0, 1, 1, 0, -1, -1};
const int steps_y[6] = {-1, -1, 0, 1, 1, 0};

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        vector<vector<char>> v(n, vector<char>(n, '.'));
        int blueCount = 0, redCount = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cin >> v[i][j];
                blueCount += v[i][j] == 'B';
                redCount += v[i][j] == 'R';
            }
        }
        if (abs(blueCount - redCount) >= 2) {
            cout << "Case #" << tc << ": " << "Impossible" << '\n';
        } else {
            vector<vector<char>> dp(n, vector<char>(n, 'U'));
            for (int i=0; i<n; i++) {
                if (v[i][0] == 'B') {
                    dp[i][0] = 'B';
                    for (int s=0; s<6; s++) {
                        if () {
                            dp[][] = 'X';
                        }
                    }
                }
            }
            

        }
        // "Impossible", "Blue wins", "Red wins", "Nobody wins" 
        cout << "Case #" << tc << ": " << 000000 << '\n';
    }
    return 0;
}  // ??
