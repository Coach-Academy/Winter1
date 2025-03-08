#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    // O(t * n * log(n))
    while(t--) {
        string a,b;
        cin >> a >> b;
        set< char > st;
        // O(a * log(a))
        for(auto &c : a) {
            st.insert(c);
        }
        bool flag = false;
        // O(b * log(a))
        for(auto &c : b) {
            if(st.find(c) != st.end()) {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    // O(t * n * M) M = 26
//    while(t--) {
//        string a,b;
//        cin >> a >> b;
//        bool flag = false;
//        for(char c = 'a'; c <= 'z'; c++) {
//            if(a.find(c) != a.npos && b.find(c) != a.npos) {
//                flag = true;
//                break;
//            }
//        }
//        cout << (flag ? "YES" : "NO") << endl;
//    }
    return 0;
}
