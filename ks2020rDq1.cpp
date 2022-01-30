#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, ans = 0;
        cin >> n;
        vector<int> v(n, 0);
        for (int i=0; i<n; i++) {
            cin >> v[i];
        }
        int largest = v[0];
        if (v[0] > v[1]) {  // consider the first case
            ans++;
        }
        for (int i=1; i<n-1; i++) {
            if (v[i] > largest && v[i] > v[i+1]) {
                ans++;
                largest = v[i];
            }
        }
        if (v[n-1] > largest) {  // consider the last day
            ans++;
        }
        cout << "Case #" << tc << ": " << (n == 1 ? 1 : ans) << endl;
    }
    return 0;
}
