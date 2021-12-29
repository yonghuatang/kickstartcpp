#include <bits/stdc++.h>
using namespace std;

vector<vector<bool>> grid; // can i define outside int main()??

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int r, c;
        cin >> r >> c;
        for (int i=1; i<=r; i++) {
            for (int j=1; j<=c; j++) {
                cin >> grid[i][j];
            }
        }
        cout << "Case #" << tc << ": " << NULL << '\n';
    }
    return 0;
}
