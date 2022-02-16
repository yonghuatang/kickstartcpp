// Same as kickstart 2019 Round H Q1

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
        priority_queue<int, vector<int>, std::greater<int>> pq;  // min heap
        bool printed = false;
        for (int i=0; i<n; i++) {
            int ci;
            cin >> ci;
            if (ci > h) {
                pq.push(ci);
            }
            h += (pq.size() > h);
            // print once
            if (!printed) {
                cout << "Case #" << tc << ":";
                printed = true;
            }
            cout << " " << h;
            // update the priority queue, pop the elements smaller or equal to h
            while (!pq.empty() && pq.top() <= h) {
                pq.pop();
            }
        }
        cout << '\n';
    }
    return 0;
}
