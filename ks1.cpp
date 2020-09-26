# include <bits/stdc++.h>
using namespace std;

int n = 500;
 
int main() {
    vector<int> arr;
    int target;
    cin >> arr;
    cin >> target;
    int size;
    for (int i=0; i<=size; ++i) {
        for (int j=0; i<=size; ++j) {
            if (arr[i] + arr[j] == target) {
                cout << "Output: [" << i << ", " << j << "]" << endl;
            }
        }
    }
    return 0;
} // ??