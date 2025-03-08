#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    set< string > st;
    vector< string > a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // O(n * log)
    for(int i = n - 1; i >= 0; i--) {
        if(st.find(a[i]) == st.end()) {
            cout << a[i] << endl;
            st.insert(a[i]);
        }
    }
    return 0;
}
