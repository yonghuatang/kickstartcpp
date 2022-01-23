#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    int t;
    cin >> t;
    for (int i=1; i<=t; ++i) {
        cin >> n;
        int arr[n];
        for (int i=0; i<n; ++i) {
            int num;
            cin >> num;
            arr[i]=num;
        }
        int max = arr[0];
        int record_breaking=0;
        for (int i=0; i<n; ++i) {
            if (arr[i]>max) {
                arr[i]=max;
                ++record_breaking;
            }
        }
        cout << "Case #" << i << ": " << record_breaking;
    }
    return 0;
}
