#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        vector<vector<int>> v(n*n, vector<int>(n*n, 0));
        bool valid = true;
        for (int i=0; i<n*n; i++) {
            set<int> temp;
            for (int j=0; j<n*n; j++) {
                int num;
                cin >> num;
                if (num >= 1 && num <= n*n) {
                    v[i][j] = num;
                    temp.insert(num);
                } else {
                    valid = false;
                }
            }
            if (temp.size() != n*n) {
                valid = false;
            }
        }
        for (int i=0; i<n*n && valid; i++) {
            set<int> temp;
            for (int j=0; j<n*n && valid; j++) {
                temp.insert(v[j][i]);
            }
            if (temp.size() != n*n) {
                valid = false;
            }
        }
        for (int i=0; i<n*n && valid; i+=n) {
            for (int j=0; j<n*n && valid; j+=n) {
                set<int> temp;
                for (int k=i; k<i+n; k++) {
                    for (int l=j; l<j+n; l++) {
                        temp.insert(v[k][l]);
                    }
                }
                if (temp.size() != n*n) {
                    valid = false;
                }
            }
        }
        cout << "Case #" << tc << ": " << (valid ? "Yes" : "No") << '\n';
    }
    return 0;
}
