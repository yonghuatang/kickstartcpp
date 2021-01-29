# include <bits/stdc++.h>
using namespace std;

long long max_coin;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i=1; i<=t; ++i) {
        int n;
        cin >> n;
        int arr[n][n]={0};
        long long coin[n][n];
        int x;
        bool can_move=true;

        for (int i=0; i<n; ++i) {
            for (int j=0; i<n; ++i) {
                cin >> x;
                coin[i][j]=x;
            }
        }

        for (int i=0; i<n; ++i) {
            for (int j=0; i<n; ++i) {
                while (can_move) {
                    max_coin+=coin[i][j];
                    arr[i][j]=1;
                    if (i==0 || j==0) {
                        ++i;
                        ++j;
                    }
                    else if (i==n-1 || j==n-1) {
                        --i;
                        --j;
                    }
                    else if (coin[i-1][j-1]>coin[i+1][j+1] && arr[i-1][j-1]!=1 && i>0 && j>0) {
                        --i;
                        --j;
                    }
                    else if (coin[i+1][j+1]>coin[i-1][j-1] && arr[i+1][j+1]!=1 && i<n && j<n) {
                        ++i;
                        ++j;
                    }
                    else {
                        can_move=false;
                    }
                }
            }
        }
        cout << "Case #" << i << ": " << max_coin << endl;
    }
    return 0;
}