#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector< int > a(n), ans, pos(n + 1);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }
        int tar = n;
        while((int)ans.size() < n) {
            while(tar >= 1 && pos[tar] == -1) {
                tar--;
            }
            for(int i = pos[tar]; i < (int)a.size(); i++) {
                ans.push_back(a[i]);
            }
            while(a.back() != tar) {
                pos[a.back()] = -1;
                a.pop_back();
            }
            pos[a.back()] = -1;
            a.pop_back();
        }
        for(int i = 0; i < n; i++) {
            cout << ans[i] <<  ' ';
        }
        cout << endl;
    }
    return 0;
}
