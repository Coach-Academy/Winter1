#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        vector< int > a(n), ans(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int tar = n; tar >= 1; tar--) {
            int pos;
            for(int i = 0; i < n; i++) {
                if(a[i] == tar) {
                    pos = i;
                    break;
                }
            }
            vector< int > tmp;
            for(int i = pos + 1; i < n - (n - tar); i++) {
                tmp.push_back(a[i]);
            }
            for(int i = 0; i <= pos; i++) {
                tmp.push_back(a[i]);
            }
            for(int i = n - (n - tar); i < n; i++) {
                tmp.push_back(a[i]);
            }
            a = tmp;
            ans[tar - 1] = pos + 1;
        }
        for(int i = 0; i < n; i++) {
            cout << ans[i] % (i + 1) << ' ';
        }
        cout << endl;
    }
    return 0;
}

// 0 1 1 2 0 4
// 1 1 1 2 0 4
// 0 1 1 2 0 4