#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        set< int > st;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        for(int i = 0; i < m; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        cout << n + m - (int)st.size() << endl;
    }
    return 0;
}
/* Way 2
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        set< int > st;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        int ans = 0;
        for(int i = 0; i < m; i++) {
            int x; cin >> x;
            if(st.insert(x).second == 0) {
                ans++;
            }
        }
        cout << ans << endl;
    }
 */