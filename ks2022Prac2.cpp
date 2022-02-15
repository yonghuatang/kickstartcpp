#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, h = 0;
        cin >> n;
        vector<int> v;
        bool printed = false;
        for (int i=0; i<n; i++) {
            int ci, count = 0;
            cin >> ci;
            v.push_back(ci);
            for (auto it=v.begin(); it!=v.end(); it++) {
                count += ((*it) > h);
            }
            h += (count > h);
            if (!printed) {
                cout << "Case #" << tc << ":";
                printed = true;
            }
            cout << " " << h;
        }
        cout << '\n';
    }
    return 0;
}  // TLE Test set 2
