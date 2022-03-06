#include <bits/stdc++.h>
using namespace std;

#define FIND(element, container) std::find(container.begin(), container.end(), element) != container.end()

typedef long long ll;
typedef pair<string, int> PAIR;  // <binary string, number of complaints>

struct comp {
    bool operator()(const PAIR& p1, const PAIR& p2) {
        return p1.second > p2.second;
    }
};  // min heap comparator

typedef priority_queue<PAIR, vector<PAIR>, comp> PQ;


int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, m, p, ans = 0;
        cin >> n >> m >> p;
        // vector<int> zeros(p, 0), ones(p, 0);
        vector<string> preferences(n, "");
        for (int i=0; i<n; i++) {
            cin >> preferences[i];
            // for (int j=0; j<p; j++) {
            //     s[j] == '0' ? zeros[j]++ : ones[j]++;
            // }
        }
        vector<string> forbidden(m, "");
        for (int i=0; i<m; i++) {
            cin >> forbidden[i];
        }
        vector<PAIR> v;
        v.push_back(std::make_pair("", 0));
        PQ pq;
        vector<int> zeros(p, 0);

        for (int step=0; step<p; step++) {
            for (const string& str : preferences) {
                zeros[step] += str[step] == '0';
            }

            vector<PAIR> v_temp;
            for (const auto& item : v) {
                v_temp.push_back(std::make_pair(item.first + "0", item.second + n - zeros[step]));
                v_temp.push_back(std::make_pair(item.first + "1", item.second + zeros[step]));
            }
            v = v_temp;
            for (const auto& item : v) {
                pq.push(item);
            }

            // Retain only the best m+1 configurations
            PQ pq_temp;
            for (int i=0; i<m+1 && !pq.empty(); i++) {
                pq_temp.push(pq.top());
                pq.pop();
            }
            pq = pq_temp;
        }

        // Find if the best configuration is forbidden
        while (!pq.empty()) {
            if (!(FIND(pq.top().first, forbidden))) {
                ans = pq.top().second;
                break;
            } else {
                pq.pop();
            }
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
