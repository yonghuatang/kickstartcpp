# include <bits/stdc++.h>
using namespace std;

pair<int, int> mypair;
vector<int> myvector;
int n=10;

int main() {
    for (int i=1; i<n; ++i) {
        mypair={i,i+1};
        myvector.push_back(mypair);
    }
    for (pair<int, int> i=0; i<n; ++i) {
        cout << myvector[i] << endl;
    }
    return 0;
}//??