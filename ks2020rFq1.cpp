#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        ll x, ai;
        queue<pair<int, ll>> q;  // <order, withdrawAmount>
        cin >> n >> x;
        for (int i=1; i<=n; i++) {
            cin >> ai;
            q.push(make_pair(i, ai));
        }
        cout << "Case #" << tc << ":";
        while (!q.empty()) {
            auto currentPeople = q.front();
            if (currentPeople.second <= x) {
                cout << " " << currentPeople.first;
            } else {
                q.push(make_pair(currentPeople.first, currentPeople.second - x));
            }
            q.pop();
        }
        cout << "\n";
    }
    return 0;
}  // TLE
