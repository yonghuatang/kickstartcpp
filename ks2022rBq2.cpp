#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

bool isPalindrome(int num) {
    string str_num = std::to_string(num);
    string str_rev = str_num;
    std::reverse(str_rev.begin(), str_rev.end());
    return str_num == str_rev;
}

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        ll a, ans = 0;
        cin >> a;
        int lim = sqrt(a);
        for (int i=1; i<=lim; i++) {
            if (a%i==0) {
                if (isPalindrome(i)) {
                    ans++;
                }
                if (isPalindrome(a/i) && a/i!=i) {
                    ans++;
                }
            }
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}
