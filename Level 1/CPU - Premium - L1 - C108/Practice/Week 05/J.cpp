#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int test = 1; test <= T; test++) {
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        bool can = false;
        for(int start = 1; start <= n; start++) {
            for(int EndR = start; EndR <= n; EndR++) {
                string gen;
                for(int i = start; i <= EndR; i++) {
                    gen += s[i - 1];
                }
                int i = EndR - 1;
                while(gen.size() < m && i >= 1) {
                    gen += s[i - 1];
                    i--;
                }
                if(gen == t) {
                    can = true;
                }
            }
        }
        if(can) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}