#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int ans = 0;
        string s, f;
        cin >> s >> f;
        vector<int> favourites;
        for (const char& c : f) {
            favourites.push_back((int)c-97);  // ASCII: 'a' = 97 ~ 'z' = 122
        }
        for (const char& c : s) {
            int ascii = (int)c;
            int countIncrease = 0, countDecrease = 0;
            while () {
                if () {
                    
                }
            }
            ans += min(countIncrease, countDecrease);
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
