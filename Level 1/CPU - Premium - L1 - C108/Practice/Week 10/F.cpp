#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector< bool > state(m + 1, false);
    // O(N + m)
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        for(int j = 1; j <= x; j++) {
            int l; cin >> l;
            state[l] = true;
        }
    }
    int ans = 0;
    for(int i = 1; i <= m; i++) {
        ans += state[i];
    }
    cout << (ans == m ? "YES" : "NO") << endl;
    return 0;
}
