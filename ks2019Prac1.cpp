// Interactive judging system
// Just a quintessential binary search problem
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int a, b;  // (a=0, b]
        cin >> a >> b;
        int n;
        cin >> n;
        int left = a + 1, right = b;
        while (true) {
            int middle = (left + right) / 2;
            cout << middle << endl;
            string s;
            cin >> s;
            if (s == "CORRECT") {
                break;
            }
            if (s == "TOO_SMALL") {
                left = middle + 1;
            }
            if (s == "TOO_BIG") {
                right = middle - 1;
            }
        }
    }
    return 0;
}