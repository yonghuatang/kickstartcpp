# include <bits/stdc++.h>
using namespace std;

int n, b, a[100000];

void solve() {
    cin >> n >> b;
    int count = 0;
    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }
    sort(a, a+n);
    for (int i=0; i<n; ++i) {    
        if (b>=a[i]) {
            b-=a[i];
            ++count;
        }
    }
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i=1; i<=t; ++i) {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
