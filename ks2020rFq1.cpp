#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Comparator
bool comp(pair<int, ll> p1, pair<int, ll> p2) {
    if (p1.second == p2.second) {
        return p1.first < p2.first;
    } else {
        return p1.second < p2.second;
    }
}

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        ll x, ai;
        vector<pair<int, ll>> q;  // <order, withdrawAmount/x>
        cin >> n >> x;
        for (int i=1; i<=n; i++) {
            cin >> ai;
            if (ai % x == 0) {
                q.push_back(make_pair(i, (ai/x)-1));
                continue;
            }
            q.push_back(make_pair(i, ai/x));
        }
        std::sort(q.begin(), q.end(), comp);
        cout << "Case #" << tc << ":";
        for (const auto &i : q) {
            cout << " " << i.first;
        }
        cout << "\n";
    }
    return 0;
}

/* TLE if using queue implementation
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
}
*/
