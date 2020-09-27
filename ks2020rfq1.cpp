# include <bits/stdc++.h>
using namespace std;

long long n, x, ai;
int arr[100000], order[100000];
int j=0;

void ans() {
    for (int i=0; i<n; ++i) {
        cout << order[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i=1; i<=t; ++i) {
        cin >> n >> x;
        for (int i=0; i<n; ++i) {
            cin >> ai;
            arr[i] = ai;   
        }
        int j=0;
        int it=ceil(1000000000/x);
        while (it--) {
            for (int i=0; i<n; ++i) {
                arr[i]-=x;
                if (arr[i]<=0) {
                    order[j] = i+1;
                    ++j;
                }
            }
            

        }

        cout << "Case #" << i << ": ";
        ans();
    }
    return 0;
}//wa