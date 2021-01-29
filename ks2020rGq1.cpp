# include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i=1; i<=t; ++i) {
        string s;
        cin >> s;
        string kick="KICK";
        string start="START";
        int is_kick=0;
        int is_start=0;
        vector<int> kick_count={};
        vector<int> start_count={};
        int final_count=0;
        int s_length=s.length();
        int kc_length=kick_count.size();
        int sc_length=start_count.size();
        
        
        for (int i=0; i<s_length; ++i) {
            if (s[i]=='K') {
                if (s[i+1]=='I') {
                    if (s[i+2]=='C') {
                        if (s[i+3]=='K') {
                            kick_count.push_back(i);
                            ++is_kick; 
                        }
                    }
                }
            }

            if (s[i]=='S') {
                if (s[i+1]=='T') {
                    if (s[i+2]=='A') {
                        if (s[i+3]=='R') {
                            if (s[i+4]=='T') {
                                start_count.push_back(i);
                                ++is_start;                               
                            }
                        }
                    }
                }
            }

            for (int i=0; i<kc_length; ++i) {
                for (int j=0; i<sc_length; ++i) {
                    if (kick_count[i]<start_count[j]) {
                        ++final_count;
                    }
                }
            }
        }
        //cout << is_kick << " " << is_start << endl;
        /*for (int i=0; i<kc_length; ++i) {
            cout << kick_count[i] << endl;
        }*/
        cout << "Case #" << i << ": " << final_count << endl;
    }
    return 0;
}