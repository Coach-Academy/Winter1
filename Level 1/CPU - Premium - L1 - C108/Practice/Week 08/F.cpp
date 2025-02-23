#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    deque< int > a, idx;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
        idx.push_back(i + 1);
    }
    int ans = -1;
    while(!a.empty()) {
        int x = a.front();
        int i = idx.front();
        ans = i;
        a.pop_front();
        idx.pop_front();
        x -= m;
        if(x > 0) {
            a.push_back(x);
            idx.push_back(i);
        }
    }
    cout << ans << endl;
// O(n), fast solution
//    int n, m;
//    cin >> n >> m;
//    vector< int > a(n);
//    for(int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    int ans = -1;
//    int mx = 0;
//    for(int i = 0; i < n; i++) {
//        mx = max(mx, (a[i] + m - 1) / m);
//    }
//    for(int i = 0; i < n; i++) {
//        if((a[i] + m - 1) / m == mx) {
//            ans = i + 1;
//        }
//    }
//    cout << ans << endl;
    return 0;
}
