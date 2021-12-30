# include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i=1; i<=t; ++i) {
        cin >> n;
        string arr[n];
        for (int i=0; i<n; ++i) {
            string name;
            cin >> name;
            arr[i]=name;
        }
        int count=0;
        for (string name: arr) {
            int length=sizeof(arr[i]);
            vector<char> store;
            for (int j=0; j<length; ++j) {
                if (!name[j]: store) {
                    store.push_back(name[j]);
                }
                else {
                    store.pop_back;
                }
            }
        }
        sort(arr, arr+n);
        cout << "Case #" << i << ": ";
    }
    return 0;
}//??
