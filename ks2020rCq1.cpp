#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int countdowns = 0;
        for (int i=0; i<=n-k; i++) {
            bool valid = true;
            for (int j=1; j<=k && valid; j++) {
                if (arr[i+j-1] != k-j+1) {
                    valid = false;
                }
            }
            countdowns += valid;
        }
        cout << "Case #" << tc << ": " << countdowns << endl;
    }
    return 0;
}
