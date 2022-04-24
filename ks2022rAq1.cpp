#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;


int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int ans = 0;
        string i, p;
        cin >> i >> p;
        int szi = i.size(), szp = p.size();
        if (szp < szi) {
            ans--;
        } else {
            for (int j=0, k=0; j<szp && k<szi; j++) {
                if (p[j] != i[k]) {
                    ans++;
                } else {
                    k++;
                }
            }
        }
        cout << "Case #" << tc << ": " << (ans != -1 ? std::to_string(ans) : "IMPOSSIBLE") << '\n';
    }
    return 0;
}
