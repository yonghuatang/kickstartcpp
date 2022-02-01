#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, r, c, sr, sc;
        cin >> n >> r >> c >> sr >> sc;
        int er = sr, ec = sc;
        string s;
        cin >> s;
        vector<vector<bool>> visited(r, vector<bool>(c, false));
        visited[sr-1][sc-1] = true;
        for (const char& c : s) {
            switch (c) {
                case 'N':
                    do {
                        er--;
                    } while (visited[er-1][ec-1] == true);
                case 'S':
                    do {
                        er++;
                    } while (visited[er-1][ec-1] == true);
                case 'E':
                    do {
                        ec++;
                    } while (visited[er-1][ec-1] == true);
                case 'W':
                    do {
                        ec--;
                    } while (visited[er-1][ec-1] == true);
            }
            visited[er-1][ec-1] = true;
        }
        cout << "Case #" << tc << ": " << er << " " << ec << '\n';
    }
    return 0;
}  // ??
