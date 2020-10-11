# include <bits/stdc++.h>
using namespace std;

long long a, b, n, k;
const int mod=1000000007;
vector<pair<int, int>> pairs;

int fact(int a) {
    while (a--) {
        a=a*fact(a-1);
    }
    return a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i=1; i<=t; ++i) {
        cin >> a >> b >> n >> k;
        for (int i=1; i<=n; ++i) {
            for (int j=1; j<n; ++j) {
                long long ia=pow(i,a);
                long long jb=pow(j,b);
                if (ia+jb%k==0) {
                    pair<int, int> p=make_pair(i,j);
                    pairs.push_back(p);
                }
            }
        }
        vector<pair<int, int>> ans;
        for (pair<int, int> p: pairs) {
            long long p1=fact(p.first);
            long long p2=p.second;
            if (p1==p2) {
                ans.push_back(p);
            }
        }
        int solve=ans.size()%mod;  
        cout << "Case #" << i << ": " << solve;
    }
    return 0;
} //wa?