#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

struct comp {
    bool operator()(const string& a, const string& b) {
        return a.size() < b.size();
    }
} compObject;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        ll n, p;
        cin >> n >> p;
        ll ans = pow(2, n);
        vector<string> v;
        for (int i=0; i<p; i++) {
            string s;
            cin >> s;
            v.push_back(s);
        }
        std::sort(v.begin(), v.end(), compObject);
        vector<string> uniqueSequence;
        for (int i=0; i<p; i++) {
            bool isUnique = true;
            for (int j=0; j<i; j++) {
                if (v[i].substr(0, v[j].size()) == v[j]) {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique) {
                uniqueSequence.push_back(v[i]);
            }
        }
        for (int i=0; i<uniqueSequence.size() && ans > 0; i++) {
            ans -= pow(2, n-uniqueSequence[i].size());
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
