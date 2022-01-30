#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, b, ans = 0;
        cin >> n >> b;
        vector<int> a(n, 0);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        std::sort(a.begin(), a.end());
        for (int i=0; i<n; i++) {    
            if (b >= a[i]) {
                b -= a[i];
                ans++;
            } else {
                break;
            }
        }
        cout << "Case #" << tc << ": " << ans << endl;
    }
    return 0;
}
