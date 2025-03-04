#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        set< char > st;
        for(char c : s) {
            st.insert(c);
        }
        cout << n + (int)st.size() << endl;
    }
    return 0;
}
