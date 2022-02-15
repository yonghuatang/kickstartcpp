#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000000007;

char vowel[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

bool isVowel(const char& c) {
    for (int i=0; i<=9; i++) {
        if (c == vowel[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        string s;
        cin >> s;
        int size = s.size();
        cout << "Case #" << tc << ": " << s << " is ruled by " << ( s[size-1] == 'y' || s[size-1] == 'Y' ? "nobody" : ( isVowel(s[size-1]) ? "Alice" : "Bob" ) ) << "." << '\n';
    }
    return 0;
}
