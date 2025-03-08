#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    set< char > st;
    // O(n * log(26))
    for(int i = 1; i < (int)s.size() - 1; i += 3) {
        st.insert(s[i]);
    }
    cout << (int)st.size() << endl;
    return 0;
}
