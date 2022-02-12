#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1000000007;

// bool operator==(vector<vector<bool>> vvb1, vector<vector<bool>> vvb2) {
//     // Assume that vvb1 and vvb2 are matrices of the same size (m x n)
//     int n_size = vvb1.size();
//     int m_size = vvb1[0].size();

//     for (int i=0; i<n_size; i++) {
//         for (int j=0; j<m_size; j++) {
//             if (vvb1[i][j] != vvb2[i][j]) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, m;
        bool possible = true;
        cin >> n >> m;
        int enx, eny, exx, exy;
        cin >> enx >> eny >> exx >> exy;
        vector<vector<int>> power(n, vector<int>(m, 0));
        vector<vector<int>> dp(n, vector<int>(m, 0));
        // vector<vector<int>> distance(n, vector<int>(m, INF));
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        // distance[enx][eny] = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin >> power[i][j];
            }
        }
        dp[enx][eny] = power[enx][eny];

        while (visited[exx][exy] == false && possible) {
            vector<vector<bool>> previousVisited = visited;
            for (int i=0; i<n; i++) {
                for (int j=0; j<m; j++) {
                    if (visited[i][j] == true && power[i][j] != -1) {
                        if (i-1>0 && power[i-1][j]!=-1) {
                            visited[i-1][j] = true;
                            dp[i-1][j] = max(dp[i-1][j], dp[i][j] + power[i-1][j]);
                        }
                        if (i+1<n-1 && power[i+1][j]!=-1) {
                            visited[i+1][j] = true;
                            dp[i+1][j] = max(dp[i+1][j], dp[i][j] + power[i+1][j]);
                        }
                        if (j-1>0 && power[i][j-1]!=-1) {
                            visited[i][j-1] = true;
                            dp[i][j-1] = max(dp[i][j-1], dp[i][j] + power[i][j-1]);
                        }
                        if (j+1<n-1 && power[i][j+1]!=-1) {
                            visited[i][j+1] = true;
                            dp[i][j+1] = max(dp[i][j+1], dp[i][j] + power[i][j+1]);
                        }
                    }
                }
            }
            if (visited == previousVisited) {  // comparing element-wise !!??
                possible = false;
            }
        }
        cout << "Case #" << tc << ": " << (possible ? std::to_string(dp[exx][exy]) : "Mission Impossible.") << '\n';
    }
    return 0;
}  // ??
