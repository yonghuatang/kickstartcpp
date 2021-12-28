# include <bits/stdc++.h>
using namespace std;

pair<int, int> mypair;
vector<pair<int, int>> myvector;
int n=10;

int main() {
    for (int i=1; i<=n; i++) {
        auto p = std::make_pair(i,i+1);
        myvector.push_back(p);
    }
    for (int i=0; i<n; i++) {
        cout << "Pair #" << i+1 << ": ";
        cout << myvector[i].first << " ";
        cout << myvector[i].second << endl;
    }
    return 0;
}