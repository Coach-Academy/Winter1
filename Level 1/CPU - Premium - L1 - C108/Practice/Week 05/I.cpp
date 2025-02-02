#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        bool flag = true;
        for(int i = 1; i < s.size(); i++) {
            if(s[i - 1] + 1 != s[i]) {
                flag = false;
            }
        }
        if(flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}