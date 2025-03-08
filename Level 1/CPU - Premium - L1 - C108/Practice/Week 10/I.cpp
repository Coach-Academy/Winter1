#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    // O(n * logn)
    while(t--) {
        int n, r;
        cin >> n >> r;
        set< int > st;
        // O(n * logn)
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        int total = 0;
        int ans = 0;
        // O(n * logn)
        while(!st.empty() && *st.rbegin() - total > 0) {
            total += r;
            ans++;
            st.erase(--st.end());
        }
        cout << ans << endl;
    }
    return 0;
}
