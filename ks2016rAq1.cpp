#include <bits/stdc++.h>
using namespace std;

typedef pair<string, int> PAIR;  // <name, numberOfDistinctLetters>

// Comparator
struct comp {
    bool operator()(const PAIR& p1, const PAIR& p2) {
        if (p1.second == p2.second) {
            return p1.first > p2.first;
        }
        return p1.second < p2.second;
    }
};

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        priority_queue<PAIR, vector<PAIR>, comp> pq;
        set<char> s;
        cin.ignore();
        for (int i=0; i<n; i++) {
            string name;
            s.clear();
            getline(cin, name);
            for (const auto& c : name) {
                if (c == ' ') {
                    continue;
                }
                s.insert(c);
            }
            pq.push(make_pair(name, s.size()));
        }
        cout << "Case #" << tc << ": " << pq.top().first << '\n';
    }
    return 0;
}
